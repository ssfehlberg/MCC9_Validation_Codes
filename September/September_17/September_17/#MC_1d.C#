#define MC_1d_cxx
#include "MC_1d.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void MC_1d::Loop()
{

  TFile *tfile = new TFile("MC_1d_histos.root","RECREATE");
  const double wgt = 0.1809;

  //////////////////STUFF FROM ALL  SLICES////////////////

  // All the things for the x,y,z coordinates of the vertex
  TH1D * h_vertex_x_MC = new TH1D("h_vertex_x_MC","Vetex_x_MC",40,0,275);
  TH1D * h_vertex_y_MC = new TH1D("h_vertex_y_MC","Vetex_y_MC",40,-125,125);
  TH1D * h_vertex_z_MC = new TH1D("h_vertex_z_MC","Vetex_z_MC",50,0,1050);

  // All the things for th muon candidate 
  TH1D * h_cos_truth_theta_muon_MC = new TH1D("h_cos_truth_theta_muon_MC","Muon_cos(theta)_MC",25,-1,1);
  TH1D * h_truth_phi_muon_MC = new TH1D("h_truth_phi_muon_MC","Muon_phi_MC",20,-3.15,3.15);
  TH1D * h_muon_length_MC = new TH1D("h_muon_length_MC","Muon_Length_MC",30,0,700);

  // All the other things Lu asked for multiplicity
  TH1D * h_shower_MC = new TH1D("h_shower_MC","shower_MC",10,0,10);
  TH1D * h_pfp_MC = new TH1D("h_pfp_MC","PFp_MC",10,0,10);
  TH1D * h_track_MC = new TH1D("h_track_MC","track_MC",10,0,10);

  ////////////STUFF FROM THE LAST SLICE/////////////////////

 // All the things for the x,y,z coordinates of the vertex
  TH1D * h_vertex_x_MC_last = new TH1D("h_vertex_x_MC_last","Vetex_x_MC_last",40,0,275);
  TH1D * h_vertex_y_MC_last = new TH1D("h_vertex_y_MC_last","Vetex_y_MC_last",40,-125,125);
  TH1D * h_vertex_z_MC_last = new TH1D("h_vertex_z_MC_last","Vetex_z_MC_last",50,0,1050);

  // All the things for th muon candidate 
  TH1D * h_cos_truth_theta_muon_MC_last = new TH1D("h_cos_truth_theta_muon_MC_last","Muon_cos(theta)_MC_last",25,-1,1);
  TH1D * h_truth_phi_muon_MC_last = new TH1D("h_truth_phi_muon_MC_last","Muon_phi_MC_last",20,-3.15,3.15);
  TH1D * h_muon_length_MC_last = new TH1D("h_muon_length_MC_last","Muon_Length_MC_last",30,0,700);

  // All the other things Lu asked for multiplicity
  TH1D * h_shower_MC_last = new TH1D("h_shower_MC_last","shower_MC_last",10,0,10);
  TH1D * h_pfp_MC_last = new TH1D("h_pfp_MC_last","PFp_MC_last",10,0,10);
  TH1D * h_track_MC_last = new TH1D("h_track_MC_last","track_MC_last",10,0,10);


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
       
	  h_vertex_x_MC->Fill(slc_nuvtx_x.at(slc),wgt);
	  h_vertex_y_MC->Fill(slc_nuvtx_y.at(slc),wgt);
	  h_vertex_z_MC->Fill(slc_nuvtx_z.at(slc),wgt);

	  h_truth_phi_muon_MC->Fill(slc_muoncandidate_phi.at(slc),wgt);
	  h_cos_truth_theta_muon_MC->Fill(slc_muoncandidate_theta.at(slc),wgt);
	  h_muon_length_MC->Fill(slc_muoncandidate_length.at(slc),wgt);
	
	  h_shower_MC->Fill(slc_mult_shower.at(slc),wgt);
	  h_pfp_MC->Fill(slc_mult_pfp.at(slc),wgt);
	  h_track_MC->Fill(slc_mult_track.at(slc),wgt);

	 }

      h_vertex_x_MC_last->Fill(slc_nuvtx_x.at(nslices-1),wgt);
      h_vertex_y_MC_last->Fill(slc_nuvtx_y.at(nslices-1),wgt);
      h_vertex_z_MC_last->Fill(slc_nuvtx_z.at(nslices-1),wgt);

      h_truth_phi_muon_MC_last->Fill(slc_muoncandidate_phi.at(nslices-1),wgt);
      h_cos_truth_theta_muon_MC_last->Fill(slc_muoncandidate_theta.at(nslices-1),wgt);
      h_muon_length_MC_last->Fill(slc_muoncandidate_length.at(nslices-1),wgt);
	
      h_shower_MC_last->Fill(slc_mult_shower.at(nslices-1),wgt);
      h_pfp_MC_last->Fill(slc_mult_pfp.at(nslices-1),wgt);
      h_track_MC_last->Fill(slc_mult_track.at(nslices-1),wgt);

   }


  tfile->cd();
   
  //stuff for all the slices

   h_vertex_x_MC->Write();
   h_vertex_y_MC->Write();
   h_vertex_z_MC->Write();
   
   h_truth_phi_muon_MC->Write();
   h_cos_truth_theta_muon_MC->Write();
   h_muon_length_MC->Write();

   h_shower_MC->Write();
   h_pfp_MC->Write();
   h_track_MC->Write();


   //Stuff from the last slice

   h_vertex_x_MC_last->Write();
   h_vertex_y_MC_last->Write();
   h_vertex_z_MC_last->Write();
   
   h_truth_phi_muon_MC_last->Write();
   h_cos_truth_theta_muon_MC_last->Write();
   h_muon_length_MC_last->Write();

   h_shower_MC_last->Write();
   h_pfp_MC_last->Write();
   h_track_MC_last->Write();


   
   tfile->Close();



   cout<<"Program ran successfully"<<endl;
}
