#include "StopCMS3.h"
StopCMS3 stopcms3;
namespace stoptas {
	const unsigned int &run() { return stopcms3.run(); }
	const unsigned int &ls() { return stopcms3.ls(); }
	const unsigned int &evt() { return stopcms3.evt(); }
	const int &nvtxs() { return stopcms3.nvtxs(); }
	const int &firstGoodVtxIdx() { return stopcms3.firstGoodVtxIdx(); }
	const int &firstVtx_isfake() { return stopcms3.firstVtx_isfake(); }
	const float &firstVtx_ndof() { return stopcms3.firstVtx_ndof(); }
	const float &firstVtx_posRho() { return stopcms3.firstVtx_posRho(); }
	const float &firstVtx_posZ() { return stopcms3.firstVtx_posZ(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &firstVtx_posp4() { return stopcms3.firstVtx_posp4(); }
	const int &pu_nvtxs() { return stopcms3.pu_nvtxs(); }
	const float &pfmet() { return stopcms3.pfmet(); }
	const float &pfmet_phi() { return stopcms3.pfmet_phi(); }
	const float &calomet() { return stopcms3.calomet(); }
	const float &calomet_phi() { return stopcms3.calomet_phi(); }
	const float &filt_cscbeamhalo() { return stopcms3.filt_cscbeamhalo(); }
	const float &filt_ecallaser() { return stopcms3.filt_ecallaser(); }
	const float &filt_ecaltp() { return stopcms3.filt_ecaltp(); }
	const float &filt_eebadsc() { return stopcms3.filt_eebadsc(); }
	const float &filt_goodvtx() { return stopcms3.filt_goodvtx(); }
	const float &filt_badevents() { return stopcms3.filt_badevents(); }
	const float &filt_hbhenoise() { return stopcms3.filt_hbhenoise(); }
	const float &filt_hcallaser() { return stopcms3.filt_hcallaser(); }
	const float &filt_met() { return stopcms3.filt_met(); }
	const float &filt_trkfail() { return stopcms3.filt_trkfail(); }
	const float &filt_trkPOG() { return stopcms3.filt_trkPOG(); }
	const float &filt_trkPOG_tmc() { return stopcms3.filt_trkPOG_tmc(); }
	const float &filt_trkPOG_tms() { return stopcms3.filt_trkPOG_tms(); }
	const float &filt_eff() { return stopcms3.filt_eff(); }
	const float &scale1fb() { return stopcms3.scale1fb(); }
	const float &xsec() { return stopcms3.xsec(); }
	const float &kfactor() { return stopcms3.kfactor(); }
	const float &pu_ntrue() { return stopcms3.pu_ntrue(); }
	const int &ngoodleps() { return stopcms3.ngoodleps(); }
	const int &nlooseleps() { return stopcms3.nlooseleps(); }
	const int &nvetoleps() { return stopcms3.nvetoleps(); }
	const bool &is_data() { return stopcms3.is_data(); }
	const string &dataset() { return stopcms3.dataset(); }
	const string &filename() { return stopcms3.filename(); }
	const string &cms3tag() { return stopcms3.cms3tag(); }
	const unsigned int &nEvents() { return stopcms3.nEvents(); }
	const unsigned int &nEvents_goodvtx() { return stopcms3.nEvents_goodvtx(); }
	const unsigned int &nEvents_MET30() { return stopcms3.nEvents_MET30(); }
	const unsigned int &nEvents_1goodlep() { return stopcms3.nEvents_1goodlep(); }
	const unsigned int &nEvents_2goodjets() { return stopcms3.nEvents_2goodjets(); }
	const int &genlepsfromtop() { return stopcms3.genlepsfromtop(); }
	const int &genLepsHardProcess() { return stopcms3.genLepsHardProcess(); }
	const int &genNusHardProcess() { return stopcms3.genNusHardProcess(); }
	const int &is0lep() { return stopcms3.is0lep(); }
	const int &is1lep() { return stopcms3.is1lep(); }
	const int &is2lep() { return stopcms3.is2lep(); }
	const int &isZtoNuNu() { return stopcms3.isZtoNuNu(); }
	const int &is1lepFromW() { return stopcms3.is1lepFromW(); }
	const int &is1lepFromTop() { return stopcms3.is1lepFromTop(); }
	const float &MT2W() { return stopcms3.MT2W(); }
	const float &MT2W_lep2() { return stopcms3.MT2W_lep2(); }
	const float &mindphi_met_j1_j2() { return stopcms3.mindphi_met_j1_j2(); }
	const float &mt_met_lep() { return stopcms3.mt_met_lep(); }
	const float &mt_met_lep2() { return stopcms3.mt_met_lep2(); }
	const float &dR_lep_leadb() { return stopcms3.dR_lep_leadb(); }
	const float &dR_lep2_leadb() { return stopcms3.dR_lep2_leadb(); }
	const float &hadronic_top_chi2() { return stopcms3.hadronic_top_chi2(); }
	const float &dphi_Wlep() { return stopcms3.dphi_Wlep(); }
	const float &MET_over_sqrtHT() { return stopcms3.MET_over_sqrtHT(); }
	const float &ak4pfjets_rho() { return stopcms3.ak4pfjets_rho(); }
	const vector<string> &genweightsID() { return stopcms3.genweightsID(); }
	const vector<float> &genweights() { return stopcms3.genweights(); }
	const vector<string> &sparms_names() { return stopcms3.sparms_names(); }
	const float &sparms_filterEfficiency() { return stopcms3.sparms_filterEfficiency(); }
	const float &sparms_pdfScale() { return stopcms3.sparms_pdfScale(); }
	const float &sparms_pdfWeight1() { return stopcms3.sparms_pdfWeight1(); }
	const float &sparms_pdfWeight2() { return stopcms3.sparms_pdfWeight2(); }
	const float &sparms_weight() { return stopcms3.sparms_weight(); }
	const float &sparms_xsec() { return stopcms3.sparms_xsec(); }
	const vector<float> &sparms_values() { return stopcms3.sparms_values(); }
	const int &sparms_subProcessId() { return stopcms3.sparms_subProcessId(); }
	const float &mass_lsp() { return stopcms3.mass_lsp(); }
	const float &mass_chargino() { return stopcms3.mass_chargino(); }
	const float &mass_stop() { return stopcms3.mass_stop(); }
	const float &genmet() { return stopcms3.genmet(); }
	const float &genmet_phi() { return stopcms3.genmet_phi(); }
	const float &genht() { return stopcms3.genht(); }
	const bool &PassTrackVeto() { return stopcms3.PassTrackVeto(); }
	const bool &PassTrackVeto_v2() { return stopcms3.PassTrackVeto_v2(); }
	const bool &PassTrackVeto_v3() { return stopcms3.PassTrackVeto_v3(); }
	const bool &PassTauVeto() { return stopcms3.PassTauVeto(); }
	const float &EA_all_rho() { return stopcms3.EA_all_rho(); }
	const float &EA_allcalo_rho() { return stopcms3.EA_allcalo_rho(); }
	const float &EA_centralcalo_rho() { return stopcms3.EA_centralcalo_rho(); }
	const float &EA_centralchargedpileup_rho() { return stopcms3.EA_centralchargedpileup_rho(); }
	const float &EA_centralneutral_rho() { return stopcms3.EA_centralneutral_rho(); }
	const float &topness() { return stopcms3.topness(); }
	const float &topness_lep2() { return stopcms3.topness_lep2(); }
	const float &topnessMod() { return stopcms3.topnessMod(); }
	const float &topnessMod_lep2() { return stopcms3.topnessMod_lep2(); }
	const float &MT2_lb_b() { return stopcms3.MT2_lb_b(); }
	const float &MT2_lb_b_lep2() { return stopcms3.MT2_lb_b_lep2(); }
	const float &MT2_lb_b_mass() { return stopcms3.MT2_lb_b_mass(); }
	const float &MT2_lb_b_mass_lep2() { return stopcms3.MT2_lb_b_mass_lep2(); }
	const float &MT2_lb_bqq() { return stopcms3.MT2_lb_bqq(); }
	const float &MT2_lb_bqq_lep2() { return stopcms3.MT2_lb_bqq_lep2(); }
	const float &MT2_lb_bqq_mass() { return stopcms3.MT2_lb_bqq_mass(); }
	const float &MT2_lb_bqq_mass_lep2() { return stopcms3.MT2_lb_bqq_mass_lep2(); }
	const float &Mlb_closestb() { return stopcms3.Mlb_closestb(); }
	const float &Mlb_lead_bdiscr() { return stopcms3.Mlb_lead_bdiscr(); }
	const float &Mlb_closestb_lep2() { return stopcms3.Mlb_closestb_lep2(); }
	const float &Mlb_lead_bdiscr_lep2() { return stopcms3.Mlb_lead_bdiscr_lep2(); }
	const float &Mjjj() { return stopcms3.Mjjj(); }
	const float &Mjjj_lep2() { return stopcms3.Mjjj_lep2(); }
	const int &HLT_SingleEl() { return stopcms3.HLT_SingleEl(); }
	const int &HLT_SingleMu() { return stopcms3.HLT_SingleMu(); }
	const int &HLT_MET170() { return stopcms3.HLT_MET170(); }
	const int &HLT_MET120Btag() { return stopcms3.HLT_MET120Btag(); }
	const int &HLT_MET120Mu5() { return stopcms3.HLT_MET120Mu5(); }
	const int &HLT_HT350MET120() { return stopcms3.HLT_HT350MET120(); }
	const int &HLT_DiEl() { return stopcms3.HLT_DiEl(); }
	const int &HLT_DiEl_17_12() { return stopcms3.HLT_DiEl_17_12(); }
	const int &HLT_DiMu() { return stopcms3.HLT_DiMu(); }
	const int &HLT_Mu8El17() { return stopcms3.HLT_Mu8El17(); }
	const int &HLT_Mu8El23() { return stopcms3.HLT_Mu8El23(); }
	const int &HLT_Mu17El12() { return stopcms3.HLT_Mu17El12(); }
	const int &HLT_Mu23El12() { return stopcms3.HLT_Mu23El12(); }
	const int &HLT_SingleEl23() { return stopcms3.HLT_SingleEl23(); }
	const int &HLT_SingleEl27() { return stopcms3.HLT_SingleEl27(); }
	const int &HLT_SingleEl27Tight() { return stopcms3.HLT_SingleEl27Tight(); }
	const int &HLT_SingleElTight() { return stopcms3.HLT_SingleElTight(); }
	const int &HLT_SingleElHT200() { return stopcms3.HLT_SingleElHT200(); }
	const int &HLT_SingleMuNoEta() { return stopcms3.HLT_SingleMuNoEta(); }
	const int &HLT_SingleMuNoIso() { return stopcms3.HLT_SingleMuNoIso(); }
	const int &HLT_SingleMuNoIsoNoEta() { return stopcms3.HLT_SingleMuNoIsoNoEta(); }
	const int &HLT_Mu6HT200MET100() { return stopcms3.HLT_Mu6HT200MET100(); }
	const int &HLT_HT350MET100() { return stopcms3.HLT_HT350MET100(); }
	const int &HLT_SingleMu17() { return stopcms3.HLT_SingleMu17(); }
	const int &HLT_SingleMu20() { return stopcms3.HLT_SingleMu20(); }
	const int &HLT_SingleMu24() { return stopcms3.HLT_SingleMu24(); }
	const int &HLT_MonoCentPFJet80_METNoMu90_MHTNoMu90_IDTight() { return stopcms3.HLT_MonoCentPFJet80_METNoMu90_MHTNoMu90_IDTight(); }
	const int &HLT_MET90_MHT90_IDTight() { return stopcms3.HLT_MET90_MHT90_IDTight(); }
	const int &HLT_METNoMu90_NoiseCleaned_MHTNoMu90_IDTight() { return stopcms3.HLT_METNoMu90_NoiseCleaned_MHTNoMu90_IDTight(); }
	const int &HLT_Photon90_CaloIdL_PFHT500() { return stopcms3.HLT_Photon90_CaloIdL_PFHT500(); }
	const int &HLT_Photon165_R9Id90_HE10_IsoM() { return stopcms3.HLT_Photon165_R9Id90_HE10_IsoM(); }
	const int &HLT_Photon175() { return stopcms3.HLT_Photon175(); }
	const int &HLT_Photon165_HE10() { return stopcms3.HLT_Photon165_HE10(); }
	const float &pu_weight() { return stopcms3.pu_weight(); }
	const float &lep_sf() { return stopcms3.lep_sf(); }
	const float &btag_sf() { return stopcms3.btag_sf(); }
	const float &HLT_SingleEl_eff() { return stopcms3.HLT_SingleEl_eff(); }
	const float &HLT_SingleMu_eff() { return stopcms3.HLT_SingleMu_eff(); }
	const int &nPhotons() { return stopcms3.nPhotons(); }
	const int &ph_selectedidx() { return stopcms3.ph_selectedidx(); }
	const int &ph_ngoodjets() { return stopcms3.ph_ngoodjets(); }
	const int &ph_ngoodbtags() { return stopcms3.ph_ngoodbtags(); }
	const float &ph_met() { return stopcms3.ph_met(); }
	const float &ph_met_phi() { return stopcms3.ph_met_phi(); }
	const float &ph_HT() { return stopcms3.ph_HT(); }
	const float &ph_htssm() { return stopcms3.ph_htssm(); }
	const float &ph_htosm() { return stopcms3.ph_htosm(); }
	const float &ph_htratiom() { return stopcms3.ph_htratiom(); }
	const float &ph_mt_met_lep() { return stopcms3.ph_mt_met_lep(); }
	const float &ph_dphi_Wlep() { return stopcms3.ph_dphi_Wlep(); }
	const float &ph_MT2W() { return stopcms3.ph_MT2W(); }
	const float &ph_topness() { return stopcms3.ph_topness(); }
	const float &ph_topnessMod() { return stopcms3.ph_topnessMod(); }
	const float &ph_MT2_lb_b_mass() { return stopcms3.ph_MT2_lb_b_mass(); }
	const float &ph_MT2_lb_b() { return stopcms3.ph_MT2_lb_b(); }
	const float &ph_MT2_lb_bqq_mass() { return stopcms3.ph_MT2_lb_bqq_mass(); }
	const float &ph_MT2_lb_bqq() { return stopcms3.ph_MT2_lb_bqq(); }
	const float &ph_hadronic_top_chi2() { return stopcms3.ph_hadronic_top_chi2(); }
	const float &ph_mindphi_met_j1_j2() { return stopcms3.ph_mindphi_met_j1_j2(); }
	const float &ph_Mlb_lead_bdiscr() { return stopcms3.ph_Mlb_lead_bdiscr(); }
	const float &ph_dR_lep_leadb() { return stopcms3.ph_dR_lep_leadb(); }
	const float &ph_Mlb_closestb() { return stopcms3.ph_Mlb_closestb(); }
	const float &ph_Mjjj() { return stopcms3.ph_Mjjj(); }
	const int &Zll_idl1() { return stopcms3.Zll_idl1(); }
	const int &Zll_idl2() { return stopcms3.Zll_idl2(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &Zll_p4l1() { return stopcms3.Zll_p4l1(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &Zll_p4l2() { return stopcms3.Zll_p4l2(); }
	const bool &Zll_OS() { return stopcms3.Zll_OS(); }
	const bool &Zll_SF() { return stopcms3.Zll_SF(); }
	const bool &Zll_isZmass() { return stopcms3.Zll_isZmass(); }
	const float &Zll_M() { return stopcms3.Zll_M(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &Zll_p4() { return stopcms3.Zll_p4(); }
	const int &Zll_selLep() { return stopcms3.Zll_selLep(); }
	const float &Zll_met() { return stopcms3.Zll_met(); }
	const float &Zll_met_phi() { return stopcms3.Zll_met_phi(); }
	const float &Zll_mindphi_met_j1_j2() { return stopcms3.Zll_mindphi_met_j1_j2(); }
	const float &Zll_mt_met_lep() { return stopcms3.Zll_mt_met_lep(); }
	const float &Zll_dphi_Wlep() { return stopcms3.Zll_dphi_Wlep(); }
	const float &Zll_MT2W() { return stopcms3.Zll_MT2W(); }
	const float &Zll_topness() { return stopcms3.Zll_topness(); }
	const float &Zll_topnessMod() { return stopcms3.Zll_topnessMod(); }
	const float &Zll_MT2_lb_b_mass() { return stopcms3.Zll_MT2_lb_b_mass(); }
	const float &Zll_MT2_lb_b() { return stopcms3.Zll_MT2_lb_b(); }
	const float &Zll_MT2_lb_bqq_mass() { return stopcms3.Zll_MT2_lb_bqq_mass(); }
	const float &Zll_MT2_lb_bqq() { return stopcms3.Zll_MT2_lb_bqq(); }
	const bool &lep1_is_mu() { return stopcms3.lep1_is_mu(); }
	const bool &lep1_is_el() { return stopcms3.lep1_is_el(); }
	const int &lep1_charge() { return stopcms3.lep1_charge(); }
	const int &lep1_pdgid() { return stopcms3.lep1_pdgid(); }
	const int &lep1_type() { return stopcms3.lep1_type(); }
	const int &lep1_production_type() { return stopcms3.lep1_production_type(); }
	const float &lep1_d0() { return stopcms3.lep1_d0(); }
	const float &lep1_d0err() { return stopcms3.lep1_d0err(); }
	const float &lep1_dz() { return stopcms3.lep1_dz(); }
	const float &lep1_dzerr() { return stopcms3.lep1_dzerr(); }
	const float &lep1_sigmaIEtaEta_fill5x5() { return stopcms3.lep1_sigmaIEtaEta_fill5x5(); }
	const float &lep1_dEtaIn() { return stopcms3.lep1_dEtaIn(); }
	const float &lep1_dPhiIn() { return stopcms3.lep1_dPhiIn(); }
	const float &lep1_hOverE() { return stopcms3.lep1_hOverE(); }
	const float &lep1_ooEmooP() { return stopcms3.lep1_ooEmooP(); }
	const int &lep1_expectedMissingInnerHits() { return stopcms3.lep1_expectedMissingInnerHits(); }
	const bool &lep1_conversionVeto() { return stopcms3.lep1_conversionVeto(); }
	const float &lep1_etaSC() { return stopcms3.lep1_etaSC(); }
	const float &lep1_ChiSqr() { return stopcms3.lep1_ChiSqr(); }
	const float &lep1_chiso() { return stopcms3.lep1_chiso(); }
	const float &lep1_nhiso() { return stopcms3.lep1_nhiso(); }
	const float &lep1_emiso() { return stopcms3.lep1_emiso(); }
	const float &lep1_deltaBeta() { return stopcms3.lep1_deltaBeta(); }
	const float &lep1_relIso03DB() { return stopcms3.lep1_relIso03DB(); }
	const float &lep1_relIso03EA() { return stopcms3.lep1_relIso03EA(); }
	const float &lep1_relIso04DB() { return stopcms3.lep1_relIso04DB(); }
	const float &lep1_miniRelIsoDB() { return stopcms3.lep1_miniRelIsoDB(); }
	const float &lep1_miniRelIsoEA() { return stopcms3.lep1_miniRelIsoEA(); }
	const float &lep1_MiniIso() { return stopcms3.lep1_MiniIso(); }
	const int &lep1_mcid() { return stopcms3.lep1_mcid(); }
	const int &lep1_mcstatus() { return stopcms3.lep1_mcstatus(); }
	const int &lep1_mc3dr() { return stopcms3.lep1_mc3dr(); }
	const int &lep1_mc3id() { return stopcms3.lep1_mc3id(); }
	const int &lep1_mc3idx() { return stopcms3.lep1_mc3idx(); }
	const int &lep1_mc3motherid() { return stopcms3.lep1_mc3motherid(); }
	const int &lep1_mc3motheridx() { return stopcms3.lep1_mc3motheridx(); }
	const bool &lep1_is_eleid_loose() { return stopcms3.lep1_is_eleid_loose(); }
	const bool &lep1_is_eleid_medium() { return stopcms3.lep1_is_eleid_medium(); }
	const bool &lep1_is_eleid_tight() { return stopcms3.lep1_is_eleid_tight(); }
	const bool &lep1_is_phys14_loose_noIso() { return stopcms3.lep1_is_phys14_loose_noIso(); }
	const bool &lep1_is_phys14_medium_noIso() { return stopcms3.lep1_is_phys14_medium_noIso(); }
	const bool &lep1_is_phys14_tight_noIso() { return stopcms3.lep1_is_phys14_tight_noIso(); }
	const float &lep1_eoverpin() { return stopcms3.lep1_eoverpin(); }
	const bool &lep1_is_muoid_loose() { return stopcms3.lep1_is_muoid_loose(); }
	const bool &lep1_is_muoid_medium() { return stopcms3.lep1_is_muoid_medium(); }
	const bool &lep1_is_muoid_tight() { return stopcms3.lep1_is_muoid_tight(); }
	const float &lep1_ip3d() { return stopcms3.lep1_ip3d(); }
	const float &lep1_ip3derr() { return stopcms3.lep1_ip3derr(); }
	const bool &lep1_is_pfmu() { return stopcms3.lep1_is_pfmu(); }
	const bool &lep1_passMediumID() { return stopcms3.lep1_passMediumID(); }
	const bool &lep1_passVeto() { return stopcms3.lep1_passVeto(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_p4() { return stopcms3.lep1_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep1_mcp4() { return stopcms3.lep1_mcp4(); }
	const float &lep1_pt() { return stopcms3.lep1_pt(); }
	const float &lep1_eta() { return stopcms3.lep1_eta(); }
	const float &lep1_phi() { return stopcms3.lep1_phi(); }
	const float &lep1_mass() { return stopcms3.lep1_mass(); }
	const bool &lep2_is_mu() { return stopcms3.lep2_is_mu(); }
	const bool &lep2_is_el() { return stopcms3.lep2_is_el(); }
	const int &lep2_charge() { return stopcms3.lep2_charge(); }
	const int &lep2_pdgid() { return stopcms3.lep2_pdgid(); }
	const int &lep2_type() { return stopcms3.lep2_type(); }
	const int &lep2_production_type() { return stopcms3.lep2_production_type(); }
	const float &lep2_d0() { return stopcms3.lep2_d0(); }
	const float &lep2_d0err() { return stopcms3.lep2_d0err(); }
	const float &lep2_dz() { return stopcms3.lep2_dz(); }
	const float &lep2_dzerr() { return stopcms3.lep2_dzerr(); }
	const float &lep2_sigmaIEtaEta_fill5x5() { return stopcms3.lep2_sigmaIEtaEta_fill5x5(); }
	const float &lep2_dEtaIn() { return stopcms3.lep2_dEtaIn(); }
	const float &lep2_dPhiIn() { return stopcms3.lep2_dPhiIn(); }
	const float &lep2_hOverE() { return stopcms3.lep2_hOverE(); }
	const float &lep2_ooEmooP() { return stopcms3.lep2_ooEmooP(); }
	const int &lep2_expectedMissingInnerHits() { return stopcms3.lep2_expectedMissingInnerHits(); }
	const bool &lep2_conversionVeto() { return stopcms3.lep2_conversionVeto(); }
	const float &lep2_etaSC() { return stopcms3.lep2_etaSC(); }
	const float &lep2_ChiSqr() { return stopcms3.lep2_ChiSqr(); }
	const float &lep2_chiso() { return stopcms3.lep2_chiso(); }
	const float &lep2_nhiso() { return stopcms3.lep2_nhiso(); }
	const float &lep2_emiso() { return stopcms3.lep2_emiso(); }
	const float &lep2_deltaBeta() { return stopcms3.lep2_deltaBeta(); }
	const float &lep2_relIso03DB() { return stopcms3.lep2_relIso03DB(); }
	const float &lep2_relIso03EA() { return stopcms3.lep2_relIso03EA(); }
	const float &lep2_relIso04DB() { return stopcms3.lep2_relIso04DB(); }
	const float &lep2_miniRelIsoDB() { return stopcms3.lep2_miniRelIsoDB(); }
	const float &lep2_miniRelIsoEA() { return stopcms3.lep2_miniRelIsoEA(); }
	const float &lep2_MiniIso() { return stopcms3.lep2_MiniIso(); }
	const int &lep2_mcid() { return stopcms3.lep2_mcid(); }
	const int &lep2_mcstatus() { return stopcms3.lep2_mcstatus(); }
	const int &lep2_mc3dr() { return stopcms3.lep2_mc3dr(); }
	const int &lep2_mc3id() { return stopcms3.lep2_mc3id(); }
	const int &lep2_mc3idx() { return stopcms3.lep2_mc3idx(); }
	const int &lep2_mc3motherid() { return stopcms3.lep2_mc3motherid(); }
	const int &lep2_mc3motheridx() { return stopcms3.lep2_mc3motheridx(); }
	const bool &lep2_is_eleid_loose() { return stopcms3.lep2_is_eleid_loose(); }
	const bool &lep2_is_eleid_medium() { return stopcms3.lep2_is_eleid_medium(); }
	const bool &lep2_is_eleid_tight() { return stopcms3.lep2_is_eleid_tight(); }
	const bool &lep2_is_phys14_loose_noIso() { return stopcms3.lep2_is_phys14_loose_noIso(); }
	const bool &lep2_is_phys14_medium_noIso() { return stopcms3.lep2_is_phys14_medium_noIso(); }
	const bool &lep2_is_phys14_tight_noIso() { return stopcms3.lep2_is_phys14_tight_noIso(); }
	const float &lep2_eoverpin() { return stopcms3.lep2_eoverpin(); }
	const bool &lep2_is_muoid_loose() { return stopcms3.lep2_is_muoid_loose(); }
	const bool &lep2_is_muoid_medium() { return stopcms3.lep2_is_muoid_medium(); }
	const bool &lep2_is_muoid_tight() { return stopcms3.lep2_is_muoid_tight(); }
	const float &lep2_ip3d() { return stopcms3.lep2_ip3d(); }
	const float &lep2_ip3derr() { return stopcms3.lep2_ip3derr(); }
	const bool &lep2_is_pfmu() { return stopcms3.lep2_is_pfmu(); }
	const bool &lep2_passMediumID() { return stopcms3.lep2_passMediumID(); }
	const bool &lep2_passVeto() { return stopcms3.lep2_passVeto(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_p4() { return stopcms3.lep2_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep2_mcp4() { return stopcms3.lep2_mcp4(); }
	const float &lep2_pt() { return stopcms3.lep2_pt(); }
	const float &lep2_eta() { return stopcms3.lep2_eta(); }
	const float &lep2_phi() { return stopcms3.lep2_phi(); }
	const float &lep2_mass() { return stopcms3.lep2_mass(); }
	const vector<float> &ph_sigmaIEtaEta_fill5x5() { return stopcms3.ph_sigmaIEtaEta_fill5x5(); }
	const vector<float> &ph_hOverE() { return stopcms3.ph_hOverE(); }
	const vector<float> &ph_r9() { return stopcms3.ph_r9(); }
	const vector<float> &ph_chiso() { return stopcms3.ph_chiso(); }
	const vector<float> &ph_nhiso() { return stopcms3.ph_nhiso(); }
	const vector<float> &ph_phiso() { return stopcms3.ph_phiso(); }
	const vector<bool> &ph_idCutBased() { return stopcms3.ph_idCutBased(); }
	const vector<int> &ph_overlapJetId() { return stopcms3.ph_overlapJetId(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ph_p4() { return stopcms3.ph_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ph_mcp4() { return stopcms3.ph_mcp4(); }
	const vector<float> &ph_pt() { return stopcms3.ph_pt(); }
	const vector<float> &ph_eta() { return stopcms3.ph_eta(); }
	const vector<float> &ph_phi() { return stopcms3.ph_phi(); }
	const vector<float> &ph_mass() { return stopcms3.ph_mass(); }
	const vector<int> &ph_mcMatchId() { return stopcms3.ph_mcMatchId(); }
	const vector<float> &ph_genIso04() { return stopcms3.ph_genIso04(); }
	const vector<float> &ph_drMinParton() { return stopcms3.ph_drMinParton(); }
	const int &nGoodGenJets() { return stopcms3.nGoodGenJets(); }
	const int &ngoodjets() { return stopcms3.ngoodjets(); }
	const int &nfailjets() { return stopcms3.nfailjets(); }
	const int &ak8GoodPFJets() { return stopcms3.ak8GoodPFJets(); }
	const int &ngoodbtags() { return stopcms3.ngoodbtags(); }
	const float &ak4_HT() { return stopcms3.ak4_HT(); }
	const float &ak4_htssm() { return stopcms3.ak4_htssm(); }
	const float &ak4_htosm() { return stopcms3.ak4_htosm(); }
	const float &ak4_htratiom() { return stopcms3.ak4_htratiom(); }
	const vector<float> &dphi_ak4pfjet_met() { return stopcms3.dphi_ak4pfjet_met(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak4pfjets_p4() { return stopcms3.ak4pfjets_p4(); }
	const vector<float> &ak4pfjets_pt() { return stopcms3.ak4pfjets_pt(); }
	const vector<float> &ak4pfjets_eta() { return stopcms3.ak4pfjets_eta(); }
	const vector<float> &ak4pfjets_phi() { return stopcms3.ak4pfjets_phi(); }
	const vector<float> &ak4pfjets_mass() { return stopcms3.ak4pfjets_mass(); }
	const vector<bool> &ak4pfjets_passMEDbtag() { return stopcms3.ak4pfjets_passMEDbtag(); }
	const vector<float> &ak4pfjets_qg_disc() { return stopcms3.ak4pfjets_qg_disc(); }
	const vector<float> &ak4pfjets_CSV() { return stopcms3.ak4pfjets_CSV(); }
	const vector<float> &ak4pfjets_puid() { return stopcms3.ak4pfjets_puid(); }
	const vector<int> &ak4pfjets_parton_flavor() { return stopcms3.ak4pfjets_parton_flavor(); }
	const vector<bool> &ak4pfjets_loose_puid() { return stopcms3.ak4pfjets_loose_puid(); }
	const vector<bool> &ak4pfjets_loose_pfid() { return stopcms3.ak4pfjets_loose_pfid(); }
	const vector<bool> &ak4pfjets_medium_pfid() { return stopcms3.ak4pfjets_medium_pfid(); }
	const vector<bool> &ak4pfjets_tight_pfid() { return stopcms3.ak4pfjets_tight_pfid(); }
	const vector<float> &ak4pfjets_MEDbjet_pt() { return stopcms3.ak4pfjets_MEDbjet_pt(); }
	const float &ak4pfjets_leadMEDbjet_pt() { return stopcms3.ak4pfjets_leadMEDbjet_pt(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &ak4pfjets_leadMEDbjet_p4() { return stopcms3.ak4pfjets_leadMEDbjet_p4(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &ak4pfjets_leadbtag_p4() { return stopcms3.ak4pfjets_leadbtag_p4(); }
	const vector<float> &ak4pfjets_chf() { return stopcms3.ak4pfjets_chf(); }
	const vector<float> &ak4pfjets_nhf() { return stopcms3.ak4pfjets_nhf(); }
	const vector<float> &ak4pfjets_cef() { return stopcms3.ak4pfjets_cef(); }
	const vector<float> &ak4pfjets_nef() { return stopcms3.ak4pfjets_nef(); }
	const vector<float> &ak4pfjets_muf() { return stopcms3.ak4pfjets_muf(); }
	const vector<int> &ak4pfjets_cm() { return stopcms3.ak4pfjets_cm(); }
	const vector<int> &ak4pfjets_nm() { return stopcms3.ak4pfjets_nm(); }
	const vector<int> &ak4pfjets_mc3dr() { return stopcms3.ak4pfjets_mc3dr(); }
	const vector<int> &ak4pfjets_mc3id() { return stopcms3.ak4pfjets_mc3id(); }
	const vector<int> &ak4pfjets_mc3idx() { return stopcms3.ak4pfjets_mc3idx(); }
	const vector<int> &ak4pfjets_mcmotherid() { return stopcms3.ak4pfjets_mcmotherid(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &ak4pfjet_overlep1_p4() { return stopcms3.ak4pfjet_overlep1_p4(); }
	const float &ak4pfjet_overlep1_CSV() { return stopcms3.ak4pfjet_overlep1_CSV(); }
	const float &ak4pfjet_overlep1_pu_id() { return stopcms3.ak4pfjet_overlep1_pu_id(); }
	const float &ak4pfjet_overlep1_chf() { return stopcms3.ak4pfjet_overlep1_chf(); }
	const float &ak4pfjet_overlep1_nhf() { return stopcms3.ak4pfjet_overlep1_nhf(); }
	const float &ak4pfjet_overlep1_cef() { return stopcms3.ak4pfjet_overlep1_cef(); }
	const float &ak4pfjet_overlep1_nef() { return stopcms3.ak4pfjet_overlep1_nef(); }
	const float &ak4pfjet_overlep1_muf() { return stopcms3.ak4pfjet_overlep1_muf(); }
	const int &ak4pfjet_overlep1_cm() { return stopcms3.ak4pfjet_overlep1_cm(); }
	const int &ak4pfjet_overlep1_nm() { return stopcms3.ak4pfjet_overlep1_nm(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &ak4pfjet_overlep2_p4() { return stopcms3.ak4pfjet_overlep2_p4(); }
	const float &ak4pfjet_overlep2_CSV() { return stopcms3.ak4pfjet_overlep2_CSV(); }
	const float &ak4pfjet_overlep2_pu_id() { return stopcms3.ak4pfjet_overlep2_pu_id(); }
	const float &ak4pfjet_overlep2_chf() { return stopcms3.ak4pfjet_overlep2_chf(); }
	const float &ak4pfjet_overlep2_nhf() { return stopcms3.ak4pfjet_overlep2_nhf(); }
	const float &ak4pfjet_overlep2_cef() { return stopcms3.ak4pfjet_overlep2_cef(); }
	const float &ak4pfjet_overlep2_nef() { return stopcms3.ak4pfjet_overlep2_nef(); }
	const float &ak4pfjet_overlep2_muf() { return stopcms3.ak4pfjet_overlep2_muf(); }
	const int &ak4pfjet_overlep2_cm() { return stopcms3.ak4pfjet_overlep2_cm(); }
	const int &ak4pfjet_overlep2_nm() { return stopcms3.ak4pfjet_overlep2_nm(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak8pfjets_p4() { return stopcms3.ak8pfjets_p4(); }
	const vector<float> &ak8pfjets_tau1() { return stopcms3.ak8pfjets_tau1(); }
	const vector<float> &ak8pfjets_tau2() { return stopcms3.ak8pfjets_tau2(); }
	const vector<float> &ak8pfjets_tau3() { return stopcms3.ak8pfjets_tau3(); }
	const vector<float> &ak8pfjets_top_mass() { return stopcms3.ak8pfjets_top_mass(); }
	const vector<float> &ak8pfjets_pruned_mass() { return stopcms3.ak8pfjets_pruned_mass(); }
	const vector<float> &ak8pfjets_trimmed_mass() { return stopcms3.ak8pfjets_trimmed_mass(); }
	const vector<float> &ak8pfjets_filtered_mass() { return stopcms3.ak8pfjets_filtered_mass(); }
	const vector<float> &ak8pfjets_pu_id() { return stopcms3.ak8pfjets_pu_id(); }
	const vector<int> &ak8pfjets_parton_flavor() { return stopcms3.ak8pfjets_parton_flavor(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak4genjets_p4() { return stopcms3.ak4genjets_p4(); }
	const vector<TString> &tau_IDnames() { return stopcms3.tau_IDnames(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &tau_leadtrack_p4() { return stopcms3.tau_leadtrack_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &tau_leadneutral_p4() { return stopcms3.tau_leadneutral_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &tau_p4() { return stopcms3.tau_p4(); }
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &tau_isocand_p4() { return stopcms3.tau_isocand_p4(); }
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &tau_sigcand_p4() { return stopcms3.tau_sigcand_p4(); }
	const vector<float> &tau_mass() { return stopcms3.tau_mass(); }
	const vector<vector<float> > &tau_ID() { return stopcms3.tau_ID(); }
	const vector<float> &tau_passID() { return stopcms3.tau_passID(); }
	const vector<float> &tau_charge() { return stopcms3.tau_charge(); }
	const int &ngoodtaus() { return stopcms3.ngoodtaus(); }
	const vector<float> &tau_againstMuonTight() { return stopcms3.tau_againstMuonTight(); }
	const vector<float> &tau_againstElectronLoose() { return stopcms3.tau_againstElectronLoose(); }
	const vector<bool> &tau_isVetoTau() { return stopcms3.tau_isVetoTau(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &isoTracks_p4() { return stopcms3.isoTracks_p4(); }
	const vector<int> &isoTracks_charge() { return stopcms3.isoTracks_charge(); }
	const vector<float> &isoTracks_absIso() { return stopcms3.isoTracks_absIso(); }
	const vector<float> &isoTracks_dz() { return stopcms3.isoTracks_dz(); }
	const vector<int> &isoTracks_pdgId() { return stopcms3.isoTracks_pdgId(); }
	const vector<int> &isoTracks_selectedidx() { return stopcms3.isoTracks_selectedidx(); }
	const int &isoTracks_nselected() { return stopcms3.isoTracks_nselected(); }
	const vector<bool> &isoTracks_isVetoTrack() { return stopcms3.isoTracks_isVetoTrack(); }
	const vector<bool> &isoTracks_isVetoTrack_v2() { return stopcms3.isoTracks_isVetoTrack_v2(); }
	const vector<bool> &isoTracks_isVetoTrack_v3() { return stopcms3.isoTracks_isVetoTrack_v3(); }
	const vector<bool> &genleps_isfromt() { return stopcms3.genleps_isfromt(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genleps_p4() { return stopcms3.genleps_p4(); }
	const vector<int> &genleps_id() { return stopcms3.genleps_id(); }
	const vector<int> &genleps__genpsidx() { return stopcms3.genleps__genpsidx(); }
	const vector<int> &genleps_status() { return stopcms3.genleps_status(); }
	const vector<bool> &genleps_fromHardProcessDecayed() { return stopcms3.genleps_fromHardProcessDecayed(); }
	const vector<bool> &genleps_fromHardProcessFinalState() { return stopcms3.genleps_fromHardProcessFinalState(); }
	const vector<bool> &genleps_isHardProcess() { return stopcms3.genleps_isHardProcess(); }
	const vector<bool> &genleps_isLastCopy() { return stopcms3.genleps_isLastCopy(); }
	const vector<int> &genleps_gentaudecay() { return stopcms3.genleps_gentaudecay(); }
	const int &gen_nfromtleps_() { return stopcms3.gen_nfromtleps_(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genleps_motherp4() { return stopcms3.genleps_motherp4(); }
	const vector<int> &genleps_motherid() { return stopcms3.genleps_motherid(); }
	const vector<int> &genleps_motheridx() { return stopcms3.genleps_motheridx(); }
	const vector<int> &genleps_motherstatus() { return stopcms3.genleps_motherstatus(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genleps_gmotherp4() { return stopcms3.genleps_gmotherp4(); }
	const vector<int> &genleps_gmotherid() { return stopcms3.genleps_gmotherid(); }
	const vector<int> &genleps_gmotheridx() { return stopcms3.genleps_gmotheridx(); }
	const vector<int> &genleps_gmotherstatus() { return stopcms3.genleps_gmotherstatus(); }
	const vector<bool> &gennus_isfromt() { return stopcms3.gennus_isfromt(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gennus_p4() { return stopcms3.gennus_p4(); }
	const vector<int> &gennus_id() { return stopcms3.gennus_id(); }
	const vector<int> &gennus__genpsidx() { return stopcms3.gennus__genpsidx(); }
	const vector<int> &gennus_status() { return stopcms3.gennus_status(); }
	const vector<bool> &gennus_fromHardProcessDecayed() { return stopcms3.gennus_fromHardProcessDecayed(); }
	const vector<bool> &gennus_fromHardProcessFinalState() { return stopcms3.gennus_fromHardProcessFinalState(); }
	const vector<bool> &gennus_isHardProcess() { return stopcms3.gennus_isHardProcess(); }
	const vector<bool> &gennus_isLastCopy() { return stopcms3.gennus_isLastCopy(); }
	const vector<int> &gennus_gentaudecay() { return stopcms3.gennus_gentaudecay(); }
	const int &gen_nfromtnus_() { return stopcms3.gen_nfromtnus_(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gennus_motherp4() { return stopcms3.gennus_motherp4(); }
	const vector<int> &gennus_motherid() { return stopcms3.gennus_motherid(); }
	const vector<int> &gennus_motheridx() { return stopcms3.gennus_motheridx(); }
	const vector<int> &gennus_motherstatus() { return stopcms3.gennus_motherstatus(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gennus_gmotherp4() { return stopcms3.gennus_gmotherp4(); }
	const vector<int> &gennus_gmotherid() { return stopcms3.gennus_gmotherid(); }
	const vector<int> &gennus_gmotheridx() { return stopcms3.gennus_gmotheridx(); }
	const vector<int> &gennus_gmotherstatus() { return stopcms3.gennus_gmotherstatus(); }
	const vector<bool> &gents_isfromt() { return stopcms3.gents_isfromt(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gents_p4() { return stopcms3.gents_p4(); }
	const vector<int> &gents_id() { return stopcms3.gents_id(); }
	const vector<int> &gents__genpsidx() { return stopcms3.gents__genpsidx(); }
	const vector<int> &gents_status() { return stopcms3.gents_status(); }
	const vector<bool> &gents_fromHardProcessDecayed() { return stopcms3.gents_fromHardProcessDecayed(); }
	const vector<bool> &gents_fromHardProcessFinalState() { return stopcms3.gents_fromHardProcessFinalState(); }
	const vector<bool> &gents_isHardProcess() { return stopcms3.gents_isHardProcess(); }
	const vector<bool> &gents_isLastCopy() { return stopcms3.gents_isLastCopy(); }
	const vector<int> &gents_gentaudecay() { return stopcms3.gents_gentaudecay(); }
	const int &gen_nfromtts_() { return stopcms3.gen_nfromtts_(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gents_motherp4() { return stopcms3.gents_motherp4(); }
	const vector<int> &gents_motherid() { return stopcms3.gents_motherid(); }
	const vector<int> &gents_motheridx() { return stopcms3.gents_motheridx(); }
	const vector<int> &gents_motherstatus() { return stopcms3.gents_motherstatus(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gents_gmotherp4() { return stopcms3.gents_gmotherp4(); }
	const vector<int> &gents_gmotherid() { return stopcms3.gents_gmotherid(); }
	const vector<int> &gents_gmotheridx() { return stopcms3.gents_gmotheridx(); }
	const vector<int> &gents_gmotherstatus() { return stopcms3.gents_gmotherstatus(); }
	const vector<bool> &genqs_isfromt() { return stopcms3.genqs_isfromt(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genqs_p4() { return stopcms3.genqs_p4(); }
	const vector<int> &genqs_id() { return stopcms3.genqs_id(); }
	const vector<int> &genqs__genpsidx() { return stopcms3.genqs__genpsidx(); }
	const vector<int> &genqs_status() { return stopcms3.genqs_status(); }
	const vector<bool> &genqs_fromHardProcessDecayed() { return stopcms3.genqs_fromHardProcessDecayed(); }
	const vector<bool> &genqs_fromHardProcessFinalState() { return stopcms3.genqs_fromHardProcessFinalState(); }
	const vector<bool> &genqs_isHardProcess() { return stopcms3.genqs_isHardProcess(); }
	const vector<bool> &genqs_isLastCopy() { return stopcms3.genqs_isLastCopy(); }
	const vector<int> &genqs_gentaudecay() { return stopcms3.genqs_gentaudecay(); }
	const int &gen_nfromtqs_() { return stopcms3.gen_nfromtqs_(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genqs_motherp4() { return stopcms3.genqs_motherp4(); }
	const vector<int> &genqs_motherid() { return stopcms3.genqs_motherid(); }
	const vector<int> &genqs_motheridx() { return stopcms3.genqs_motheridx(); }
	const vector<int> &genqs_motherstatus() { return stopcms3.genqs_motherstatus(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genqs_gmotherp4() { return stopcms3.genqs_gmotherp4(); }
	const vector<int> &genqs_gmotherid() { return stopcms3.genqs_gmotherid(); }
	const vector<int> &genqs_gmotheridx() { return stopcms3.genqs_gmotheridx(); }
	const vector<int> &genqs_gmotherstatus() { return stopcms3.genqs_gmotherstatus(); }
	const vector<bool> &genbosons_isfromt() { return stopcms3.genbosons_isfromt(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genbosons_p4() { return stopcms3.genbosons_p4(); }
	const vector<int> &genbosons_id() { return stopcms3.genbosons_id(); }
	const vector<int> &genbosons__genpsidx() { return stopcms3.genbosons__genpsidx(); }
	const vector<int> &genbosons_status() { return stopcms3.genbosons_status(); }
	const vector<bool> &genbosons_fromHardProcessDecayed() { return stopcms3.genbosons_fromHardProcessDecayed(); }
	const vector<bool> &genbosons_fromHardProcessFinalState() { return stopcms3.genbosons_fromHardProcessFinalState(); }
	const vector<bool> &genbosons_isHardProcess() { return stopcms3.genbosons_isHardProcess(); }
	const vector<bool> &genbosons_isLastCopy() { return stopcms3.genbosons_isLastCopy(); }
	const vector<int> &genbosons_gentaudecay() { return stopcms3.genbosons_gentaudecay(); }
	const int &gen_nfromtbosons_() { return stopcms3.gen_nfromtbosons_(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genbosons_motherp4() { return stopcms3.genbosons_motherp4(); }
	const vector<int> &genbosons_motherid() { return stopcms3.genbosons_motherid(); }
	const vector<int> &genbosons_motheridx() { return stopcms3.genbosons_motheridx(); }
	const vector<int> &genbosons_motherstatus() { return stopcms3.genbosons_motherstatus(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genbosons_gmotherp4() { return stopcms3.genbosons_gmotherp4(); }
	const vector<int> &genbosons_gmotherid() { return stopcms3.genbosons_gmotherid(); }
	const vector<int> &genbosons_gmotheridx() { return stopcms3.genbosons_gmotheridx(); }
	const vector<int> &genbosons_gmotherstatus() { return stopcms3.genbosons_gmotherstatus(); }
	const vector<bool> &gensusy_isfromt() { return stopcms3.gensusy_isfromt(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gensusy_p4() { return stopcms3.gensusy_p4(); }
	const vector<int> &gensusy_id() { return stopcms3.gensusy_id(); }
	const vector<int> &gensusy__genpsidx() { return stopcms3.gensusy__genpsidx(); }
	const vector<int> &gensusy_status() { return stopcms3.gensusy_status(); }
	const vector<bool> &gensusy_fromHardProcessDecayed() { return stopcms3.gensusy_fromHardProcessDecayed(); }
	const vector<bool> &gensusy_fromHardProcessFinalState() { return stopcms3.gensusy_fromHardProcessFinalState(); }
	const vector<bool> &gensusy_isHardProcess() { return stopcms3.gensusy_isHardProcess(); }
	const vector<bool> &gensusy_isLastCopy() { return stopcms3.gensusy_isLastCopy(); }
	const vector<int> &gensusy_gentaudecay() { return stopcms3.gensusy_gentaudecay(); }
	const int &gen_nfromtsusy_() { return stopcms3.gen_nfromtsusy_(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gensusy_motherp4() { return stopcms3.gensusy_motherp4(); }
	const vector<int> &gensusy_motherid() { return stopcms3.gensusy_motherid(); }
	const vector<int> &gensusy_motheridx() { return stopcms3.gensusy_motheridx(); }
	const vector<int> &gensusy_motherstatus() { return stopcms3.gensusy_motherstatus(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gensusy_gmotherp4() { return stopcms3.gensusy_gmotherp4(); }
	const vector<int> &gensusy_gmotherid() { return stopcms3.gensusy_gmotherid(); }
	const vector<int> &gensusy_gmotheridx() { return stopcms3.gensusy_gmotheridx(); }
	const vector<int> &gensusy_gmotherstatus() { return stopcms3.gensusy_gmotherstatus(); }
}
