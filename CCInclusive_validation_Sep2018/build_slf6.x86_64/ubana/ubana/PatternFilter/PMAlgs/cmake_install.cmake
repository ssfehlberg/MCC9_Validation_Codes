# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/PatternFilter/PMAlgs

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_PatternFilter_PMAlgs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_PatternFilter_PMAlgs.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_PatternFilter_PMAlgs.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/lib/libubana_PatternFilter_PMAlgs.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_PatternFilter_PMAlgs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_PatternFilter_PMAlgs.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_PatternFilter_PMAlgs.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v07_02_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcorealg/v07_01_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/lardataalg/v07_00_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_06_08/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v3_03_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib_except/v1_02_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_12_06a/Linux64bit+2.6-2.12-e17-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_66_0a/Linux64bit+2.6-2.12-e17-prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_PatternFilter_PMAlgs.so")
    endif()
  endif()
endif()

