# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libTPCNeutrinoIDAlgs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libTPCNeutrinoIDAlgs.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libTPCNeutrinoIDAlgs.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib/libTPCNeutrinoIDAlgs.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libTPCNeutrinoIDAlgs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libTPCNeutrinoIDAlgs.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libTPCNeutrinoIDAlgs.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v1_11_00_06/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_03/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/lardata/v06_14_04_06/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/canvas/v1_05_02/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v1_18_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_02_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_61_0/Linux64bit+2.6-2.12-e10-prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libTPCNeutrinoIDAlgs.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/include/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/AltNuMuCCInclusiveAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/ChargedTrackMultiplicityAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/Cluster2DNuAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/ModNuMuCCInclusiveAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NeutrinoIDAlgBase.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NeutrinoIDAlgFactory.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NuMuCCInclusiveAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NuMuCCSelectionIIAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NuMuCCSelectionIIAlgMCC7.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/TrackPairPlusVertexAlg.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/AltNuMuCCInclusiveAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/ChargedTrackMultiplicityAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/Cluster2DNuAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/ModNuMuCCInclusiveAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NeutrinoIDAlgFactory.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NuMuCCInclusiveAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NuMuCCSelectionIIAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NuMuCCSelectionIIAlgMCC7.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/TrackPairPlusVertexAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/AltNuMuCCInclusiveAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/ChargedTrackMultiplicityAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/Cluster2DNuAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/ModNuMuCCInclusiveAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NeutrinoIDAlgBase.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NeutrinoIDAlgFactory.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NuMuCCInclusiveAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NuMuCCSelectionIIAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/NuMuCCSelectionIIAlgMCC7.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/TPCNeutrinoIDFilter/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/TPCNeutrinoIDFilter/Algorithms/TrackPairPlusVertexAlg.h")
endif()

