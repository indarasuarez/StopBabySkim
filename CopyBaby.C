#include "TChain.h"
#include "TString.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "MakeSmallBaby.h"  

using namespace std;

vector<TString> load(char *type, const char *filename, char *input){

  vector<TString> output;
  char buffer[500];
  char StringValue[1000];
  ifstream IN(input);
  while( IN.getline(buffer, 500, '\n') ){
    // ok = false;
    if (buffer[0] == '#') {
      continue; // Skip lines commented with '#'
    }
    if( !strcmp(buffer, "SAMPLE")){
      bool add = false;
      IN.getline(buffer, 500, '\n');
      sscanf(buffer, "Name\t%s", StringValue);
      if((string)StringValue==(string)type) add=true;
      IN.getline(buffer, 500, '\n');
      sscanf(buffer, "Path\t%s", StringValue);
      if(add){
        std::ostringstream addStream;
        addStream << StringValue << filename;
        TString addString = addStream.str().c_str();
        output.push_back(addString);
      }
    }
  }
  return output;
}

int main(int argc, char **argv){
/*
  char *channel = argv[1];
  char *etaregion = argv[2];
  char *metType = argv[3];
//  char *njets = argv[4];
  char *CR = argv[4];
*/


  //
  // Use arguments to set run parameters
  //
  int nevents = -1;
  if(argc>2) nevents = atoi(argv[2]);

  int file=-1;
  if(argc>3) file = atoi(argv[3]);

  char* dirpath = ".";
  if(argc>4) dirpath = argv[4];

//const char* filename = (file == -1 ? "*postprocess.root" : Form("%spostprocess.root"));
  const char* filename = (file == -1 ? "mergedBaby_*.root" : Form("mergedBaby_%i.root", file));
  cout << filename << endl;

  const char* suffix = file == -1 ? "" : Form("_%i", file);

  char *input = "samples.dat";
  if(argc>5) input = argv[5];

  MakeSmallBaby tinybaby;

  //tinybaby.copytest();

 // std::vector < TH1F* > Backgrounds, std::vector < char* > Titles,
  
  //TChain *sample = new TChain("Events");
 
  vector<TString> samplelist = load(argv[1], filename, input);//new
  for(unsigned int i = 1; i<samplelist.size(); ++i){
    cout << "Add sample " << samplelist[i] << " to files to be processed." << endl;
   
   // sample->Add(samplelist[i].Data());
    TFile *sample = new TFile(samplelist[i]);
  tinybaby.copytest(sample, Form("%s%s", argv[1],suffix), nevents,dirpath);
  }

 TFile *sample = new TFile(argv[1]); 
  //
  // Run Looper
  //
  tinybaby.copytest(sample, Form("%s", argv[2]), nevents,dirpath);

  return 0;
}
