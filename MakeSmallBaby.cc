#include "MakeSmallBaby.h"
// C++
#include <iostream>
#include <fstream>
#include <vector>

// ROOT
#include "TBenchmark.h"
#include "TChain.h"
#include "TDirectory.h"
#include "TFile.h"
#include "TROOT.h"
#include "TTreeCache.h"
#include "TCut.h"
#include "TVector3.h"

// StopCMS3
#include "StopCMS3.h"

using namespace std;
using namespace stoptas;

void MakeSmallBaby::copytest(TFile *oldfile, char* output_name, int nEvents, char* path){
// Example of Root macro to copy a subset of a Tree to a new Tree
// Only selected entries are copied to the new Tree.
// The input file has been generated by the program in $ROOTSYS/test/Event
// with   Event 1000 1 99 1
//Author: Rene Brun


   //Get old file, old tree and set top branch address
   //TFile *oldfile2 = new TFile("/hadoop/cms/store/user/jgwood/condor/stop_1l_babies/stop_babies__CMS3_V070411__BabyMaker_V0704X_v6__20151123/merged_files/WJetsToLNu_madgraph_pythia8_25ns_mergedBaby_1.root");
//TFile *oldfile = new TFile("/hadoop/cms/store/user/jgwood/condor/stop_1l_babies/stop_babies__CMS3_V070411__BabyMaker_V0704X_v6__20151123/merged_files/ttbar_powheg_pythia8_ext3_25ns_mergedBaby_1.root");
   TTree *tree = (TTree*)oldfile->Get("t");
    Long64_t nentries = tree->GetEntries();
        TTreeCache::SetLearnEntries(10);
        tree->SetCacheSize(128*1024*1024);
        stopcms3.Init(tree);
        stopcms3.LoadAllBranches();
cout<<"interesting "<<output_name<<endl;
   TFile *newfile = new TFile(Form("%s_skimmed.root", output_name),"recreate");
   TTree *newtree = tree->CloneTree(0);
    //
    // Get File Content
    //
    unsigned int nEventsTree = tree->GetEntriesFast();

    for( unsigned int event = 0; event < nEventsTree; ++event) {
//        for( unsigned int event = 0; event < 100; ++event) { 
      tree->LoadTree(event);
      //stopcms3.LoadAllBranches();
      stopcms3.GetEntry(event);
     // if(pfmet() < 200) continue;
      if(ngoodleps()!=1) continue;
    //  if(mt_met_lep()<150) continue;
      if(nvetoleps()!=1) continue;
      if(!PassTrackVeto_v3()) continue;
      if(!PassTauVeto()) continue;
      if(pfmet() < 200.) continue;
      if(mt_met_lep()<150.) continue;
      stopcms3.LoadAllBranches();      
      newtree->Fill();
     }
 
   newtree->Print();
   newtree->AutoSave();
   delete oldfile;
   delete newfile;
}