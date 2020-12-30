#include "HadesAnal.h"
#include "TPaveText.h"
#include "TStyle.h"
#include "TH2F.h"
#include "TF1.h"
#include "TH2F.h"
#include "TText.h"
#include "TMath.h"
#include "TRandom.h"
#include "TSystem.h"
#include "TMatrixD.h"
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <cstdlib>
#include <vector>
//#include <random>
#include "TCanvas.h"
#include "TPad.h"
#include "TCutG.h"


#define SQR(x) ((x)*(x))
using namespace std;
//--------------------------------------------------------------------
void New_Cal()
{
  double Mpi = 139.56995;
  double Mp = 938.27231;
  double s = 1500.0;
  
  double pion_momentum = 690.0;    
  double pion_energy = sqrt(pion_momentum*pion_momentum + 139.56995*139.56995);

  TLorentzVector *proj;
  proj = new TLorentzVector(0,0,pion_momentum, pion_energy); //---------------PION BEAM
  TLorentzVector *targ;
  targ = new TLorentzVector(0,0,0, 938.27231);          //-------------------PROTON TARGET
  TLorentzVector *beam;
  beam = new TLorentzVector(0,0,0,0);
  *beam = *proj + *targ;


  double Ecm = beam->M();
  double Eex = beam->M() - 938.27231 - 139.56995;
  
  /*  TLorentzVector *p;
  p = new TLorentzVector(0,0,0,0);            //---------------PION BEAM
  TLorentzVector *pim;
  pim = new TLorentzVector(0,0,0,0);          //-------------------PROTON TARGET
  TLorentzVector *ep;
  ep = new TLorentzVector(0,0,0,0);
  TLorentzVector *em;
  em = new TLorentzVector(0,0,0,0);
  */
  cout << "C-M =  " << Ecm << endl;
  cout << "Excess energy =  " << Eex << endl;

  double P_Ecm = Eex + 938.27231 + 938.27231;
  cout << "P-C-M =  " << P_Ecm << endl;

  cout << endl;
  cout << "---------------------------------------------------------------"<< endl << endl;
  
  double Cal1 = ((2*Mp*Mp) - (P_Ecm*P_Ecm))/( 2*Mp );
  double Cal2 = (Cal1*Cal1) - (Mp*Mp);
  double Cal3 = sqrt(Cal2);

  cout << "Cal1 =" << Cal1 <<"  "<< "Cal2 =" << Cal2 <<"  "<< "Proton_Mom =  " << Cal3 << endl;
    
  double proton_momentum = 1598.8631;
  double proton_energy = sqrt(proton_momentum*proton_momentum + 938.27231*938.27231);

  TLorentzVector *proj1;
  proj1 = new TLorentzVector(0,0,proton_momentum, proton_energy); //---------------PION BEAM
  TLorentzVector *targ1;
  targ1 = new TLorentzVector(0,0,0, 938.27231);          //-------------------PROTON TARGET
  TLorentzVector *beam1;
  beam1 = new TLorentzVector(0,0,0,0);
  *beam1 = *proj1 + *targ1;

  cout << "Proton_C-M =  " << beam1->M() << endl;
  cout << "Proton_Eex =  " << beam1->M() - 938.27231 - 938.27231 << endl;
  
  /*
  double pion_momentum = 690.0;
  double pion_energy = sqrt(pion_momentum*pion_momentum + 139.56995*139.56995);

  TLorentzVector *proj;
  proj = new TLorentzVector(0,0,pion_momentum, pion_energy); //---------------PION BEAM
  TLorentzVector *targ;
  targ = new TLorentzVector(0,0,0, 938.27231);          //-------------------PROTON TARGET
  TLorentzVector *beam;
  beam = new TLorentzVector(0,0,0,0);
  *beam = *proj + *targ; 

  cout << "C-M =  " << beam->M() - 938.27231 - 139.56995 << endl;
*/  
}

