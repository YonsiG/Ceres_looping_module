#include "makeHists.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TFile.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TMath.h"
#include "TTree.h"

using namespace std;
void makeHists::createHists(const char* fileName)
{
 hf = new TFile(fileName,"RECREATE");

 pT5_occupancies = new TH1D("pT5_occupancies","pT5_occupancies",100,0,1500);
 pT3_occupancies = new TH1D("pT3_occupancies","pT3_occupancies",100,0,2000);

}

void makeHists::saveHists()
{
 hf->cd();
 hf->Write();
 hf->Close();
}
