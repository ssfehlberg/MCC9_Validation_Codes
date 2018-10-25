# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_UBXSec_Algorithms.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_UBXSec_Algorithms.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_UBXSec_Algorithms.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib/libuboonecode_uboone_UBXSec_Algorithms.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_UBXSec_Algorithms.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_UBXSec_Algorithms.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_UBXSec_Algorithms.so"
         OLD_RPATH "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_03/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larevt/v06_07_09_08/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larsim/v06_13_01_10/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v1_11_00_06/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/lardata/v06_14_04_06/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larpandora/v06_08_00_14/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/nusimdata/v1_06_02/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/pandora/v03_00_00/Linux64bit+2.6-2.12-e10-nu-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/canvas/v1_05_02/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v1_18_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_02_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcoreobj/v1_06_02_03/slf6.x86_64.e10.prof/lib:/cvmfs/uboone.opensciencegrid.org/products/uboonedaq_datatypes/v6_19_01_e10/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/lib:/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_61_0/Linux64bit+2.6-2.12-e10-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larreco/v06_20_00_14/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_10_00_01/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_UBXSec_Algorithms.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/include/uboone/UBXSec/Algorithms" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/ACPTAlgo.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/CosmicTagByHitIntegral.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/CosmicTagToolInterface.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/FiducialVolume.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/FindDeadRegions.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/McPfpMatch.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/MuonCandidateFinder.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/NuMuCCEventSelection.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/StoppingMuonTaggerHelper.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/TPCObjectFilter.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/TrackQuality.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/UBXSecHelper.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/VertexCheck.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/ACPTAlgo.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/CosmicTagByHitIntegral.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/FiducialVolume.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/FindDeadRegions.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/McPfpMatch.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/MuonCandidateFinder.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/NuMuCCEventSelection.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/StoppingMuonTaggerHelper.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/TPCObjectFilter.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/TrackQuality.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/UBXSecHelper.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/VertexCheck.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/ACPTAlgo.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/CosmicTagByHitIntegral.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/CosmicTagToolInterface.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/FiducialVolume.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/FindDeadRegions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/McPfpMatch.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/MuonCandidateFinder.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/NuMuCCEventSelection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/StoppingMuonTaggerHelper.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/TPCObjectFilter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/TrackQuality.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/UBXSecHelper.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/UBXSec/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/Algorithms/VertexCheck.h")
endif()

