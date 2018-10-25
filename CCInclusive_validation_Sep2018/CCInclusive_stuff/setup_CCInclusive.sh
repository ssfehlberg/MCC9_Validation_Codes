#!/bin/sh
#this is v06_26_01_17
echo CCInclusive MCC9 validatioin with uboonecode v06_26_01_22
alias uboonepro='ssh uboonepro@uboonegpvm07.fnal.gov'
alias ws01='ssh uboonepro@ubdaq-prod-ws01.fnal.gov'
alias ws02='ssh uboonepro@ubdaq-prod-ws02.fnal.gov'
alias myjobs='jobsub_q --user=sfehlber'
source /cvmfs/uboone.opensciencegrid.org/products/setup_uboone.sh
setup uboonecode v06_26_01_22 -q e10:prof
setup larbatch v01_38_02
export BUILDDIR=/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64
export CODEDIR=/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/
export ANADIR=/uboone/app/users/sfehlber/Analysis/ana/Current
export OUTPUT=/pnfs/uboone/scratch/users/sfehlber

cd /uboone/app/users/$USER/CCInclusive_validation_22/
source /uboone/app/users/$USER/CCInclusive_validation_22/localProducts_larsoft_v06_26_01_14_e10_prof/setup
cd $BUILDDIR
mrbslp
cd $CODEDIR
pwd
ls -ltr

