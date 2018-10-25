# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/job" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1_CV.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1_altDeadChannels.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1_deadSaturatedChannels.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1_stretchResp.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1and2_CV.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage2_CV.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_CV_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_noPEnoise_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_noShortedResp_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_whitenoise_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_withDIC_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_CV_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_LArG4BugFix_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_noSCE_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_spacecharge_EnhancedExtraTPCVis_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_10msLt.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_BirksRecomb.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_DL0.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_DT0.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_nodeltarays.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_nohadronic.fcl"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/fcl/systematics/detector" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1_CV.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1_altDeadChannels.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1_deadSaturatedChannels.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1_stretchResp.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage1and2_CV.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/reco_uboone_mcc8_driver_stage2_CV.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_CV_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_noPEnoise_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_noShortedResp_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_whitenoise_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_detsim_withDIC_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_CV_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_LArG4BugFix_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_noSCE_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_spacecharge_EnhancedExtraTPCVis_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_10msLt.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_BirksRecomb.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_DL0.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_DT0.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_nodeltarays.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/standard_g4_uboone_nohadronic.fcl"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/fcl/systematics/detector" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/systematics/detector/DetectorVariations.xml")
endif()

