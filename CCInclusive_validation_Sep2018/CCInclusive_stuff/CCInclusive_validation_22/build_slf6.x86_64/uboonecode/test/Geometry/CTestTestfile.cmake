# CMake generated Testfile for 
# Source directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/test/Geometry
# Build directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/Geometry
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(geometry_microboone "/cvmfs/larsoft.opensciencegrid.org/products/cetbuildtools/v7_03_03/bin/cet_exec_test" "--wd" "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/Geometry/geometry_microboone.d" "--required-files" "" "--datafiles" "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/test/Geometry/test_geometry_uboone.fcl" "--skip-return-code" "247" "lar" "--rethrow-all" "--config" "./test_geometry_uboone.fcl")
set_tests_properties(geometry_microboone PROPERTIES  LABELS "DEFAULT;RELEASE" SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/test/Geometry/geometry_microboone.d")
