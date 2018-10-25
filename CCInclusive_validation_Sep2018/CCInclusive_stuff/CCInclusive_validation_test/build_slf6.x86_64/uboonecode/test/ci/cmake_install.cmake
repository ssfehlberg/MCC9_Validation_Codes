# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/uboone/app/users/sfehlber/CCInclusive_validation_test/localProducts_larsoft_v06_26_01_10_e10_prof")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Prof")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/test" TYPE PROGRAM FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_regression_seq_test_uboonecode.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_regression_test_uboonecode.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_regression_test_uboonecode_v2.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/prodgenietest.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/prodsingletest.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/uboone_hitcompare_canonical.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/uboone_hitcompare_detsim.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/uboone_hitcompare_g4.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/uboone_hitcompare_new.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/uboone_hitcompare_prod.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/uboone_hitcompare_reco2D.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ubooneopenold_detsim.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ubooneopenold_detsimreco2d.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ubooneopenold_detsimreco3d.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/uboonetest.sh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_tests.cfg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/job" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_test_ana_uboonecode.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_test_detsim_uboonecode.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_test_g4_uboonecode.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_test_geant_uboonecode.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_test_gen_uboonecode.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_test_mergeana_uboonecode.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_test_reco1_uboonecode.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/test/ci/ci_test_reco2_uboonecode.fcl"
    )
endif()

