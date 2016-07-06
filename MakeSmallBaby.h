#ifndef MAKESMALLBABY_H
#define MAKESMALLBABY_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "TString.h"
#include "TH1F.h"
#include <TROOT.h>
#include <TChain.h>
#include "Math/VectorUtil.h"
#include <TFile.h>

typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;
typedef std::vector<LorentzVector> vecLorentzVector;


class MakeSmallBaby {
  public :

  MakeSmallBaby(){

  };

  virtual ~MakeSmallBaby(){}

   TTree          *fChain;   //!pofloater to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain
   void copytest(TFile *oldfile, char* output_name, int nEvents, char* path); 
   bool CRSRskim (bool use_removed_lep_met, bool have_removed_lep_variables_in_baby);
   bool SinglelepSkim();
   bool DilepSkim();
   private :

};

#endif
