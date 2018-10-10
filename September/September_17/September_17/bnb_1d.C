#define bnb_1d_cxx
#include "bnb_1d.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void bnb_1d::Loop()
{
  TFile *tfile = new TFile("bnb_1d_histos.root","RECREATE");

  //////////////////STUFF FROM ALL  SLICES////////////////

  // All the things for the x,y,z coordinates of the vertex
  TH1D * h_vertex_x_bnb = new TH1D("h_vertex_x_bnb","Vetex_x_bnb",40,0,275);
  TH1D * h_vertex_y_bnb = new TH1D("h_vertex_y_bnb","Vetex_y_bnb",40,-125,125);
  TH1D * h_vertex_z_bnb = new TH1D("h_vertex_z_bnb","Vetex_z_bnb",50,0,1050);

  // All the things for th muon candidate 
  TH1D * h_cos_truth_theta_muon_bnb = new TH1D("h_cos_truth_theta_muon_bnb","Muon_cos(theta)_bnb",25,-1,1);
  TH1D * h_truth_phi_muon_bnb = new TH1D("h_truth_phi_muon_bnb","Muon_phi_bnb",20,-3.15,3.15);
  TH1D * h_muon_length_bnb = new TH1D("h_muon_length_bnb","Muon_Length_bnb",30,0,700);

  // All the other things Lu asked for multiplicity
  TH1D * h_shower_bnb = new TH1D("h_shower_bnb","shower_bnb",10,0,10);
  TH1D * h_pfp_bnb = new TH1D("h_pfp_bnb","PFp_bnb",10,0,10);
  TH1D * h_track_bnb = new TH1D("h_track_bnb","track_bnb",10,0,10);
 
  //Momentum:
  TH1D * h_muon_momentum_bnb = new TH1D("h_muon_momentum",";True Muon Momentum [GeV];Selected Events",20,0,2.5);

  ////////////STUFF FROM THE LAST SLICE/////////////////////

 // All the things for the x,y,z coordinates of the vertex
  TH1D * h_vertex_x_bnb_last = new TH1D("h_vertex_x_bnb_last","Vetex_x_bnb_last",40,0,275);
  TH1D * h_vertex_y_bnb_last = new TH1D("h_vertex_y_bnb_last","Vetex_y_bnb_last",40,-125,125);
  TH1D * h_vertex_z_bnb_last = new TH1D("h_vertex_z_bnb_last","Vetex_z_bnb_last",50,0,1050);

  // All the things for th muon candidate 
  TH1D * h_cos_truth_theta_muon_bnb_last = new TH1D("h_cos_truth_theta_muon_bnb_last","Muon_cos(theta)_bnb_last",25,-1,1);
  TH1D * h_truth_phi_muon_bnb_last = new TH1D("h_truth_phi_muon_bnb_last","Muon_phi_bnb_last",20,-3.15,3.15);
  TH1D * h_muon_length_bnb_last = new TH1D("h_muon_length_bnb_last","Muon_Length_bnb_last",30,0,700);

  // All the other things Lu asked for multiplicity
  TH1D * h_shower_bnb_last = new TH1D("h_shower_bnb_last","shower_bnb_last",10,0,10);
  TH1D * h_pfp_bnb_last = new TH1D("h_pfp_bnb_last","PFp_bnb_last",10,0,10);
  TH1D * h_track_bnb_last = new TH1D("h_track_bnb_last","track_bnb_last",10,0,10);


  ////DA LOOP!
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;
   cout << "Total # of Events:" << nentries<<endl;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      for(int slc = 0; slc < nslices; slc ++)

	{
       
       h_vertex_x_bnb->Fill(slc_nuvtx_x.at(slc));
       h_vertex_y_bnb->Fill(slc_nuvtx_y.at(slc));
       h_vertex_z_bnb->Fill(slc_nuvtx_z.at(slc));

       h_truth_phi_muon_bnb->Fill(slc_muoncandidate_phi.at(slc));
       h_cos_truth_theta_muon_bnb->Fill(slc_muoncandidate_theta.at(slc));
       h_muon_length_bnb->Fill(slc_muoncandidate_length.at(slc));
	
       h_shower_bnb->Fill(slc_mult_shower.at(slc));
       h_pfp_bnb->Fill(slc_mult_pfp.at(slc));
       h_track_bnb->Fill(slc_mult_track.at(slc));

   	 }

       h_vertex_x_bnb_last->Fill(slc_nuvtx_x.at(nslices-1));
       h_vertex_y_bnb_last->Fill(slc_nuvtx_y.at(nslices-1));
       h_vertex_z_bnb_last->Fill(slc_nuvtx_z.at(nslices-1));

       h_truth_phi_muon_bnb_last->Fill(slc_muoncandidate_phi.at(nslices-1));
       h_cos_truth_theta_muon_bnb_last->Fill(slc_muoncandidate_theta.at(nslices-1));
       h_muon_length_bnb_last->Fill(slc_muoncandidate_length.at(nslices-1));
	
       h_shower_bnb_last->Fill(slc_mult_shower.at(nslices-1));
       h_pfp_bnb_last->Fill(slc_mult_pfp.at(nslices-1));
       h_track_bnb_last->Fill(slc_mult_track.at(nslices-1));

       h_muon_momentum_bnb->Fill(true_muon_mom.at(nslices-1));

   }


  tfile->cd();
   
  //stuff for all the slices

   h_vertex_x_bnb->Write();
   h_vertex_y_bnb->Write();
   h_vertex_z_bnb->Write();
   
   h_truth_phi_muon_bnb->Write();
   h_cos_truth_theta_muon_bnb->Write();
   h_muon_length_bnb->Write();

   h_shower_bnb->Write();
   h_pfp_bnb->Write();
   h_track_bnb->Write();


   //Stuff from the last slice

   h_vertex_x_bnb_last->Write();
   h_vertex_y_bnb_last->Write();
   h_vertex_z_bnb_last->Write();
   
   h_truth_phi_muon_bnb_last->Write();
   h_cos_truth_theta_muon_bnb_last->Write();
   h_muon_length_bnb_last->Write();

   h_shower_bnb_last->Write();
   h_pfp_bnb_last->Write();
   h_track_bnb_last->Write();

   h_muon_momentum_bnb->Write();


   
   tfile->Close();



   cout<<"Program ran successfully"<<endl;
   
}
