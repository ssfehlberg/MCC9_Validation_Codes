//This is code I wrote to actually make the histograms. It produces 9 canvases: phi, cos, and length of muon: x,y,z vertex of the interaction: PFP, shower, and track particle multiplicity. The canvases include 3 plots each: MC, data, and a comparision. That last one is currently commented out because I am not sure if I quite understand it and if it is working correctly.

{

  //These are the rootfiles that you created in your .C files
  TFile * f1=new TFile("MC_1d_histos.root");
  TFile * f2=new TFile("bnb_1d_histos.root");
  TFile * f3=new TFile("extbnb_1d_histos.root");
  
  // All the things for the muon candidate: anything with _1 is data and _2 is ext
  TH1D *h1 = (TH1D*)f1->Get("h_truth_phi_muon_MC");
  TH1D *h2 = (TH1D*)f1->Get("h_cos_truth_theta_muon_MC");
  TH1D *h3 = (TH1D*)f1->Get("h_muon_length_MC");
  
  TH1D *h1_1 = (TH1D*)f2->Get("h_truth_phi_muon_bnb");
  TH1D *h2_1 = (TH1D*)f2->Get("h_cos_truth_theta_muon_bnb");
  TH1D *h3_1 = (TH1D*)f2->Get("h_muon_length_bnb");

  TH1D *h1_2 = (TH1D*)f3->Get("h_truth_phi_muon_ext");
  TH1D *h2_2 = (TH1D*)f3->Get("h_cos_truth_theta_muon_ext");
  TH1D *h3_2 = (TH1D*)f3->Get("h_muon_length_ext");

  //All the things for the x,y,z coordinates of the vertex
  TH1D *h4 = (TH1D*)f1->Get("h_vertex_x_MC_last");
  TH1D *h5 = (TH1D*)f1->Get("h_vertex_y_MC");
  TH1D *h6 = (TH1D*)f1->Get("h_vertex_z_MC");
  
  TH1D *h4_1 = (TH1D*)f2->Get("h_vertex_x_bnb_last");
  TH1D *h5_1 = (TH1D*)f2->Get("h_vertex_y_bnb");
  TH1D *h6_1 = (TH1D*)f2->Get("h_vertex_z_bnb");

  TH1D *h4_2 = (TH1D*)f3->Get("h_vertex_x_ext_last");
  TH1D *h5_2 = (TH1D*)f3->Get("h_vertex_y_ext");
  TH1D *h6_2 = (TH1D*)f3->Get("h_vertex_z_ext");

  //TH1D *h4_3 = (TH1D*)f3->Get("h_vertex_x_ext");->Clone();

  //All the things for the multiplicity
  TH1D *h7 = (TH1D*)f1->Get("h_shower_MC");
  TH1D *h8 = (TH1D*)f1->Get("h_pfp_MC");
  TH1D *h9 = (TH1D*)f1->Get("h_track_MC");
  
  TH1D *h7_1 = (TH1D*)f2->Get("h_shower_bnb");
  TH1D *h8_1 = (TH1D*)f2->Get("h_pfp_bnb");
  TH1D *h9_1 = (TH1D*)f2->Get("h_track_bnb");

  TH1D *h7_2 = (TH1D*)f3->Get("h_shower_ext");
  TH1D *h8_2 = (TH1D*)f3->Get("h_pfp_ext");
  TH1D *h9_2 = (TH1D*)f3->Get("h_track_ext");
  /*
  ///////////////////////
  //NOW HERE IS CANVAS 1
  ////////////////////////
  TCanvas *c1= new TCanvas("c1","Phi of Muon",1200,500);
  c1->Divide(2,1);

  c1->cd(1);
  h1->SetTitle("Phi of Muon; Phi(radians);# of Events");
  h1->Draw("hist");
  //h1->Scale(0.1809);
  h1->SetLineColor(kRed);
  h1->SetLineWidth(1);
  h1->SetStats(kFALSE);
  h1->GetYaxis()->SetTitleOffset(1.5);

  c1->cd(2);
  //h1_2->Scale(0.635926);
  //h1_1->Add(h1_2,-1);
  h1_1->Draw("hist");
  //h1_1->SetMarkerStyle(5);
  h1_1->SetMarkerColor(kBlue);
  h1_2->Draw("SAME");
  h1_2->SetLineColor(kGreen);

  TH1D * h_vtxx=(TH1D*)h1_1->Clone();
  TH1D * h_vtxx_1=(TH1D*)h1_2->Clone();
  // h_vtxx_1->Scale(0.635926);
  h_vtxx->Add(h_vtxx_1,-1);
  h_vtxx->Draw("SAME");
  h_vtxx->SetLineColor(kMagenta);

  auto legend_1 = new TLegend(0.8,0.8,0.9,0.9);
  legend_1->AddEntry(h1,"MC");
  legend_1->AddEntry(h1_1,"BNB-EXT");
  legend_1->SetTextFont(42);
  legend_1->Draw();

  //////////////////////
  //NOW HERE IS CANVAS 2
  //////////////////////
  TCanvas *c2= new TCanvas("c2","Cos(theta) of the Muon",600,500);
  c2->cd(1);
  
  h2->SetTitle("Cos(theta) of the Muon; cos(theta);# of Events");
  h2->Draw("hist");
  //h2->Scale(0.1809);
  h2->SetLineColor(kRed);
  h2->SetLineWidth(1);
  h2->SetStats(kFALSE);
  h2->GetYaxis()->SetTitleOffset(1.5);
  
  //h2_2->Scale(0.635926);
  h2_1->Add(h2_2,-1);
  h2_1->Draw("SAMEP");
  h2_1->SetMarkerStyle(21);
  h2_1->SetMarkerColor(kBlue);
  
  auto legend_2 = new TLegend(0.8,0.8,0.9,0.9);
  legend_2->AddEntry(h2,"MC");
  legend_2->AddEntry(h2_1,"BNB-EXT");
  legend_2->SetTextFont(42);
  legend_2->Draw();

  //////////////////////
  //NOW HERE IS CANVAS 3
  //////////////////////
  TCanvas *c3= new TCanvas("c3","Length of Muon",600,500);
  c3->cd(1);

  h3->SetTitle("Length of the Muon; Length of Track (cm));# of Events");
  h3->Draw("hist");
  //Double_t c0 = 0.1809/h2->Integral();
  // h3->Scale(0.1809);
  h3->SetLineColor(kRed);
  h3->SetLineWidth(1);
  h3->SetStats(kFALSE);
  h3->GetYaxis()->SetTitleOffset(1.5);

  //h3_2->Scale(0.635926);
  h3_1->Add(h3_2,-1);
  h3_1->Draw("SAMEP");
  h3_1->SetMarkerStyle(21);
  h3_1->SetMarkerColor(kBlue);

  //h3_1->Draw("SAME");
  //h3_1->SetLineColor(kBlue);
  //h3_1->SetLineWidth(1);
  //Double_t c_1 = 1722807.0/h3_1->Integral();
  //h3_1->Scale(1722807.0);

  //h3_2->Draw("SAME");
  //h3_2->SetLineColor(kGreen+2);
  //h3_2->SetLineWidth(1);
  //Double_t c_2 = 0.635926/h3_2->Integral();
  //h3_2->Scale(0.635926);

  auto legend_3 = new TLegend(0.8,0.8,0.9,0.9);
  legend_3->AddEntry(h3,"MC");
  legend_3->AddEntry(h3_1,"BNB-EXT");
  // legend_3->AddEntry(h3_2,"EXT");
  legend_3->SetTextFont(42);
  legend_3->Draw();
*/
  //////////////////////
  //NOW HERE IS CANVAS 4
  //////////////////////
  TCanvas *c4= new TCanvas("c4","X Coordinate of Vertex",600,500);
  c4->cd(1);
  TH1D * h_vtxx_d=(TH1D*)h4_1->Clone();
   h_vtxx_d->Add(h4_2,-1);
  h4->SetTitle("X Coordinate of Vertex; x (cm) ;# of Events");
  h4->Draw("hist");
  //Double_t d0 = 1/h4->Integral();
  //h4->Scale(0.1809);
  h4->SetLineColor(kRed);
  h4->SetMaximum(4000);
  h4->SetLineWidth(1);
  h4->SetStats(kFALSE);
  h4->GetYaxis()->SetTitleOffset(1.5);

  // h4_2->Draw();
  //h4_2->Scale(0.635926); 
  //  h4_1->Add(h4_2,-1);
  //h4_1->Draw("P");
  //h4_2->Scale(0.635926);
  //h4_1->Scale(0.635926);
  h4_1->SetMarkerStyle(21);
  h4_1->SetMarkerColor(kBlue);

  

  h_vtxx_d->Draw("eSAME");
  //h4_1->SetLineColor(kBlue);
  //h4_1->SetLineWidth(1);
  //Double_t d1 = 1/h4_1->Integral();
  //h4_1->Scale(d1);

  //h4_2->Draw("SAME");
  //h4_2->SetLineColor(kGreen+2);
  //h4_2->SetLineWidth(1);
  //Double_t d2 = 0.635926/h4_2->Integral();
  //h4_2->Scale(0.635926);

  auto legend_4 = new TLegend(0.8,0.8,0.9,0.9);
  legend_4->AddEntry(h4,"MC","l");
  legend_4->AddEntry(h_vtxx_d,"BNB-EXT","lep");
  // legend_4->AddEntry(h4_2,"EXT");
  legend_4->SetTextFont(42);
  legend_4->Draw();
  /*
  //////////////////////
  //NOW HERE IS CANVAS 5
  //////////////////////
  TCanvas *c5= new TCanvas("c5"," Y Coordinate of Vertex",600,500);
  c5->cd(1);

  h5->SetTitle("Y Coordinate of Vertex; y (cm) ;# of Events");
  h5->Draw("hist");
  // Double_t e0 = 0.1809/h5->Integral();
  //h5->Scale(0.1809);
  h5->SetLineColor(kRed);
  h5->SetLineWidth(1);
  h5->SetStats(kFALSE);
  h5->GetYaxis()->SetTitleOffset(1.5);

  //h5_1->Draw("SAME");
  //h5_1->SetLineColor(kBlue);
  //h5_1->SetLineWidth(1);
  // Double_t e1 = 1722807.0/h5_1->Integral();
  //h5_1->Scale(1722807.0);

  //h5_2->Draw("SAME");
  //h5_2->SetLineColor(kGreen+2);
  //h5_2->SetLineWidth(1);
  //Double_t e2 = 0.635926/h5_2->Integral();
  //h5_2->Scale(0.635926);

  //h5_2->Scale(0.635926);
  h5_1->Add(h5_2,-1);
  h5_1->Draw("SAMEP");
  h5_1->SetMarkerStyle(21);
  h5_1->SetMarkerColor(kBlue);

  auto legend_5 = new TLegend(0.8,0.8,0.9,0.9);
  legend_5->AddEntry(h5,"MC");
  legend_5->AddEntry(h5_1,"BNB-EXT");
  //legend_5->AddEntry(h5_2,"EXT");
  legend_5->SetTextFont(42);
  legend_5->Draw();

  //////////////////////
  //NOW HERE IS CANVAS 6
  //////////////////////
  TCanvas *c6= new TCanvas("c6","Z Coordinate of Vertex",600,500);
  c6->cd(1);

  h6->SetTitle("Z Coordinate of Vertex; z (cm) ;# of Events");
  h6->Draw("hist");
  //Double_t f0 = 0.1809/h6->Integral();
  //h6->Scale(0.1809);
  h6->SetLineColor(kRed);
  h6->SetLineWidth(1);
  h6->SetStats(kFALSE);
  h6->GetYaxis()->SetTitleOffset(1.5);

  // h6_1->Draw("SAME");
  //h6_1->SetLineColor(kBlue);
  //h6_1->SetLineWidth(1);
  //Double_t f_1 = 1722807.0/h6_1->Integral();
  //h6_1->Scale(1722807.0);

  //h6_2->Draw("SAME");
  //h6_2->SetLineColor(kGreen+2);
  //h6_2->SetLineWidth(1);
  // Double_t f_2 = 0.635926/h6_2->Integral();
  //h6_2->Scale(0.635926);

  //h6_2->Scale(0.635926);
  h6_1->Add(h6_2,-1);
  h6_1->Draw("SAMEP");
  h6_1->SetMarkerStyle(21);
  h6_1->SetMarkerColor(kBlue);

  auto legend_6 = new TLegend(0.8,0.8,0.9,0.9);
  legend_6->AddEntry(h6,"MC");
  legend_6->AddEntry(h6_1,"BNB-EXT");
  //legend_6->AddEntry(h6_2,"EXT");
  legend_6->SetTextFont(42);
  legend_6->Draw();

  //////////////////////
  //NOW HERE IS CANVAS 7
  //////////////////////
  TCanvas *c7= new TCanvas("c7"," Shower Multiplicity",600,500);
  c7->cd(1);

  h7->SetTitle("Shower Multiplicity; mult ;# of Events");
  h7->Draw("hist");
  //Double_t g0 = 0.1809/h7->Integral();
  //h7->Scale(0.1809);
  h7->SetLineColor(kRed);
  h7->SetLineWidth(1);
  h7->SetStats(kFALSE);
  h7->GetYaxis()->SetTitleOffset(1.7);

  //h7_1->Draw("SAME");
  //h7_1->SetLineColor(kBlue);
  //h7_1->SetLineWidth(1);
  //Double_t g1 = 1722807.0/h7_1->Integral();
  //h7_1->Scale(1722807.0);

  //h7_2->Draw("SAME");
  //h7_2->SetLineColor(kGreen+2);
  //h7_2->SetLineWidth(1);
  //Double_t g2 = 0.635926/h7_2->Integral();
  //h7_2->Scale(0.635926);
  
  //h7_2->Scale(0.635926);
  h7_1->Add(h7_2,-1);
  h7_1->Draw("SAMEP");
  h7_1->SetMarkerStyle(21);
  h7_1->SetMarkerColor(kBlue);

  auto legend_7 = new TLegend(0.8,0.8,0.9,0.9);
  legend_7->AddEntry(h7,"MC");
  legend_7->AddEntry(h7_1,"BNB-EXT");
  //legend_7->AddEntry(h7_2,"EXT");
  legend_7->SetTextFont(42);
  legend_7->Draw();

  //////////////////////
  //NOW HERE IS CANVAS 8
  //////////////////////
  TCanvas *c8= new TCanvas("c8"," PFP Multiplicity ",600,500);
  c8->cd(1);

  h8->SetTitle("PFP Multiplicity; mult ;# of Events");
  h8->Draw("hist");
  //Double_t i0 = 0.1809/h8->Integral();
  //h8->Scale(0.1809);
  h8->SetLineColor(kRed);
  h8->SetLineWidth(1);
  h8->SetStats(kFALSE);
  h8->GetYaxis()->SetTitleOffset(1.5);

  //h8_1->Draw("SAME*");
  //h8_1->SetMarkerColor(kBlue);
  //h8_1->SetMarkersize(1);
  //Double_t i1 = 1722807.0/h8_1->Integral();
  //h8_1->Scale(1722807.0);

  //h8_2->Draw("SAME*");
  //h8_2->SetMarkerColor(kGreen+2);
  //h8_2->SetMarkerSize(1);
  // Double_t i2 = 0.635926/h8_2->Integral();
  //h8_2->Scale(0.635926);

  h8_2->Scale(0.635926);
  h8_1->Add(h8_2,-1);
  h8_1->Draw("SAMEP");
  h8_1->SetMarkerStyle(21);
  h8_1->SetMarkerColor(kBlue);

  auto legend_8 = new TLegend(0.8,0.8,0.9,0.9);
  legend_8->AddEntry(h8,"MC");
  legend_8->AddEntry(h8_1,"BNB-EXT");
  //legend_8->AddEntry(h8_2,"EXT");
  legend_8->SetTextFont(42);
  legend_8->Draw();

  //////////////////////
  //NOW HERE IS CANVAS 9
  //////////////////////
  TCanvas *c9= new TCanvas("c9","Track Multiplicity",1200,500);
  c9->Divide(2,1);

  c9->cd(1);
  h9->SetTitle("Track Multiplicity; mult ;# of Events");
  h9->Draw("hist");
  //Double_t j0 = 0.1809/h9->Integral();
  //h9->Scale(0.1809);
  h9->SetLineColor(kRed);
  h9->SetLineWidth(1);
  h9->SetStats(kFALSE);
  h9->GetYaxis()->SetTitleOffset(1.5);

  //h9_1->Draw("SAME*");
  //h9_1->SetLineColor(kBlue);
  //h9_1->SetLineWidth(1);
  //Double_t j1 = 1722807.0/h9_1->Integral();
  //h9_1->Scale(1722807.0);

  //h9_2->Draw("SAME*");
  //h9_2->SetLineColor(kGreen+2);
  //h9_2->SetLineWidth(1);
  //Double_t j2 = 0.635926/h9_2->Integral();
  //h9_2->Scale(0.635926);

  c9->cd(2);
  //h9_2->Scale(0.635926);
  h9_1->Add(h9_2,-1);
  h9_1->Draw("P");
  //h9_1->SetMarkerStyle(21);
  h9_1->SetMarkerColor(kBlue);
  h9_1->SetStats(kFALSE);
  h9_1->GetYaxis()->SetTitleOffset(1.5);

  auto legend_9 = new TLegend(0.8,0.8,0.9,0.9);
  legend_9->AddEntry(h9,"MC");
  legend_9->AddEntry(h9_1,"BNB-EXT");
  //legend_9->AddEntry(h9_2,"EXT");
  legend_9->SetTextFont(42);
  legend_9->Draw();
  */
}
