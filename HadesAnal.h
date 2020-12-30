#ifndef HadesAnal_h
#define HadesAnal_h
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TH3.h>
#include <TEventList.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include "TRandom3.h"
#include "TMatrixD.h"
#include "TCanvas.h"
#include "ClassName.h"
#include "utility.h"
#include "TLorentzVector.h"
#include "TCutG.h"


class HadesAnal: public InheritClass {

  TFile *theOut;
  Char_t theOutFileName[64];
  Bool_t WriteTree;
  Int_t Pen;
  TFile *f;
  
  Int_t OpenGeometry(); // Gets the geometry information
  void CreateHistos();
  void WriteHistos();

 public:
  HadesAnal(TTree *tree=0);
  ~HadesAnal();
  void   Init();
  void   Loop(Char_t *file);
  Int_t  ReadLine(FILE *fID, char *line);
  void SetWriteTree(Bool_t f) {WriteTree = f;}
  void SetEnergy(int en) {Pen = en;}

  TH1F *hepemInvM_oa4; 
  TH1F *hepemInvM_oa5; 
  TH1F *hepemInvM_oa6; 
  TH1F *hepemInvM_oa7; 
  TH1F *hepemInvM_oa8; 
  TH1F *hepemInvM_oa9; 

  TH1F *hepemMM_oa4; 
  TH1F *hepemMM_oa5; 
  TH1F *hepemMM_oa6; 
  TH1F *hepemMM_oa7; 
  TH1F *hepemMM_oa8; 
  TH1F *hepemMM_oa9; 

  TH1F *hepemInvM; 
  TH1F *hepemMM; 
  TH1F *hOA; 


};



R__EXTERN HadesAnal *gHadesA; // external pointer to KRAnal.

#endif


