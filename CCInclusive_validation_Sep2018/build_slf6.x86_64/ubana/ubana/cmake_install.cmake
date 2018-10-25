# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/localProducts_larsoft_v07_05_00_e17_prof")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/AnalysisTree/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/Calibrations/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/ChargedTrackMultiplicity/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/CosmicTagging/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/Filters/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/LEEPhotonAnalysis/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/LLApp/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/LLSelectionTool/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/MicroBooNEWireCell/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/OpticalDetectorAna/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/PatternFilter/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/TPCNeutrinoIDFilter/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/UBXSec/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/LArSoftExamples/cmake_install.cmake")

endif()

