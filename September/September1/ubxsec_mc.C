#define ubxsec_mc_cxx
#include "ubxsec_mc.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void ubxsec_mc::Loop()
{
//   In a ROOT session, you can do:
//      root> .L ubxsec_mc.C
//      root> ubxsec_mc t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

  TFile *tfile = new TFile("mc.root","RECREATE");

  const double wgt = 0.216;
  const int num = 3;
  cout<<"just show me what num is!"<<num<<endl;

  // All the things for the x,y,z coordinates of the vertex
  TH1D * h_vertex_x_mc = new TH1D("h_vertex_x_mc","Vetex_x_mc",25,0,300);
  TH1D * h_vertex_y_mc = new TH1D("h_vertex_y_mc","Vetex_y_mc",25,-125,125);
  TH1D * h_vertex_z_mc = new TH1D("h_vertex_z_mc","Vetex_z_mc",25,0,1200);

  // All the things for th muon candidate 
  TH1D * h_cos_truth_theta_muon_mc = new TH1D("h_cos_truth_theta_muon_mc","Muon cos(theta)_mc",25,-1,1);
  TH1D * h_truth_phi_muon_mc = new TH1D("h_truth_phi_muon_mc","Muon_phi_mc",25,0,3.14);
  TH1D * h_muon_length_mc = new TH1D("h_muon_length_mc","Muon_Length_mc",25,0,500);

  // All the other things Lu asked for multiplicity
  TH1D * h_shower_mc = new TH1D("h_shower_mc","shower_mc",25,0,5);
  TH1D * h_pfp_mc = new TH1D("h_pfp_mc","PFp_mc",25,0,5);
  TH1D * h_track_mc = new TH1D("h_track_mc","track_mc",25,0,5);


   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;
   cout << "Total # of Events:" << nentries<<endl;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;


      //Cuts to be applied before filling the histograms
      //You would put a if statement around the following 9 lines. We don't need them for now.
      
      for(double i=0; i<=nentries; i++)
	{
       
       h_vertex_x_mc->Fill(slc_nuvtx_x[i],wgt);
       h_vertex_y_mc->Fill(slc_nuvtx_y[i],wgt);
       h_vertex_z_mc->Fill(slc_nuvtx_z[i],wgt);

       h_truth_phi_muon_mc->Fill(slc_muoncandidate_phi[i],wgt);
       h_cos_truth_theta_muon_mc->Fill(cos(slc_muoncandidate_theta[i]),wgt);
       h_muon_length_mc->Fill(slc_muoncandidate_length[i],wgt);

	}
      
      for(int i=0 ; i<=nentries; i++)
	{
       h_shower_mc->Fill(slc_mult_shower[i],wgt);
       h_pfp_mc->Fill(slc_mult_pfp[i],wgt);
       h_track_mc->Fill(slc_mult_track[i],wgt);
	}
  
   }

   tfile->cd();
   
   h_vertex_x_mc->Write();
   h_vertex_y_mc->Write();
   h_vertex_z_mc->Write();
   
   h_truth_phi_muon_mc->Write();
   h_cos_truth_theta_muon_mc->Write();
   h_muon_length_mc->Write();

   h_shower_mc->Write();
   h_pfp_mc->Write();
   h_track_mc->Write();
   
   tfile->Close();
   cout<<"Program ran successfully"<<endl;
}
