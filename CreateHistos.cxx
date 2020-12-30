
void HadesAnal::CreateHistos(void)
{

  hepemInvM_oa4= new TH1F("hepemInvM_oa4","hepemInvM_oa4",100, 0, 1);
  hepemInvM_oa5= new TH1F("hepemInvM_oa5","hepemInvM_oa5",100, 0, 1);
  hepemInvM_oa6= new TH1F("hepemInvM_oa6","hepemInvM_oa6",100, 0, 1);
  hepemInvM_oa7= new TH1F("hepemInvM_oa7","hepemInvM_oa7",100, 0, 1);
  hepemInvM_oa8= new TH1F("hepemInvM_oa8","hepemInvM_oa8",100, 0, 1);
  hepemInvM_oa9= new TH1F("hepemInvM_oa9","hepemInvM_oa9",100, 0, 1);


  hepemMM_oa4= new TH1F("hepemMM_oa4","hepemMM_oa4",100, 0.5, 2.5);
  hepemMM_oa5= new TH1F("hepemMM_oa5","hepemMM_oa5",100, 0.5, 2.5);
  hepemMM_oa6= new TH1F("hepemMM_oa6","hepemMM_oa6",100, 0.5, 2.5);
  hepemMM_oa7= new TH1F("hepemMM_oa7","hepemMM_oa7",100, 0.5, 2.5);
  hepemMM_oa8= new TH1F("hepemMM_oa8","hepemMM_oa8",100, 0.5, 2.5);
  hepemMM_oa9= new TH1F("hepemMM_oa9","hepemMM_oa9",100, 0.5, 2.5);


  hepemMM= new TH1F("hepemMM","hepemMM",100, 0.5, 1.5);
  hepemInvM= new TH1F("hepemInvM","hepemInvM",100, 0, 1);

  
  hOA= new TH1F("hOA","hOA",100, 0, 50);
  
}
