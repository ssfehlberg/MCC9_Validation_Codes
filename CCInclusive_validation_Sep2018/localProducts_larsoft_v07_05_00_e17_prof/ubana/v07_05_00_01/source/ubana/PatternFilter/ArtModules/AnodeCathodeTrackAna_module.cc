////////////////////////////////////////////////////////////////////////
// Class:       AnodeCathodeTrackAna
// Module Type: analyzer
// File:        AnodeCathodeTrackAna_module.cc
//
// Generated at Wed Aug 24 08:48:09 2016 by Wesley Ketchum using artmod
// from cetpkgsupport v1_10_02.
////////////////////////////////////////////////////////////////////////

#include "art/Framework/Core/EDAnalyzer.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"
#include "art/Framework/Principal/Handle.h"
#include "art/Framework/Principal/Run.h"
#include "art/Framework/Principal/SubRun.h"
#include "canvas/Utilities/InputTag.h"
#include "fhiclcpp/ParameterSet.h"
#include "messagefacility/MessageLogger/MessageLogger.h"

#include "art/Framework/Services/Registry/ServiceHandle.h"
#include "art/Framework/Services/Optional/TFileService.h"

#include <memory>
#include <iostream>

#include "larcore/Geometry/Geometry.h"
#include "lardata/DetectorInfoServices/DetectorPropertiesService.h"
#include "ubana/PatternFilter/PMAlgs/AnodeCathodePMAlg.h"

#include "TTree.h"
#include "lardataobj/RecoBase/Track.h"

namespace pm {
  class AnodeCathodeTrackAna;
}

class pm::AnodeCathodeTrackAna : public art::EDAnalyzer {
public:
  explicit AnodeCathodeTrackAna(fhicl::ParameterSet const & p);
  // The destructor generated by the compiler is fine for classes
  // without bare pointers or other resource use.

  // Plugins should not be copied or assigned.
  AnodeCathodeTrackAna(AnodeCathodeTrackAna const &) = delete;
  AnodeCathodeTrackAna(AnodeCathodeTrackAna &&) = delete;
  AnodeCathodeTrackAna & operator = (AnodeCathodeTrackAna const &) = delete;
  AnodeCathodeTrackAna & operator = (AnodeCathodeTrackAna &&) = delete;

  // Required functions.
  void analyze(art::Event const & e) override;

  // Selected optional functions.
  void reconfigure(fhicl::ParameterSet const & p) ;
  void beginJob() override;

private:

  // Declare member data here.
  art::InputTag     fHitLabel;
  AnodeCathodePMAlg fAlg;

  std::vector<art::InputTag> fTrackLabels;
  float                      fTrackMinDeltaX; 
  float                      fTrackMaxDeltaX; 
  
  bool fVerbose;

  TTree* fAnaTree;
  float  fTrackStartX;
  float  fTrackEndX;
  float  fTrackStartY;
  float  fTrackEndY;
  float  fTrackStartZ;
  float  fTrackEndZ;
  float  fPMFraction;
  int fTrackColIndex;
  int fRun;
  int fEvent;
  void InitializeTreeValues();
};

void pm::AnodeCathodeTrackAna::InitializeTreeValues()
{
  fTrackStartX = -99999;
  fTrackEndX   = -99999;
  fTrackStartY = -99999;
  fTrackEndY   = -99999;
  fTrackStartZ = -99999;
  fTrackEndZ   = -99999;
  fPMFraction  = -99999;
  fTrackColIndex = -99999;
  fRun = -99999;
  fEvent = -99999;
}

pm::AnodeCathodeTrackAna::AnodeCathodeTrackAna(fhicl::ParameterSet const & p)
  :
  EDAnalyzer(p)  // ,
 // More initializers here.
{ this->reconfigure(p); }

void pm::AnodeCathodeTrackAna::analyze(art::Event const & e)
{
  InitializeTreeValues();

  fRun = e.run();
  fEvent = e.event();
  
  auto const& hitVector = *e.getValidHandle< std::vector<recob::Hit> >(fHitLabel);
  fAlg.RunPatternMatching(hitVector,fPMFraction);
  if(fVerbose) std::cout << "\tDone matching. Result = " << fPMFraction << std::endl;

  unsigned int track_col_i=999999999;
  float max_diff_x = -99999; float diffx;
  recob::Track final_track;
  for(size_t i_tl=0; i_tl<fTrackLabels.size(); ++i_tl){
    auto const& trackVector = *e.getValidHandle< std::vector<recob::Track> >(fTrackLabels[i_tl]);
    for(size_t i_t=0; i_t < trackVector.size(); ++i_t){
      auto const& track = trackVector[i_t];
      diffx = std::abs(track.End().X() - track.Vertex().X());
      if (diffx > max_diff_x && diffx < fTrackMaxDeltaX && diffx > fTrackMinDeltaX){
	max_diff_x = std::abs(track.End().X() - track.Vertex().X());
	final_track = track;
	track_col_i = i_tl;
      }
    }
  }
  if(max_diff_x > fTrackMinDeltaX && max_diff_x < fTrackMaxDeltaX){
    fTrackStartX = final_track.Vertex().X();
    fTrackStartY = final_track.Vertex().Y();
    fTrackStartZ = final_track.Vertex().Z();
    fTrackEndX = final_track.End().X();
    fTrackEndY = final_track.End().Y();
    fTrackEndZ = final_track.End().Z();
    fTrackColIndex = track_col_i;
  }
  fAnaTree->Fill();
  
}

void pm::AnodeCathodeTrackAna::reconfigure(fhicl::ParameterSet const & p)
{
  auto const* geo     = lar::providerFrom<geo::Geometry>();  
  auto const* detprop = lar::providerFrom<detinfo::DetectorPropertiesService>();  
  fHitLabel = art::InputTag( p.get<std::string>("HitLabel") );
  
  fAlg.Configure(p.get<fhicl::ParameterSet>("AnodeCathodPMAlg"),*geo,*detprop);

  fTrackLabels = p.get< std::vector<art::InputTag> >("TrackLabels");
  fTrackMinDeltaX = p.get<float>("TrackMinDeltaX");
  fTrackMaxDeltaX = p.get<float>("TrackMaxDeltaX");

  fVerbose = p.get<bool>("Verbose",false);
}

void pm::AnodeCathodeTrackAna::beginJob()
{
  art::ServiceHandle<art::TFileService> tfs;
  fAnaTree = tfs->make<TTree>("ac_trkana_tree","AnodeCathodePMTrackAna");
  fAnaTree->Branch("track_start_x",&fTrackStartX,"track_start_x/F");
  fAnaTree->Branch("track_end_x",&fTrackEndX,"track_end_x/F");
  fAnaTree->Branch("track_start_y",&fTrackStartY,"track_start_y/F");
  fAnaTree->Branch("track_end_y",&fTrackEndY,"track_end_y/F");
  fAnaTree->Branch("track_start_z",&fTrackStartZ,"track_start_z/F");
  fAnaTree->Branch("track_end_z",&fTrackEndZ,"track_end_z/F");
  fAnaTree->Branch("pm_fraction",&fPMFraction,"pm_fraction/F");
  fAnaTree->Branch("track_coll",&fTrackColIndex,"track_coll/I");
  fAnaTree->Branch("run",&fRun,"run/I)");
  fAnaTree->Branch("event",&fEvent,"event/I");
}

DEFINE_ART_MODULE(pm::AnodeCathodeTrackAna)
