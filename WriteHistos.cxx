
void HadesAnal::WriteHistos(void)
{
  
  float x1,x2,y1,y2;
  x1=0.52; y1=0.8;x2=0.7;y2=0.87;
   TPaveText *t1,*t2; 


   //f = new TFile("hades_D0_dalitz_acc_10.root","recreate");
   //f = new TFile("hades_D0_n_acc_10.root","recreate");
   //f = new TFile("hades_D0_p_acc_10.root","recreate");
   //f = new TFile("hades_D+_acc_10.root","recreate");
 
   //f = new TFile("hades_D+_dalitz_acc_10.root","recreate");
   //f = new TFile("hades_eta_acc_10.root","recreate");
   //f = new TFile("hades_N1440_acc_10.root","recreate");
   //f = new TFile("hades_N1520_acc_10.root","recreate");
   //f = new TFile("hades_N1535_acc_10.root","recreate");
   //f = new TFile("hades_pi0_acc_10.root","recreate");
   f = new TFile("hades_3PION_TEST_acc_10.root","recreate");

     //******************************************
   
   //  f = new TFile("hades_D0_dalitz_10.root","recreate");
   //f = new TFile("hades_D0_n_10.root","recreate");
   //f = new TFile("hades_D0_p_10.root","recreate");
   //f = new TFile("hades_D+_10.root","recreate");
 
   //f = new TFile("hades_D+_dalitz_10.root","recreate");
   //f = new TFile("hades_eta_10.root","recreate");
   //f = new TFile("hades_N1440_10.root","recreate");
   //f = new TFile("hades_N1520_10.root","recreate");
   //f = new TFile("hades_N1535_10.root","recreate");
   //f = new TFile("hades_pi0_10.root","recreate");
   //f = new TFile("hades_rho_10.root","recreate");



   
   //f = new TFile("hades_D0_dalitz.root","recreate");
   //f = new TFile("hades_D0_n.root","recreate");
  //f = new TFile("hades_D0_p.root","recreate");
  //f = new TFile("hades_D+_dalitz.root","recreate");
  //f = new TFile("hades_D+.root","recreate");
  //f = new TFile("hades_eta.root","recreate");
  //f = new TFile("hades_N1440.root","recreate");
  //f = new TFile("hades_N1520.root","recreate");
  //f = new TFile("hades_N1535.root","recreate");
  //f = new TFile("hades_pi0.root","recreate");
  //f = new TFile("hades_rho.root","recreate");

  
  //if (!f || !f->IsOpen()){
  //f=new TFile("SymulHe3_histos.root","recreate");
  //}

  
  hepemInvM_oa4->Write();
  hepemInvM_oa5->Write();
  hepemInvM_oa6->Write();
  hepemInvM_oa7->Write();
  hepemInvM_oa8->Write();
  hepemInvM_oa9->Write();

  hepemMM_oa4->Write();
  hepemMM_oa5->Write();
  hepemMM_oa6->Write();
  hepemMM_oa7->Write();
  hepemMM_oa8->Write();
  hepemMM_oa9->Write();

  hepemMM->Write();
  hepemInvM->Write();



  hOA->Write();


  
    f->Close();
    f->Write();
  
}
