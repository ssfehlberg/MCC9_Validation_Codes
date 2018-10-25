# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libNoiseFilterAlgs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libNoiseFilterAlgs.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libNoiseFilterAlgs.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/lib/libNoiseFilterAlgs.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libNoiseFilterAlgs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libNoiseFilterAlgs.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libNoiseFilterAlgs.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v1_11_00_05/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/lardata/v06_14_04_05/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_02_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_02/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larevt/v06_07_09_06/slf6.x86_64.e10.prof/lib:/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/lib:/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/canvas/v1_05_02/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v1_18_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_61_0/Linux64bit+2.6-2.12-e10-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larreco/v06_20_00_10/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_10_00_01/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libNoiseFilterAlgs.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/include/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/ChannelGroups.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitBinAverageAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitCharacterizationAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitCorrelatedCorrectionAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitFFTAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitFilterAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitNoiseFilterDefs.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitCorrelatedCorrectionAlg.cc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/ChannelGroups.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitBinAverageAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitCharacterizationAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitFFTAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitFilterAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/ChannelGroups.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitBinAverageAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitCharacterizationAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitCorrelatedCorrectionAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitFFTAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitFilterAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CalData/NoiseFilterAlgs" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CalData/NoiseFilterAlgs/RawDigitNoiseFilterDefs.h")
endif()

