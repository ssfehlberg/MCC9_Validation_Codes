//This is code I wrote to actually make the histograms. It produces 9 canvases: phi, cos, and length of muon: x,y,z vertex of the interaction: PFP, shower, and track particle multiplicity. The canvases include 3 plots each: MC, data, and a comparision. That last one is currently commented out because I am not sure if I quite understand it and if it is working correctly.

{

  //These are the rootfiles that you created in your .C files
  TFile * f1=new TFile("mc.root");
  TFile * f2=new TFile("extbnb.root");

  // Now get the plots that you made in the .C files. NOTE: THXD must be same as whatever you defined in the .C macro!  
  // All the things for the muon candidate: anything with _1 is data
  TH1D *h1 = (TH1D*)f1->Get("h_truth_phi_muon_mc");
  TH1D *h2 = (TH1D*)f1->Get("h_cos_truth_theta_muon_mc");
  TH1D *h3 = (TH1D*)f1->Get("h_muon_length_mc");
  
  TH1D *h1_1 = (TH1D*)f2->Get("h_truth_phi_muon_data");
  TH1D *h2_1 = (TH1D*)f2->Get("h_cos_truth_theta_muon_data");
  TH1D *h3_1 = (TH1D*)f2->Get("h_muon_length_data");
  
  //All the things for the x,y,z coordinates of the vertex
  TH1D *h4 = (TH1D*)f1->Get("h_vertex_x_mc");
  TH1D *h5 = (TH1D*)f1->Get("h_vertex_y_mc");
  TH1D *h6 = (TH1D*)f1->Get("h_vertex_z_mc");
  
  TH1D *h4_1 = (TH1D*)f2->Get("h_vertex_x_data");
  TH1D *h5_1 = (TH1D*)f2->Get("h_vertex_y_data");
  TH1D *h6_1 = (TH1D*)f2->Get("h_vertex_z_data");

  //All the things for the multiplicity
  TH1D *h7 = (TH1D*)f1->Get("h_shower_mc");
  TH1D *h8 = (TH1D*)f1->Get("h_pfp_mc");
  TH1D *h9 = (TH1D*)f1->Get("h_track_mc");
  
  TH1D *h7_1 = (TH1D*)f2->Get("h_shower_data");
  TH1D *h8_1 = (TH1D*)f2->Get("h_pfp_data");
  TH1D *h9_1 = (TH1D*)f2->Get("h_track_data");

  ///////////////////////
  //NOW HERE IS CANVAS 1
  ////////////////////////
  TCanvas *c1= new TCanvas("c1","MC v EXTBNB: Phi of Muon",2000,500);// 1500 pixels wide x 500 pixels tall
  c1->Divide(3,1); //Divides the canvas into 3 columns by 1 row (stupid I know)
  
  c1->cd(1);
  h1->SetTitle("EXTBNB; Phi(radians);# of Events");
  h1->Draw("hist");
  h1->SetLineColor(kRed);
  h1->SetLineWidth(1);
  //h1->SetFillColor(kRed);
  //h1->SetFillStyle(3004);
  h1->SetStats(kFALSE);
  h1->GetYaxis()->SetTitleOffset(2.0);
  c1->cd(1)->BuildLegend();

  c1->cd(2);
  h1_1->SetTitle("MC; Phi(radians);# of Events");
  h1_1->Draw("hist");
  h1_1->SetLineColor(kBlue);
  h1_1->SetLineWidth(1);
  //h1_1->SetFillColor(kBlue);
  // h1_1->SetFillStyle(3005);
  h1_1->SetStats(kFALSE);
  h1->GetYaxis()->SetTitleOffset(1.5);
  c1->cd(2)->BuildLegend();

   c1->cd(3);
  //This produces a stacked histogram of the two plots mentioned above
  THStack *hs1 = new THStack("hs1","Phi of the Muon:Comparision");
  Double_t a = 1/h1->Integral();
  Double_t b = 1/h1_1->Integral();
  hs1->Add(h1);
  hs1->h1->Scale(a);
  hs1->Add(h1_1);
  hs1->Draw("hist");
  //This is how you have to define the axis labels because this is a THS item!
  hs1->GetXaxis()->SetTitle("Phi(radians)");
  hs1->GetYaxis()->SetTitle("# of Events");  
  //h1_1->SetTitle("Phi of the Muon:Monte-Carlo; Phi(radians);Fractional # of Events");
   //h1->DrawNormalized("hist");
   //h1_1->DrawNormalized("histSAME");
   //c1->cd(3)->SetTitle("SOmething");
   //c1->cd(3)->BuildLegend();


  //////////////////////
  //NOW HERE IS CANVAS 2
  //////////////////////
  TCanvas *c2= new TCanvas("c2","MC v EXTBNB: Cos(theta) of the Muon",1800,500);
  c2->Divide(3,1);
  
  c2->cd(1);
  h2->SetTitle("Cos(theta) of the Muon:Monte-Carlo; cos(theta);# of Events");
  h2->Draw("hist");
  h2->SetLineColor(kRed);
  //h1_1->SetFillColor(kRed-3);
  h2->SetLineWidth(1);
  h2->SetStats(kFALSE);

  c2->cd(2);
  h2_1->SetTitle("Cos(theta) of the Muon:EXTBNB; cos(theta);# of Events");
  h2_1->Draw("hist");
  h2_1->SetLineColor(kBlue);
  h2_1->SetLineWidth(1);
  h2_1->SetStats(kFALSE);

  c2->cd(3);
  //THStack *hs2 = new THStack("hs2","Cos(theta) of the Muon: Comparison");
  //hs2->Add(h2);
  //hs2->Add(h2_1);
  //hs2->Draw("hist");
  //hs2->GetXaxis()->SetTitle("cos(theta)");
  //hs2->GetYaxis()->SetTitle("# of Events");
  h2->DrawNormalized("hist");
  h2_1->DrawNormalized("histSAME");
  //auto legend = new TLegend(0.1,0.7,0.48,0.9);
  //legend->SetHeader("The Legend Title"); // option "C" allows to center the header
  //legend->AddEntry(h1,"Histogram filled with random numbers","f");
  //legend->AddEntry("f1","Function abs(#frac{sin(x)}{x})","l");
  //legend->AddEntry("gr","Graph with error bars","lep");
  //legend->Draw();

  //////////////////////
  //NOW HERE IS CANVAS 3
  //////////////////////
  TCanvas *c3= new TCanvas("c3","MC v EXTBNB: Length of Muon",1800,500);
  c3->Divide(3,1);
  
  c3->cd(1);
  h3->SetTitle("Length of the Muon:Monte-Carlo; Length of Track (cm));# of Events");
  h3->Draw("hist");
  h3->SetLineColor(kRed);
  //h1_1->SetFillColor(kRed-3);
  h3->SetLineWidth(1);
  h3->SetStats(kFALSE);

  c3->cd(2);
  //h3_1->SetTitle("Length of the Muon:EXTBNB; Length of Track (cm) ;# of Events");
  h3_1->Draw("hist");
  h3_1->SetLineColor(kBlue);
  h3_1->SetLineWidth(1);
  h3_1->SetStats(kFALSE);

  c3->cd(3);
  h3->DrawNormalized("hist");
  h3_1->DrawNormalized("histSAME");

  //////////////////////
  //NOW HERE IS CANVAS 4
  //////////////////////
  TCanvas *c4= new TCanvas("c4","MC v EXTBNB: X Coordinate of Vertex",1800,500);
  c4->Divide(3,1);
  
  c4->cd(1);
  h4->SetTitle("X Coordinate of Vertex:Monte-Carlo; x (m) ;# of Events");
  h4->Draw("hist");
  Double_t g = 1/h4->Integral();
  h4->SetLineColor(kRed);
  //h1_1->SetFillColor(kRed-3);
  h4->SetLineWidth(1);
  //h4->Scale(g);
  h4->SetStats(kFALSE);

  c4->cd(2);
  h4_1->SetTitle("X Coordinate of Vertex:EXTBNB; x (m);# of Events");
  h4_1->Draw("hist");
  Double_t h = 1/h4_1->Integral();
  h4_1->SetLineColor(kBlue);
  h4_1->SetLineWidth(1);
  //h4_1->Scale(h);
  h4_1->SetStats(kFALSE);

  c4->cd(3);
  h4->DrawNormalized("hist");
  h4_1->DrawNormalized("histSAME");

  //////////////////////
  //NOW HERE IS CANVAS 5
  //////////////////////
  TCanvas *c5= new TCanvas("c5","MC v EXTBNB: Y Coordinate of Vertex",1800,500);
  c5->Divide(3,1);
  
  c5->cd(1);
  h5->SetTitle("Y Coordinate of Vertex:Monte-Carlo; y (m) ;# of Events");
  h5->Draw("hist");;
  h5->SetLineColor(kRed);
  //h1_1->SetFillColor(kRed-3);
  h5->SetLineWidth(1);
  h5->SetStats(kFALSE);

  c5->cd(2);
  h5_1->SetTitle("Y Coordinate of Vertex:EXTBNB; y (m);# of Events");
  h5_1->Draw("hist");
  h5_1->SetLineColor(kBlue);
  h5_1->SetLineWidth(1);
  h5_1->SetStats(kFALSE);

  c5->cd(3);
  h5->DrawNormalized("hist");
  h5_1->DrawNormalized("histSAME");

  //////////////////////
  //NOW HERE IS CANVAS 6
  //////////////////////
  TCanvas *c6= new TCanvas("c6","MC v EXTBNB: Z Coordinate of Vertex",1800,500);
  c6->Divide(3,1);
  
  c6->cd(1);
  h6->SetTitle("Z Coordinate of Vertex:Monte-Carlo; z (m) ;# of Events");
  h6->Draw("hist");
  h6->SetLineColor(kRed);
  //h1_1->SetFillColor(kRed-3);
  h6->SetLineWidth(1);
  h6->SetStats(kFALSE);

  c6->cd(2);
  h6_1->SetTitle("Z Coordinate of Vertex:EXTBNB; z (m);# of Events");
  h6_1->Draw("hist");
  h6_1->SetLineColor(kBlue);
  h6_1->SetLineWidth(1);
  h6_1->SetStats(kFALSE);

  c6->cd(3);
  h6->DrawNormalized("hist");
  h6_1->DrawNormalized("histSAME");

  //////////////////////
  //NOW HERE IS CANVAS 7
  //////////////////////
  TCanvas *c7= new TCanvas("c7","MC v EXTBNB: Shower Multiplicity",1800,500);
  c7->Divide(3,1);
  
  c7->cd(1);
  h7->SetTitle("Shower Multiplicity:Monte-Carlo; mult ;# of Events");
  h7->Draw("hist");
  h7->SetLineColor(kRed);
  //h1_1->SetFillColor(kRed-3);
  h7->SetLineWidth(1);
  h7->SetStats(kFALSE);

  c7->cd(2);
  h7_1->SetTitle("Shower Multiplicity :EXTBNB; mult ;# of Events");
  h7_1->Draw("hist");
  h7_1->SetLineColor(kBlue);
  h7_1->SetLineWidth(1);
  h7_1->SetStats(kFALSE);

  c7->cd(3);
  h7->DrawNormalized("hist");
  h7_1->DrawNormalized("histSAME");

  //////////////////////
  //NOW HERE IS CANVAS 8
  //////////////////////
  TCanvas *c8= new TCanvas("c8","MC v EXTBNB: PFP Multiplicity ",1800,500);
  c8->Divide(3,1);
  
  c8->cd(1);
  h8->SetTitle("PFP Multiplicity:Monte-Carlo; mult ;# of Events");
  h8->Draw("hist");
  h8->SetLineColor(kRed);
  //h1_1->SetFillColor(kRed-3);
  h8->SetLineWidth(1);
  h8->SetStats(kFALSE);

  c8->cd(2);
  h8_1->SetTitle("PFP Multiplicity:EXTBNB; mult ;# of Events");
  h8_1->Draw("hist");
  h8_1->SetLineColor(kBlue);
  h8_1->SetLineWidth(1);
  h8_1->SetStats(kFALSE);

  c8->cd(3);
  h8->DrawNormalized("hist");
  h8_1->DrawNormalized("histSAME");

  //////////////////////
  //NOW HERE IS CANVAS 9
  //////////////////////
  TCanvas *c9= new TCanvas("c9","MC v EXTBNB:Track Multiplicity",1800,500);
  c9->Divide(3,1);
  
  c9->cd(1);
  h9->SetTitle("Track Multiplicity:Monte-Carlo; mult ;# of Events");
  h9->Draw("hist");
  h9->SetLineColor(kRed);
  //h1_1->SetFillColor(kRed-3);
  h9->SetLineWidth(1);
  h9->SetStats(kFALSE);

  c9->cd(2);
  h9_1->SetTitle("Track Multiplicity:EXTBNB; mult ;# of Events");
  h9_1->Draw("hist");
  h9_1->SetLineColor(kBlue);
  h9_1->SetLineWidth(1);
  h9_1->SetStats(kFALSE);

  c9->cd(3);
  h9->DrawNormalized("hist");
  h9_1->DrawNormalized("histSAME");

}
