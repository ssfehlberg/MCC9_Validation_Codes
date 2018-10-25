# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_SelectionTool_OpT0FinderAlgorithms.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_SelectionTool_OpT0FinderAlgorithms.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_SelectionTool_OpT0FinderAlgorithms.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib/libuboonecode_uboone_SelectionTool_OpT0FinderAlgorithms.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_SelectionTool_OpT0FinderAlgorithms.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_SelectionTool_OpT0FinderAlgorithms.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_SelectionTool_OpT0FinderAlgorithms.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/larsim/v06_13_01_10/slf6.x86_64.e10.prof/lib:/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib:/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_02_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/canvas/v1_05_02/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_61_0/Linux64bit+2.6-2.12-e10-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_03/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v1_18_00/slf6.x86_64.e10.prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboonecode_uboone_SelectionTool_OpT0FinderAlgorithms.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/include/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/ChargeAnalytical.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/CommonAmps.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/LightPath.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/LinkDef.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/MaxNPEWindow.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/NPtFilter.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/PhotonLibHypothesis.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/QLLMatch.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/QWeightPoint.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/TimeCompatMatch.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/TimeRange.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/ChargeAnalytical.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/CommonAmps.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/LightPath.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/MaxNPEWindow.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/NPtFilter.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/PhotonLibHypothesis.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/QLLMatch.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/QWeightPoint.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/TimeCompatMatch.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/TimeRange.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/ChargeAnalytical.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/CommonAmps.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/LightPath.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/LinkDef.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/MaxNPEWindow.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/NPtFilter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/PhotonLibHypothesis.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/QLLMatch.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/QWeightPoint.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/TimeCompatMatch.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/LLSelectionTool/OpT0Finder/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/LLSelectionTool/OpT0Finder/Algorithms/TimeRange.h")
endif()

