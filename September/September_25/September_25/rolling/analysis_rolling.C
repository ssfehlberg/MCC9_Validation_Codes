//This is code I wrote to actually make the histograms. It produces 9 canvases: phi, cos, and length of muon: x,y,z vertex of the interaction: PFP, shower, and track particle multiplicity. The canvases include 3 plots each: MC, data, and a comparision. That last one is currently commented out because I am not sure if I quite understand it and if it is working correctly.

{

  //These are the rootfiles that you created in your .C files
  TFile *f1=new TFile("MC_beta1_histos.root");
  TFile *f2=new TFile("bnb_beta1_rolling_histos.root");
  TFile *f3=new TFile("extbnb_beta1_histos.root");
  
  // All the things for the muon candidate: anything with _1 is data and _2 is ext
  TH1D * h1 = (TH1D*)f1->Get("h_truth_phi_muon_MC");
  TH1D * h2 = (TH1D*)f1->Get("h_cos_truth_theta_muon_MC");
  TH1D * h3 = (TH1D*)f1->Get("h_muon_length_MC");
  
  TH1D * h1_1 = (TH1D*)f2->Get("h_truth_phi_muon_bnb");
  TH1D * h2_1 = (TH1D*)f2->Get("h_cos_truth_theta_muon_bnb");
  TH1D * h3_1 = (TH1D*)f2->Get("h_muon_length_bnb");

  TH1D * h1_2 = (TH1D*)f3->Get("h_truth_phi_muon_ext");
  TH1D * h2_2 = (TH1D*)f3->Get("h_cos_truth_theta_muon_ext");
  TH1D * h3_2 = (TH1D*)f3->Get("h_muon_length_ext");

  //All the things for the x,y,z coordinates of the vertex
  TH1D * h4 = (TH1D*)f1->Get("h_vertex_x_MC");
  TH1D * h5 = (TH1D*)f1->Get("h_vertex_y_MC");
  TH1D * h6 = (TH1D*)f1->Get("h_vertex_z_MC");
  
  TH1D * h4_1 = (TH1D*)f2->Get("h_vertex_x_bnb");
  TH1D * h5_1 = (TH1D*)f2->Get("h_vertex_y_bnb");
  TH1D * h6_1 = (TH1D*)f2->Get("h_vertex_z_bnb");

  TH1D * h4_2 = (TH1D*)f3->Get("h_vertex_x_ext");
  TH1D * h5_2 = (TH1D*)f3->Get("h_vertex_y_ext");
  TH1D * h6_2 = (TH1D*)f3->Get("h_vertex_z_ext");

  //All the things for the multiplicity
  // TH1D * h7 = (TH1D*)f1->Get("h_shower_MC");
  TH1D * h8 = (TH1D*)f1->Get("h_pfp_MC");
  TH1D * h9 = (TH1D*)f1->Get("h_track_MC");
  
  // TH1D * h7_1 = (TH1D*)f2->Get("h_shower_bnb");
  TH1D * h8_1 = (TH1D*)f2->Get("h_pfp_bnb");
  TH1D * h9_1 = (TH1D*)f2->Get("h_track_bnb");

  // TH1D * h7_2 = (TH1D*)f3->Get("h_shower_ext");
  TH1D * h8_2 = (TH1D*)f3->Get("h_pfp_ext");
  TH1D * h9_2 = (TH1D*)f3->Get("h_track_ext");

  ///////////////////////
  //NOW HERE IS CANVAS 1
  ////////////////////////
  TCanvas *c1= new TCanvas("c1","Phi of Muon",600,500);
  //c1->Divide(2,1);
;
  c1->cd(1);
  THStack *hs1 = new THStack("hs1","Phi of the Muon");
  hs1->SetTitle("Phi of Muon; Phi(radians);# of Events");
  hs1->Add(h1);
  hs1->Add(h1_2);  
  hs1->Draw("hist");
  h1->SetLineColor(kRed+2);
  h1->SetFillColor(kRed);
  h1->SetLineWidth(1);
  //h1->SetStats(kFALSE);
  h1_2->SetLineColor(kBlue+2);
  h1_2->SetLineWidth(1);
  h1_2->SetFillStyle(3005);
  h1_2->SetFillColor(kBlue);
  //hs1->SetAxisRange(0,450,"Y");
  h1->GetYaxis()->SetTitleOffset(2.0);

  //h1_1->Add(h1_2,-1);
  h1_1->Draw("eSAME");
  // h1_1->SetMarkerStyle(5);
  h1_1->SetLineColor(kBlack);
  h1_1->SetLineWidth(2);

  auto legend_1 = new TLegend(0.8,0.8,0.9,0.9);
  legend_1->AddEntry(h1,"MC","pf");
  legend_1->AddEntry(h1_1,"BNB_ROLLING","lepf");
  legend_1->AddEntry(h1_2, "EXT","pf");
  legend_1->SetTextFont(42);
  legend_1->Draw();

  //////////////////////
  //NOW HERE IS CANVAS 2
  //////////////////////
  TCanvas *c2= new TCanvas("c2","Cos(theta) of the Muon",600,600);
  c2->cd(1);
  
  THStack *hs2 = new THStack("hs2","Cos(theta) of the Muon");
  TPad *pad1 = new TPad("pad1", "pad1", 0, 0.3, 1, 1.0);
  pad1->SetBottomMargin(0); // Upper and lower plot are joined
  pad1->SetGridx();
  pad1->Draw();             // Draw the upper pad: pad1
  pad1->cd();               // pad1 becomes the current pad
  hs2->SetTitle("Cos(theta) of the Muon; cos(theta);# of Events");
  hs2->Add(h2);
  hs2->Add(h2_2);
  hs2->Draw("hist");
  h2->SetLineColor(kRed+2);
  h2->SetFillColor(kRed);
  h2->SetLineWidth(1);
  h2_2->SetLineColor(kBlue+2);
  h2_2->SetLineWidth(1);
  h2_2->SetFillColor(kBlue);
  h2_2->SetFillStyle(3005);

  //hs2->GetYaxis()->SetLabelSize(0.2);
  hs2->GetYaxis()->SetLabelSize(0);
  TGaxis *axis = new TGaxis( -1, 50, -1, 350,50,350, 510,"");
  axis->SetLabelFont(43); // Absolute font size in pixel (precision 3)
  axis->SetLabelSize(15);
  axis->Draw();

  hs2->GetYaxis()->SetTitleSize(20);
  hs2->GetYaxis()->SetTitleFont(43);
  hs2->GetYaxis()->SetTitleOffset(1);

  //Draw the BNB_ROLLING on the same histogram as black points with errorbars
  h2_1->Draw("eSSAME");
  h2_1->SetLineColor(kBlack);
  h2_1->SetLineWidth(2);

  auto legend_2 = new TLegend(0.75,0.75,0.9,0.9);
  legend_2->AddEntry(h2,"MC","pf");
  legend_2->AddEntry(h2_1,"BNB_ROLLING","lepf");
  legend_2->AddEntry(h2_2, "EXT","pf");
  legend_2->SetTextFont(42);
  legend_2->Draw();

     // lower plot will be in pad
  c2->cd();          // Go back to the main canvas before defining pad2
  TPad *pad2 = new TPad("pad2", "pad2", 0, 0.05, 1, 0.3);
  pad2->SetTopMargin(0);
  pad2->SetBottomMargin(0.2);
  pad2->SetGridx(); // vertical grid
  pad2->Draw();
  pad2->cd();       // pad2 becomes the current pad
  TH1F *h2_3 = (TH1F*)h2_1->Clone("h2_3");
  h2_3->Divide(h2_2);
  h2_3->Draw("ep");
  h2_3->SetStats(kFALSE);
  h2_3->SetTitle("");

     // Y axis ratio plot settings
   h2_3->GetYaxis()->SetTitle("Ratio");
   h2_3->GetYaxis()->SetNdivisions(505);
   h2_3->GetYaxis()->SetTitleSize(20);
   h2_3->GetYaxis()->SetTitleFont(43);
   h2_3->GetYaxis()->SetTitleOffset(1);
   h2_3->GetYaxis()->SetLabelFont(43); // Absolute font size in pixel (precision 3)
   h2_3->GetYaxis()->SetLabelSize(15);

   // X axis ratio plot settings
   h2_3->GetXaxis()->SetTitle("cos(theta)");
   h2_3->GetXaxis()->SetTitleSize(20);
   h2_3->GetXaxis()->SetTitleFont(43);
   h2_3->GetXaxis()->SetTitleOffset(4);
   h2_3->GetXaxis()->SetLabelFont(43); // Absolute font size in pixel (precision 3)
   h2_3->GetXaxis()->SetLabelSize(15);
  
 
  
  //////////////////////
  //NOW HERE IS CANVAS 3
  //////////////////////
  TCanvas *c3= new TCanvas("c3","Length of Muon",600,500);
  c3->cd(1);

  THStack *hs3 = new THStack("hs3","Length of Muon");
  hs3->SetTitle("Length of the Muon; Length of Track (cm);# of Events");
  hs3->Add(h3);
  hs3->Add(h3_2);
  hs3->Draw("hist");
  h3->SetLineColor(kRed+2);
  h3->SetFillColor(kRed);
  h3->SetLineWidth(1);
  h3_2->SetLineColor(kBlue+2);
  h3_2->SetLineWidth(1);
  h3_2->SetFillColor(kBlue);
  h3_2->SetFillStyle(3005);
  hs3->GetYaxis()->SetTitleOffset(1.3);
  
  h3_1->Draw("eSSAME");
  h3_1->SetLineColor(kBlack);
  h3_1->SetLineWidth(2);

  auto legend_3 = new TLegend(0.8,0.8,0.9,0.9);
  legend_3->AddEntry(h3,"MC","pf");
  legend_3->AddEntry(h3_1,"BNB_ROLLING","lepf");
  legend_3->AddEntry(h3_2, "EXT","pf");
  legend_3->SetTextFont(42);
  legend_3->Draw();
  
  //////////////////////
  //NOW HERE IS CANVAS 4
  //////////////////////
  TCanvas *c4= new TCanvas("c4","X Coordinate of Vertex",600,500);
  c4->cd(1);
  
  THStack *hs4 = new THStack("hs4","X Coordinate of Vertex");
  hs4->SetTitle("X Coordinate of Vertex; x (cm) ;# of Events");
  hs4->Add(h4);
  hs4->Add(h4_2);
  hs4->Draw("hist");
  h4->SetLineColor(kRed+2);
  h4->SetFillColor(kRed);
  h4->SetLineWidth(1);
  h4_2->SetLineColor(kBlue+2);
  h4_2->SetLineWidth(1);
  h4_2->SetFillColor(kBlue);
  h4_2->SetFillStyle(3005);
  hs4->GetYaxis()->SetTitleOffset(1.3);

  h4_1->Draw("eSSAME");
  h4_1->SetLineColor(kBlack);
  h4_1->SetLineWidth(2);

  auto legend_4 = new TLegend(0.8,0.8,0.9,0.9);
  legend_4->AddEntry(h4,"MC","pf");
  legend_4->AddEntry(h4_1,"BNB_ROLLING","lepf");
  legend_4->AddEntry(h4_2, "EXT","pf");
  legend_4->SetTextFont(42);
  legend_4->Draw();
  
  //////////////////////
  //NOW HERE IS CANVAS 5
  //////////////////////
  TCanvas *c5= new TCanvas("c5"," Y Coordinate of Vertex",600,500);
  c5->cd(1);
  
  THStack *hs5 = new THStack("hs5","Y Coordinate of Vertex");
  hs5->SetTitle("Y Coordinate of Vertex; y (cm) ;# of Events");
  hs5->Add(h5);
  hs5->Add(h5_2);
  hs5->Draw("hist");
  h5->SetLineColor(kRed+2);
  h5->SetFillColor(kRed);
  h5->SetLineWidth(1);
  h5_2->SetLineColor(kBlue+2);
  h5_2->SetLineWidth(1);
  h5_2->SetFillColor(kBlue);
  h5_2->SetFillStyle(3005);
  hs5->GetYaxis()->SetTitleOffset(1.3);

  h5_1->Draw("eSSAME");
  h5_1->SetLineColor(kBlack);
  h5_1->SetLineWidth(2);

  auto legend_5 = new TLegend(0.8,0.8,0.9,0.9);
  legend_5->AddEntry(h5,"MC","pf");
  legend_5->AddEntry(h5_1,"BNB_ROLLING","lepf");
  legend_5->AddEntry(h5_2, "EXT","pf");
  legend_5->SetTextFont(42);
  legend_5->Draw();
  

  //////////////////////
  //NOW HERE IS CANVAS 6
  //////////////////////
  TCanvas *c6= new TCanvas("c6","Z Coordinate of Vertex",600,500);
  c6->cd(1);
  
  THStack *hs6 = new THStack("hs6","Z Coordinate of Vertex");
  hs6->SetTitle("Z Coordinate of Vertex; z (cm) ;# of Events");
  hs6->Add(h6);
  hs6->Add(h6_2);
  hs6->Draw("hist");
  h6->SetLineColor(kRed+2);
  h6->SetFillColor(kRed);
  h6->SetLineWidth(1);
  h6_2->SetLineColor(kBlue+2);
  h6_2->SetLineWidth(1);
  h6_2->SetFillColor(kBlue);
  h6_2->SetFillStyle(3005);
  hs6->GetYaxis()->SetTitleOffset(1.3);

  h6_1->Draw("eSSAME");
  h6_1->SetLineColor(kBlack);
  h6_1->SetLineWidth(2);

  auto legend_6 = new TLegend(0.8,0.8,0.9,0.9);
  legend_6->AddEntry(h6,"MC","pf");
  legend_6->AddEntry(h6_1,"BNB_ROLLING","lepf");
  legend_6->AddEntry(h6_2, "EXT","pf");
  legend_6->SetTextFont(42);
  legend_6->Draw();
  

  //////////////////////
  //NOW HERE IS CANVAS 7
  //////////////////////
  // TCanvas *c7= new TCanvas("c7"," Shower Multiplicity",600,500);
  //c7->cd(1);
  /*
  h7->SetTitle("Shower Multiplicity; mult ;# of Events");
  h7->Draw("hist");
  h7->SetLineColor(kRed);
  h7->SetLineWidth(1);
  h7->SetStats(kFALSE);
  h7->GetYaxis()->SetTitleOffset(1.7);
  //h7->SetAxisRange(0,10000,"Y");
  */

  //h7_1->Add(h7_2,-1);
  // h7_1->Draw("hist");
  //h7_1->SetMarkerStyle(21);
  // h7_1->SetMarkerColor(kBlue);
  /*
  auto legend_7 = new TLegend(0.8,0.8,0.9,0.9);
  legend_7->AddEntry(h7,"MC","pf");
  legend_7->AddEntry(h7_1,"BNB_ROLLING","lepf");
  legend_7->AddEntry(h7_2, "EXT","pf");
  legend_7->SetTextFont(42);
  legend_7->Draw();
  */

  //////////////////////
  //NOW HERE IS CANVAS 8
  //////////////////////
  TCanvas *c8= new TCanvas("c8","PFP Multiplicity",600,500);
  c8->cd(1);
  
  THStack *hs8 = new THStack("hs8","PFP Multiplicity");
  hs8->SetTitle("PFP Multiplicity; mult ;# of Events");
  hs8->Add(h8);
  hs8->Add(h8_2);
  hs8->Draw("hist");
  h8->SetLineColor(kRed+2);
  h8->SetFillColor(kRed);
  h8->SetLineWidth(1);
  h8_2->SetLineColor(kBlue+2);
  h8_2->SetLineWidth(1);
  h8_2->SetFillColor(kBlue);
  h8_2->SetFillStyle(3005);
  hs8->GetYaxis()->SetTitleOffset(1.3);

  h8_1->Draw("eSSAME");
  h8_1->SetLineColor(kBlack);
  h8_1->SetLineWidth(2);

  auto legend_8 = new TLegend(0.8,0.8,0.9,0.9);
  legend_8->AddEntry(h8,"MC","pf");
  legend_8->AddEntry(h8_1,"BNB_ROLLING","lepf");
  legend_8->AddEntry(h8_2, "EXT","pf");
  legend_8->SetTextFont(42);
  legend_8->Draw();

  //////////////////////
  //NOW HERE IS CANVAS 9
  //////////////////////
  TCanvas *c9= new TCanvas("c9","Track Multiplicity",600,500);
  c9->cd(1);

  THStack *hs9 = new THStack("hs9","Track Multiplicity");
  hs9->SetTitle("Track Multiplicity; mult ;# of Events");
  hs9->Add(h9);
  hs9->Add(h9_2);
  hs9->Draw("hist");
  h9->SetLineColor(kRed+2);
  h9->SetFillColor(kRed);
  h9->SetLineWidth(1);
  h9_2->SetLineColor(kBlue+2);
  h9_2->SetLineWidth(1);
  h9_2->SetFillColor(kBlue);
  h9_2->SetFillStyle(3005);
  hs9->GetYaxis()->SetTitleOffset(1.3);

  h9_1->Draw("eSSAME");
  h9_1->SetLineColor(kBlack);
  h9_1->SetLineWidth(2);

  auto legend_9 = new TLegend(0.8,0.8,0.9,0.9);
  legend_9->AddEntry(h9,"MC","pf");
  legend_9->AddEntry(h9_1,"BNB_ROLLING","lepf");
  legend_9->AddEntry(h9_2, "EXT","pf");
  legend_9->SetTextFont(42);
  legend_9->Draw();
  


}
