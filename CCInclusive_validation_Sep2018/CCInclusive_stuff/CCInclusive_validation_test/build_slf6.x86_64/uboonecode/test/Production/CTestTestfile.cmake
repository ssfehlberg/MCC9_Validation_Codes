# CMake generated Testfile for 
# Source directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/Production
# Build directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/test/Production
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(production.sh "/cvmfs/larsoft.opensciencegrid.org/products/cetbuildtools/v7_02_01/bin/cet_exec_test" "--wd" "/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/test/Production/production.sh.d" "--required-files" "" "--datafiles" "" "--skip-return-code" "247" "production.sh")
set_tests_properties(production.sh PROPERTIES  LABELS "DEFAULT;RELEASE" SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/test/Production/production.sh.d")