# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libHitCosmicTag_Algorithms.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libHitCosmicTag_Algorithms.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libHitCosmicTag_Algorithms.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/lib/libHitCosmicTag_Algorithms.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libHitCosmicTag_Algorithms.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libHitCosmicTag_Algorithms.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libHitCosmicTag_Algorithms.so"
         OLD_RPATH "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/lib:/cvmfs/larsoft.opensciencegrid.org/products/art/v2_11_03/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_12_06a/Linux64bit+2.6-2.12-e17-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_06_08/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v3_03_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib_except/v1_02_01/slf6.x86_64.e17.prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libHitCosmicTag_Algorithms.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/include/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicDqDsCalculator.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicDqDsSmoother.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicHitOrderer.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicHitSmoother.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicLocalLinearityCalculator.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicStartHitFinder.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/CosmicSimpleMIP.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/StopMuBragg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/StopMuMichel.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicDqDsCalculator.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicDqDsSmoother.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicHitOrderer.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicHitSmoother.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicLocalLinearityCalculator.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicStartHitFinder.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/CosmicSimpleMIP.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/StopMuBragg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/StopMuMichel.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicDqDsCalculator.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicDqDsSmoother.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicHitOrderer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicHitSmoother.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicLocalLinearityCalculator.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/ClassicStartHitFinder.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/CosmicSimpleMIP.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/StopMuBragg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/UBXSec/HitCosmicTag/Algorithms" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/UBXSec/HitCosmicTag/Algorithms/StopMuMichel.h")
endif()
