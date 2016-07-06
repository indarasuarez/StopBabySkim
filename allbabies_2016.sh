function run () {
    echo ./CopyBaby ${HADOOPDIR}/$1.root ${OUTPUTDIR}/$1
   nohup  ./CopyBaby ${HADOOPDIR}/$1.root ${OUTPUTDIR}/$1 >& log_merge_$1.txt &
}

#TAG=V00-01-09_25ns_fastsim

HADOOPDIR=/nfs-7/userdata/stopRun2/stop_babies__CMS3_V080005__BabyMaker_V0800X_v1__20160703/
#/nfs-7/userdata/stopRun2/StopBabies__CMS3_V07-08-00-XX/StopBabyMaker__v8p0x_v2/
#HADOOPDIR=/hadoop/cms/store/user/isuarez/condor/stop_1l_babies/stop_babies__CMS3_V080005__BabyMaker_V0800X_v1__20160617/merged_files/
#/hadoop/cms/store/user/jgwood/condor/stop_1l_babies/stop_babies__CMS3_V080005__BabyMaker_V0800X_v1__20160612/
#HADOOPDIR=/hadoop/cms/store/user/${USER}/condor/stop_1l_babies/MT2016/
#HADOOPDIR=/hadoop/cms/store/user/${USER}/condor/forSoftLeptons74X_1May16/
#OUTPUTDIR=/nfs-7/userdata/isuarez/MTStudies2016/
#OUTPUTDIR=/nfs-7/userdata/isuarez/stop_babies_met1501btag_CMS3_V080005__BabyMaker_V0800X_v2__20160617/
OUTPUTDIR=/nfs-7/userdata/isuarez/stop_babies_met1501btag_CMS3_V080005__BabyMaker_V0800X_v2__20160703/

mkdir -p $OUTPUTDIR
chmod -R a+wrx $OUTPUTDIR

#run WJetsToLNu_HT200To400_madgraph_pythia8_ext1_25ns_1
#run WJetsToLNu_HT800To1200_madgraph_pythia8_ext1_25ns_1
#run ttbarTo2L2Nu_powheg_25ns_1
#run ttbarTo2L2Nu_powheg_25ns_10
#run ttbarTo2L2Nu_powheg_25ns_11
#run ttbarTo2L2Nu_powheg_25ns_12
#run ttbarTo2L2Nu_powheg_25ns_13
#run ttbarTo2L2Nu_powheg_25ns_14
#run ttbarTo2L2Nu_powheg_25ns_15
#run ttbarTo2L2Nu_powheg_25ns_16
#run ttbarTo2L2Nu_powheg_25ns_17
#run ttbarTo2L2Nu_powheg_25ns_18
#run ttbarTo2L2Nu_powheg_25ns_19
#run ttbarTo2L2Nu_powheg_25ns_2
#run ttbarTo2L2Nu_powheg_25ns_20
#run ttbarTo2L2Nu_powheg_25ns_3
#run ttbarTo2L2Nu_powheg_25ns_4
#run ttbarTo2L2Nu_powheg_25ns_5
#run ttbarTo2L2Nu_powheg_25ns_6
#run ttbarTo2L2Nu_powheg_25ns_7
#run ttbarTo2L2Nu_powheg_25ns_8
#run ttbarTo2L2Nu_powheg_25ns_9
#run ttbar_amcnlo_pythia8_25ns_1
#run ttbar_amcnlo_pythia8_25ns_2
#run ttbar_diLept_madgraph_pythia8_25ns_1
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_1
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_2
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_3
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_4
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_5
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_6
#run ttbar_powheg_pythia8_ext4_25ns_1
#run ttbar_powheg_pythia8_ext4_25ns_10
#run ttbar_powheg_pythia8_ext4_25ns_11
#run ttbar_powheg_pythia8_ext4_25ns_2
#run ttbar_powheg_pythia8_ext4_25ns_3
#run ttbar_powheg_pythia8_ext4_25ns_4
#run ttbar_powheg_pythia8_ext4_25ns_5
#run ttbar_powheg_pythia8_ext4_25ns_6
#run ttbar_powheg_pythia8_ext4_25ns_7
#run ttbar_powheg_pythia8_ext4_25ns_8
#run ttbar_powheg_pythia8_ext4_25ns_9
#run ttbar_singleLeptFromT_madgraph_pythia8_25ns_1
#run ttbar_singleLeptFromTbar_madgraph_pythia8_25ns_1
#run ttbar_amcnlo_pythia8_25ns_1
#run ttbar_amcnlo_pythia8_25ns_2
#run ttbar_diLept_madgraph_pythia8_25ns_1
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_1
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_2
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_3
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_4
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_5
#run ttbar_diLept_madgraph_pythia8_ext1_25ns_6
#run ttbar_powheg_pythia8_ext4_25ns_1
#run ttbar_powheg_pythia8_ext4_25ns_10
#run ttbar_powheg_pythia8_ext4_25ns_11
#run ttbar_powheg_pythia8_ext4_25ns_2
#run ttbar_powheg_pythia8_ext4_25ns_3
#run ttbar_powheg_pythia8_ext4_25ns_4
#run ttbar_powheg_pythia8_ext4_25ns_5
#run ttbar_powheg_pythia8_ext4_25ns_6
#run ttbar_powheg_pythia8_ext4_25ns_7
#run ttbar_powheg_pythia8_ext4_25ns_8
#run ttbar_powheg_pythia8_ext4_25ns_9
#run ttbar_singleLeptFromT_madgraph_pythia8_25ns_1
#run ttbar_singleLeptFromTbar_madgraph_pythia8_25ns_1
#run data_muon_eg_Run2016B_MINIAOD_PromptReco-v2
#run data_single_electron_Run2016B_MINIAOD_PromptReco-v2
#run data_single_muon_Run2016B_MINIAOD_PromptReco-v2
#run data_met_Run2016B_MINIAOD_PromptReco-v2
#run ttbar_amcnlo_pythia8_25ns
#run ttbar_singleLeptFromT_madgraph_pythia8_25ns
#run ttbar_singleLeptFromTbar_madgraph_pythia8_25ns
#run ttbar_singleLeptFromTbar_madgraph_pythia8_ext1_25ns
#run ttbar_diLept_madgraph_pythia8_25ns
#run ttbar_diLept_madgraph_pythia8_ext1_25ns
#run ttbar_powheg_pythia8_ext4_25ns
#run ttbarTo2L2Nu_powheg_25ns
#run tbar_tch_4f_powheg_pythia8_25ns
#run t_tch_4f_powheg_pythia8_25ns
#run t_sch_4f_amcnlo_pythia8_25ns
#run t_tbarW_5f_powheg_pythia8_25ns
#run t_tW_5f_powheg_pythia8_25ns
#run DYJetsToLL_m10To50_amcnlo_pythia8_25ns
#run DYJetsToLL_m50_amcnlo_pythia8_25ns
#run WJetsToLNu_madgraph_pythia8_25ns
#run WJetsToLNu_HT100To200_madgraph_pythia8_ext1_25ns
#run WJetsToLNu_HT200To400_madgraph_pythia8_25ns
#run WJetsToLNu_HT200To400_madgraph_pythia8_ext1_25ns
#run WJetsToLNu_HT400To600_madgraph_pythia8_25ns
#run WJetsToLNu_HT600To800_madgraph_pythia8_25ns
#run WJetsToLNu_HT800To1200_madgraph_pythia8_25ns
#run WJetsToLNu_HT800To1200_madgraph_pythia8_ext1_25ns
#run WJetsToLNu_HT1200To2500_madgraph_pythia8_25ns
#run WJetsToLNu_HT2500ToInf_madgraph_pythia8_25ns
#run W1JetsToLNu_madgraph_pythia8_25ns
#run W2JetsToLNu_madgraph_pythia8_25ns
#run W3JetsToLNu_madgraph_pythia8_25ns
#run W4JetsToLNu_madgraph_pythia8_25ns
#run WW_pythia8_25ns
#run WWToLNuQQ_powheg_25ns
#run WWToLNuQQ_amcnlo_pythia8_25ns
#run WWTo2l2Nu_powheg_25ns
#run WZ_pythia8_25ns
#run WZTo3LNu_powheg_pythia8_25ns
#run WZTo2L2Q_amcnlo_pythia8_25ns
#run WZTo1L3Nu_amcnlo_pythia8_25ns
#run WZTo1LNu2Q_amcnlo_pythia8_25ns
#run ZZ_pythia8_25ns
#run ZZTo2L2Q_amcnlo_pythia8_25ns
#run ZZTo2Q2Nu_amcnlo_pythia8_25ns
#run ZZTo2L2Nu_powheg_pythia8_25ns
#run ZZTo4L_powheg_pythia8_25ns
#run TTWJetsToQQ_amcnlo_pythia8_25ns
#run TTWJetsToLNu_amcnlo_pythia8_25ns
#run TTZToQQ_amcnlo_pythia8_25ns
run TTZToLLNuNu_M-10_amcnlo_pythia8_25ns
run TTGJets_amcnlo_pythia8_25ns
