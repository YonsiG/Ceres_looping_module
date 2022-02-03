#define _ZZZANA_C_
#include "ZZZAna.h"
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TMath.h"
#include "TH1D.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TLorentzVector.h"
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "Math/VectorUtil.h"
#include "TH3F.h"
#include <TRandom3.h>
#include "TMinuit.h"
#include <TApplication.h>
#include <TEnv.h>
#include <TComplex.h>
#include <TGraph.h>
#include <TProfile.h>
#include <TProfile2D.h>
#include <TTree.h>

using namespace std;
void ZZZAna::Loop(const char* typeName)
{
 if(isRead == false || fChain == 0)
 {
  cout<<"This file contains no events, skip to next file"<<endl;
  return;
 }

 Int_t Nentries = fChain->GetEntries();

/*****************************************/
/*********Main Looping Code Start*********/
/*****************************************/

 for(int iLoop=0; iLoop<Nentries; iLoop++)
  {
   fChain->GetEntry(iLoop);
   Sta_TotalNumber++;

/**************plot filling****************/
   myHists->pT5_occupancies->Fill(pT5_occupancies);
   myHists->pT3_occupancies->Fill(pT3_occupancies);

  }//main looping
}//ZZZAna::loop ends
