////////////////////////////////////////////////////////////////////////
/// \file   ROIFinder.cc
/// \author T. Usher
////////////////////////////////////////////////////////////////////////

#include <cmath>
#include "uboone/CalData/DeconTools/ROIFinderStandard.h"
#include "art/Framework/Services/Optional/TFileService.h"
#include "messagefacility/MessageLogger/MessageLogger.h"
#include "cetlib/exception.h"
#include "lardata/DetectorInfoServices/DetectorPropertiesService.h"

#include "TH1D.h"

#include <fstream>

namespace uboone_tool
{

//----------------------------------------------------------------------
// Constructor.

ROIFinderStandard::ROIFinderStandard(const fhicl::ParameterSet& pset)
{
    configure(pset);
}
    
ROIFinderStandard::~ROIFinderStandard()
{
}
    
void ROIFinderStandard::configure(const fhicl::ParameterSet& pset)
{
    // Start by recovering the parameters
    std::vector<unsigned short> uin;
    std::vector<unsigned short> vin;
    std::vector<unsigned short> zin;
    
    fNumBinsHalf = pset.get< unsigned short >             ("NumBinsHalf", 3);
    fThreshold   = pset.get< std::vector<unsigned short> >("Threshold"     );
    fNumSigma    = pset.get< std::vector<int> >           ("NumSigma"      );
    uin          = pset.get< std::vector<unsigned short> >("uPlaneROIPad"  );
    vin          = pset.get< std::vector<unsigned short> >("vPlaneROIPad"  );
    zin          = pset.get< std::vector<unsigned short> >("zPlaneROIPad"  );
    
    if(uin.size() != 2 || vin.size() != 2 || zin.size() != 2) {
        throw art::Exception(art::errors::Configuration)
        << "u/v/z plane ROI pad size != 2";
    }
    
    fPreROIPad.resize(3);
    fPostROIPad.resize(3);
    
    // put the ROI pad sizes into more convenient vectors
    fPreROIPad[0]  = uin[0];
    fPostROIPad[0] = uin[1];
    fPreROIPad[1]  = vin[0];
    fPostROIPad[1] = vin[1];
    fPreROIPad[2]  = zin[0];
    fPostROIPad[2] = zin[1];
    
    return;
}
    
void ROIFinderStandard::FindROIs(Waveform& waveform, size_t plane, double rawNoise, CandidateROIVec& roiVec) const
{
    size_t numBins(2 * fNumBinsHalf + 1);
    size_t startBin(0);
    size_t stopBin(numBins);
    
    float startThreshold = sqrt(float(numBins)) * (fNumSigma[plane] * rawNoise + fThreshold[plane]);
    float stopThreshold  = startThreshold;
    
    // Setup
    float runningSum = std::accumulate(waveform.begin(),waveform.begin()+numBins, 0.);
    
    size_t roiStartBin(0);
    bool   roiCandStart(false);
    
    // search for ROIs - follow prescription from Bruce B using a running sum to make faster
    // Note that we start in the middle of the running sum... if we find an ROI padding will extend
    // past this to take care of ends of the waveform
    for(size_t bin = fNumBinsHalf + 1; bin < waveform.size() - fNumBinsHalf; bin++)
    {
        // handle the running sum
        // Case, we are at start of waveform
        runningSum -= waveform[startBin++];
        
        // Case, we are at end of waveform
        runningSum += waveform[stopBin++];
        
        // We have already started a candidate ROI
        if (roiCandStart)
        {
            if (fabs(runningSum) < stopThreshold)
            {
                if (bin - roiStartBin > 2) roiVec.push_back(CandidateROI(roiStartBin, bin));
                
                roiCandStart = false;
            }
        }
        // Not yet started a candidate ROI
        else
        {
            if (fabs(runningSum) > startThreshold)
            {
                roiStartBin  = bin;
                roiCandStart = true;
            }
        }
    } // bin
    
    // add the last ROI if existed
    if (roiCandStart) roiVec.push_back(CandidateROI(roiStartBin, waveform.size() - 1));
    
    // pad the ROIs
    for(auto& roi : roiVec)
    {
        // low ROI end
        roi.first  = std::max(int(roi.first - fPreROIPad[plane]),0);
        // high ROI end
        roi.second = std::min(roi.second + fPostROIPad[plane], waveform.size() - 1);
    }
    
    // merge overlapping (or touching) ROI's
    if(roiVec.size() > 1)
    {
        // temporary vector for merged ROIs
        CandidateROIVec tempRoiVec;
        
        // Loop through candidate roi's
        size_t startRoi = roiVec.front().first;
        size_t stopRoi  = startRoi;
        
        for(auto& roi : roiVec)
        {
            if (roi.first <= stopRoi) stopRoi = roi.second;
            else
            {
                tempRoiVec.push_back(CandidateROI(startRoi,stopRoi));
                
                startRoi = roi.first;
                stopRoi  = roi.second;
            }
        }
        
        // Make sure to get the last one
        tempRoiVec.push_back(CandidateROI(startRoi,stopRoi));
        
        roiVec = tempRoiVec;
    }
    
    return;
}

    
void ROIFinderStandard::outputHistograms(art::TFileDirectory& histDir) const
{
    // It is assumed that the input TFileDirectory has been set up to group histograms into a common
    // folder at the calling routine's level. Here we create one more level of indirection to keep
    // histograms made by this tool separate.
/*
    std::string dirName = "ROIFinderPlane_" + std::to_string(fPlane);
    
    art::TFileDirectory dir = histDir.mkdir(dirName.c_str());
    
    auto const* detprop      = lar::providerFrom<detinfo::DetectorPropertiesService>();
    double      samplingRate = detprop->SamplingRate();
    double      numBins      = fROIFinderVec.size();
    double      maxFreq      = 500. / samplingRate;
    std::string histName     = "ROIFinderPlane_" + std::to_string(fPlane);
    
    TH1D*       hist         = dir.make<TH1D>(histName.c_str(), "ROIFinder;Frequency(MHz)", numBins, 0., maxFreq);
    
    for(int bin = 0; bin < numBins; bin++)
    {
        double freq = maxFreq * double(bin + 0.5) / double(numBins);
        
        hist->Fill(freq, fROIFinderVec.at(bin).Re());
    }
*/
    
    return;
}
    
}