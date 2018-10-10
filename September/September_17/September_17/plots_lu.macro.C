{
  Color_t line_color[]={1,kTeal+7,kRed-7,kBlue-7,kMagenta-7,kYellow+2,kCyan+2,kOrange+7,kViolet+2,kGreen-8};
  TFile *f_on = new TFile("histo_bnb_1d.root");
  TFile *f_off = new TFile("histo_extbnb_1d.root");
  TFile *f_mc = new TFile("MC_1d_histos.root");
 

 TH1D * hon_fls_t=(TH1D*)f_on->Get("h_fls_t");
 TH1D * hoff_fls_t=(TH1D*)f_off->Get("h_fls_t");
 TH1D * hmc_fls_t=(TH1D*)f_mc->Get("h_fls_t");

 TH1D * hon_fls_pe=(TH1D*)f_on->Get("h_fls_pe");
 TH1D * hoff_fls_pe=(TH1D*)f_off->Get("h_fls_pe");
 TH1D * hmc_fls_pe=(TH1D*)f_mc->Get("h_fls_pe");


 TH1D * hdata_fls_t=(TH1D*)hon_fls_t->Clone();
 hdata_fls_t->Add(hoff_fls_t,-1);

 TH1D * hdata_fls_pe=(TH1D*)hon_fls_pe->Clone();
 hdata_fls_pe->Add(hoff_fls_pe,-1);
 
 hdata_fls_t->Sumw2();
 hmc_fls_t->Sumw2();
 hdata_fls_pe->Sumw2();
 hmc_fls_pe->Sumw2();


 
   TCanvas * C_fls_t=new TCanvas("flash_time","flash_time");
   hmc_fls_t->Draw("hist");
   hdata_fls_t->Draw("esame");
   hdata_fls_t->SetLineColor(line_color[2]);
    hdata_fls_t->SetMarkerColor(line_color[2]);

   hmc_fls_t->SetMaximum(2000);
   hmc_fls_t->SetMinimum(0);
   hmc_fls_t->GetXaxis()->SetTitle("Flash time wrt trigger (#mus)");
   hmc_fls_t->GetYaxis()->SetTitle("Flashes (>50PE)");
   hmc_fls_t->GetXaxis()->SetTitleSize(0.06);
   hmc_fls_t->GetYaxis()->SetTitleSize(0.06);
   hmc_fls_t->GetYaxis()->SetNdivisions(512);
   hmc_fls_t->GetYaxis()->SetTitleOffset(1.2);
   TLegend *leg_v = new TLegend(0.45,0.6,0.8,0.85,"");
   leg_v->AddEntry(hdata_fls_t,"Data (on beam - off beam)","lep");
   leg_v->AddEntry(hmc_fls_t,"MC","L");
    leg_v->SetBorderSize(0);
   leg_v->SetTextSize(0.04);
   leg_v->SetFillColor(0);
   leg_v->Draw();

  TCanvas * C_fls_pe=new TCanvas("flash_pe","flash_tpe");
  C_fls_pe->SetLogy();
   hmc_fls_pe->Draw("hist");
   hdata_fls_pe->Draw("esame");
   hmc_fls_pe->SetLineColor(line_color[9]);
    hmc_fls_pe->SetMarkerColor(line_color[9]);
  hmc_fls_pe->SetFillColor(line_color[9]);

   hmc_fls_pe->SetMaximum(10000);
   hmc_fls_pe->SetMinimum(1);
   hmc_fls_pe->GetXaxis()->SetTitle("Flash PE");
   hmc_fls_pe->GetYaxis()->SetTitle("Flashes (>50PE)");
   hmc_fls_pe->GetXaxis()->SetTitleSize(0.06);
   hmc_fls_pe->GetYaxis()->SetTitleSize(0.06);
   hmc_fls_pe->GetYaxis()->SetNdivisions(512);
   hmc_fls_pe->GetYaxis()->SetTitleOffset(1.2);
    TLegend *leg_pe = new TLegend(0.45,0.6,0.8,0.85,"");
   leg_pe->AddEntry(hdata_fls_pe,"Data (on beam - off beam)","lep");
   leg_pe->AddEntry(hmc_fls_pe,"MC","Lf");
    leg_pe->SetBorderSize(0);
   leg_pe->SetTextSize(0.04);
   leg_pe->SetFillColor(0);
   leg_pe->Draw();

 

   C_fls_t->Print("MCC9_1d_fls_t.pdf");
   C_fls_t->Print("MCC9_1d_fls_t.png");
   C_fls_pe->Print("MCC9_1d_fls_pe.pdf");
   C_fls_pe->Print("MCC9_1d_fls_pe.png");
   
}
