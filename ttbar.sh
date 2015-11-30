for i in `seq 1 10`;
do
    ./CopyBaby /hadoop/cms/store/user/jgwood/condor/stop_1l_babies/stop_babies__CMS3_V070411__BabyMaker_V0704X_v6__20151123/merged_files/ttbar_powheg_pythia8_ext3_25ns_mergedBaby_${i}.root ttbar_powheg_pythia8_ext3_25ns_mergedBaby_${i}
done
