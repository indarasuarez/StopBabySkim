ROOTCFLAGS    = $(shell $(ROOTSYS)/bin/root-config --cflags)
ROOTLIBS      = $(shell $(ROOTSYS)/bin/root-config --libs)
ROOTGLIBS     = $(shell $(ROOTSYS)/bin/root-config --glibs)

#######################################
# -- DEFINE ARCH to something sensible!
#######################################

#
CXX           = g++
CXXFLAGS      = -g -Wall -fPIC
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -shared


CXXFLAGS      += $(ROOTCFLAGS)
LIBS           = $(ROOTLIBS)

NGLIBS         = $(ROOTGLIBS)
NGLIBS        += -lMinuit
GLIBS          = $(filter-out -lNew, $(NGLIBS))

TABLEPATH      = /home/users/isuarez/Software/tableMaker
CXXFLAGS       += -I$(TABLEPATH)

FWLIB          = /home/users/isuarez/Software/MiniFWLite/libMiniFWLite.so
TABLELIB       = $(TABLEPATH)/libSimpleTable.so

CopyBaby: CopyBaby.o MakeSmallBaby.o StopCMS3.o LinkDef_out.so
	$(LD) $(LDFLAGS) -o CopyBaby CopyBaby.o MakeSmallBaby.o StopCMS3.o $(GLIBS) -lGenVector -lEG $(CORELIB)  LinkDef_out.so -Wl,-rpath,./
CopyBaby.o: CopyBaby.C MakeSmallBaby.h
	 $(CXX) $(CXXFLAGS) -c CopyBaby.C 
MakeSmallBaby.o: MakeSmallBaby.cc MakeSmallBaby.h
	$(CXX) $(CXXFLAGS) -c MakeSmallBaby.cc
StopCMS3.o: StopCMS3.cc StopCMS3.h
	$(CXX) $(CXXFLAGS) -c StopCMS3.cc
LinkDef_out.so: LinkDef.h
	@rootcling -v -f LinkDef.cc -c -p Math/Vector4D.h LinkDef.h
	$(CXX) $(CXXFLAGS) $(SOFLAGS) LinkDef.cc -o $@
.PHONY: clean
clean:  
	rm -v -f \
	MakeSmallBaby \
	*o *d *.so; echo "Done"
