#define extbnb_1d_cxx
#include "extbnb_1d.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void extbnb_1d::Loop()
{
  TFile *tfile = new TFile("extbnb_1d_histos.root","RECREATE");

  const double wgt = 0.635926;

  //////////////////STUFF FROM ALL  SLICES////////////////

  // All the things for the x,y,z coordinates of the vertex
  TH1D * h_vertex_x_ext = new TH1D("h_vertex_x_ext","Vetex_x_ext",40,0,275);
  TH1D * h_vertex_y_ext = new TH1D("h_vertex_y_ext","Vetex_y_ext",40,-125,125);
  TH1D * h_vertex_z_ext = new TH1D("h_vertex_z_ext","Vetex_z_ext",50,0,1050);

  // All the things for th muon candidate 
  TH1D * h_cos_truth_theta_muon_ext = new TH1D("h_cos_truth_theta_muon_ext","Muon_cos(theta)_ext",25,-1,1);
  TH1D * h_truth_phi_muon_ext = new TH1D("h_truth_phi_muon_ext","Muon_phi_ext",20,-3.15,3.15);
  TH1D * h_muon_length_ext = new TH1D("h_muon_length_ext","Muon_Length_ext",30,0,700);

  // All the other things Lu asked for multiplicity
  TH1D * h_shower_ext = new TH1D("h_shower_ext","shower_ext",10,0,10);
  TH1D * h_pfp_ext = new TH1D("h_pfp_ext","PFp_ext",10,0,10);
  TH1D * h_track_ext = new TH1D("h_track_ext","track_ext",10,0,10);

  ////////////STUFF FROM THE LAST SLICE/////////////////////

 // All the things for the x,y,z coordinates of the vertex
  TH1D * h_vertex_x_ext_last = new TH1D("h_vertex_x_ext_last","Vetex_x_ext_last",40,0,275);
  TH1D * h_vertex_y_ext_last = new TH1D("h_vertex_y_ext_last","Vetex_y_ext_last",40,-125,125);
  TH1D * h_vertex_z_ext_last = new TH1D("h_vertex_z_ext_last","Vetex_z_ext_last",50,0,1050);

  // All the things for th muon candidate 
  TH1D * h_cos_truth_theta_muon_ext_last = new TH1D("h_cos_truth_theta_muon_ext_last","Muon_cos(theta)_ext_last",25,-1,1);
  TH1D * h_truth_phi_muon_ext_last = new TH1D("h_truth_phi_muon_ext_last","Muon_phi_ext_last",20,-3.15,3.15);
  TH1D * h_muon_length_ext_last = new TH1D("h_muon_length_ext_last","Muon_Length_ext_last",30,0,700);

  // All the other things Lu asked for multiplicity
  TH1D * h_shower_ext_last = new TH1D("h_shower_ext_last","shower_ext_last",10,0,10);
  TH1D * h_pfp_ext_last = new TH1D("h_pfp_ext_last","PFp_ext_last",10,0,10);
  TH1D * h_track_ext_last = new TH1D("h_track_ext_last","track_ext_last",10,0,10);


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
       
	  h_vertex_x_ext->Fill(slc_nuvtx_x.at(slc),wgt);
	  h_vertex_y_ext->Fill(slc_nuvtx_y.at(slc),wgt);
	  h_vertex_z_ext->Fill(slc_nuvtx_z.at(slc),wgt);

	  h_truth_phi_muon_ext->Fill(slc_muoncandidate_phi.at(slc),wgt);
	  h_cos_truth_theta_muon_ext->Fill(slc_muoncandidate_theta.at(slc),wgt);
	  h_muon_length_ext->Fill(slc_muoncandidate_length.at(slc),wgt);
	
	  h_shower_ext->Fill(slc_mult_shower.at(slc),wgt);
	  h_pfp_ext->Fill(slc_mult_pfp.at(slc),wgt);
	  h_track_ext->Fill(slc_mult_track.at(slc),wgt);

	 }

      h_vertex_x_ext_last->Fill(slc_nuvtx_x.at(nslices-1),wgt);
      h_vertex_y_ext_last->Fill(slc_nuvtx_y.at(nslices-1),wgt);
      h_vertex_z_ext_last->Fill(slc_nuvtx_z.at(nslices-1),wgt);

      h_truth_phi_muon_ext_last->Fill(slc_muoncandidate_phi.at(nslices-1),wgt);
      h_cos_truth_theta_muon_ext_last->Fill(slc_muoncandidate_theta.at(nslices-1),wgt);
      h_muon_length_ext_last->Fill(slc_muoncandidate_length.at(nslices-1),wgt);
	
      h_shower_ext_last->Fill(slc_mult_shower.at(nslices-1),wgt);
      h_pfp_ext_last->Fill(slc_mult_pfp.at(nslices-1),wgt);
      h_track_ext_last->Fill(slc_mult_track.at(nslices-1),wgt);

   }


  tfile->cd();
   
  //stuff for all the slices

   h_vertex_x_ext->Write();
   h_vertex_y_ext->Write();
   h_vertex_z_ext->Write();
   
   h_truth_phi_muon_ext->Write();
   h_cos_truth_theta_muon_ext->Write();
   h_muon_length_ext->Write();

   h_shower_ext->Write();
   h_pfp_ext->Write();
   h_track_ext->Write();


   //Stuff from the last slice

   h_vertex_x_ext_last->Write();
   h_vertex_y_ext_last->Write();
   h_vertex_z_ext_last->Write();
   
   h_truth_phi_muon_ext_last->Write();
   h_cos_truth_theta_muon_ext_last->Write();
   h_muon_length_ext_last->Write();

   h_shower_ext_last->Write();
   h_pfp_ext_last->Write();
   h_track_ext_last->Write();

   tfile->Close();

   cout<<"Program ran successfully"<<endl;
}
