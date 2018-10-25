# CMake generated Testfile for 
# Source directory: /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/test/test_fcl
# Build directory: /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/test/test_fcl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_fcl_ubana.sh "/cvmfs/larsoft.opensciencegrid.org/products/cetbuildtools/v7_04_00/bin/cet_exec_test" "--wd" "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/test/test_fcl/test_fcl_ubana.sh.d" "--required-files" "" "--datafiles" "" "--skip-return-code" "247" "test_fcl_ubana.sh")
set_tests_properties(test_fcl_ubana.sh PROPERTIES  LABELS "DEFAULT;RELEASE" SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/test/test_fcl/test_fcl_ubana.sh.d")
