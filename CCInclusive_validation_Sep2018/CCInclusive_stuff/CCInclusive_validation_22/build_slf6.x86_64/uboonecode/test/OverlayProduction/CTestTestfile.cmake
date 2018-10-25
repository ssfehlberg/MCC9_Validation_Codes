# CMake generated Testfile for 
# Source directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/test/OverlayProduction
# Build directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/OverlayProduction
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(overlay_production.sh "/cvmfs/larsoft.opensciencegrid.org/products/cetbuildtools/v7_03_03/bin/cet_exec_test" "--wd" "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/OverlayProduction/overlay_production.sh.d" "--required-files" "" "--datafiles" "" "--skip-return-code" "247" "overlay_production.sh")
set_tests_properties(overlay_production.sh PROPERTIES  LABELS "DEFAULT;RELEASE" SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/OverlayProduction/overlay_production.sh.d")
