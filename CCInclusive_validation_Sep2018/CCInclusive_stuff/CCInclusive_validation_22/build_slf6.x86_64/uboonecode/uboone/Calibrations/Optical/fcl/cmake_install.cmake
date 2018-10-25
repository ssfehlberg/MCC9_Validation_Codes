# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/uboone/app/users/sfehlber/CCInclusive_validation_22/localProducts_larsoft_v06_26_01_14_e10_prof")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/job" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/fememulator_microboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/opcalibration_microboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_SPEcalibration_module.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_fememulator.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_fememulator_fromraw.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_swtrigger.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_swtrigger_filter.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/swtrigger_microboone.fcl"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/Calibrations/Optical/fcl" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/fememulator_microboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/opcalibration_microboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_SPEcalibration_module.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_fememulator.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_fememulator_fromraw.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_swtrigger.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/run_swtrigger_filter.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Calibrations/Optical/fcl/swtrigger_microboone.fcl"
    )
endif()

