# CMake generated Testfile for 
# Source directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/test/RecoObjects
# Build directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/RecoObjects
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(PropTest "/cvmfs/larsoft.opensciencegrid.org/products/cetbuildtools/v7_03_03/bin/cet_exec_test" "--wd" "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/RecoObjects/PropTest.d" "--required-files" "" "--datafiles" "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/test/RecoObjects/PropTest.fcl" "--skip-return-code" "247" "lar" "-c" "PropTest.fcl")
set_tests_properties(PropTest PROPERTIES  LABELS "DEFAULT;RELEASE" SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/RecoObjects/PropTest.d")
add_test(InteractTest "/cvmfs/larsoft.opensciencegrid.org/products/cetbuildtools/v7_03_03/bin/cet_exec_test" "--wd" "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/RecoObjects/InteractTest.d" "--required-files" "" "--datafiles" "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/test/RecoObjects/PropTest.fcl" "--skip-return-code" "247" "lar" "-c" "InteractTest.fcl")
set_tests_properties(InteractTest PROPERTIES  LABELS "DEFAULT;RELEASE" SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/RecoObjects/InteractTest.d")
add_test(KalmanFilterTest "/cvmfs/larsoft.opensciencegrid.org/products/cetbuildtools/v7_03_03/bin/cet_exec_test" "--wd" "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/RecoObjects/KalmanFilterTest.d" "--required-files" "" "--datafiles" "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/test/RecoObjects/KalmanFilterTest.fcl" "--skip-return-code" "247" "lar" "-c" "KalmanFilterTest.fcl")
set_tests_properties(KalmanFilterTest PROPERTIES  LABELS "DEFAULT;RELEASE" SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/RecoObjects/KalmanFilterTest.d")
