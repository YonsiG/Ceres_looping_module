#ifndef _MAKEHIST_H_
#define _MAKEHIST_H_

#include <iostream>
#include "TTree.h"
#include "TH1D.h"
#include "TH2D.h"

class makeHists
{
  public:

  TFile *hf;

  TH1D *pT5_occupancies;
  TH1D *pT3_occupancies;

  void createHists(const char* fileName); 
  void saveHists();
};
#endif
