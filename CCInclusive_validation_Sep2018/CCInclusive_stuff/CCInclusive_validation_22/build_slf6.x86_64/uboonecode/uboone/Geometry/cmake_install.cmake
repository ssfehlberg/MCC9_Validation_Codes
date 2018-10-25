# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboone_Geometry.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboone_Geometry.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboone_Geometry.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib/libuboone_Geometry.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboone_Geometry.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboone_Geometry.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboone_Geometry.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_03/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v1_18_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_02_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libuboone_Geometry.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBOpReadoutMap_service.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBOpReadoutMap_service.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBOpReadoutMap_service.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib/libUBOpReadoutMap_service.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBOpReadoutMap_service.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBOpReadoutMap_service.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBOpReadoutMap_service.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/canvas/v1_05_02/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_02_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_61_0/Linux64bit+2.6-2.12-e10-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_03/slf6.x86_64.e10.prof/lib:/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib:/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v1_18_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBOpReadoutMap_service.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBooNEGeometryHelper_service.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBooNEGeometryHelper_service.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBooNEGeometryHelper_service.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib/libUBooNEGeometryHelper_service.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBooNEGeometryHelper_service.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBooNEGeometryHelper_service.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBooNEGeometryHelper_service.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/canvas/v1_05_02/slf6.x86_64.e10.nu.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_02_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_61_0/Linux64bit+2.6-2.12-e10-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_03/slf6.x86_64.e10.prof/lib:/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/lib:/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v1_18_00/slf6.x86_64.e10.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/slf6.x86_64.e10.prof/lib/libUBooNEGeometryHelper_service.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/include/uboone/Geometry" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/ChannelMapUBooNEAlg.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/UBOpChannelTypes.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/UBOpReadoutMap.h"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/UBooNEGeometryHelper.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/job" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/geometry_microboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/microboone_opchreadoutmap.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/microboone_opdetmap.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/opchreadoutmap_2fem.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/opchreadoutmap_3fem.fcl"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/Geometry" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/UBOpReadoutMap_service.cc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/Geometry" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/UBooNEGeometryHelper_service.cc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/Geometry" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/ChannelMapUBooNEAlg.cxx")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/Geometry" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/ChannelMapUBooNEAlg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/Geometry" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/UBOpChannelTypes.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/Geometry" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/UBOpReadoutMap.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/uboone/Geometry" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Geometry/UBooNEGeometryHelper.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/Geometry/gdml/cmake_install.cmake")

endif()

