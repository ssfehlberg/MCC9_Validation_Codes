# CMake generated Testfile for 
# Source directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/EventGenerator
# Build directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/test/EventGenerator
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(prodsingle_uboone "/cvmfs/larsoft.opensciencegrid.org/products/cetbuildtools/v7_02_01/bin/cet_exec_test" "--wd" "/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/test/EventGenerator/prodsingle_uboone.d" "--required-files" "" "--datafiles" "" "--skip-return-code" "247" "lar" "--rethrow-all" "--config" "prodsingle_uboone.fcl")
set_tests_properties(prodsingle_uboone PROPERTIES  LABELS "RELEASE" SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/test/EventGenerator/prodsingle_uboone.d")
add_test(prodsingle_uboone_max2 "/cvmfs/larsoft.opensciencegrid.org/products/cetbuildtools/v7_02_01/bin/cet_exec_test" "--wd" "/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/test/EventGenerator/prodsingle_uboone_max2.d" "--required-files" "" "--datafiles" "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/EventGenerator/prodsingle_uboone_max2.fcl" "--skip-return-code" "247" "lar" "--rethrow-all" "--config" "prodsingle_uboone_max2.fcl")
set_tests_properties(prodsingle_uboone_max2 PROPERTIES  LABELS "DEFAULT;RELEASE" SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/test/EventGenerator/prodsingle_uboone_max2.d")
