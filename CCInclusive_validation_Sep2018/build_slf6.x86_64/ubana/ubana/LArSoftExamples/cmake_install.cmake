# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/LArSoftExamples

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingAssnsAna_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingAssnsAna_module.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingAssnsAna_module.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/lib/libubana_LArSoftExamples_UsingAssnsAna_module.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingAssnsAna_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingAssnsAna_module.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingAssnsAna_module.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/art/v2_11_03/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/canvas/v3_03_03/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_06_08/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v3_03_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib_except/v1_02_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_12_06a/Linux64bit+2.6-2.12-e17-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_66_0a/Linux64bit+2.6-2.12-e17-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcorealg/v07_01_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcore/v07_00_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larsim/v07_02_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_24_04/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v07_02_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/lardata/v07_00_06/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larevt/v07_00_06/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larreco/v07_03_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larpandora/v07_01_03/slf6.x86_64.e17.prof/lib:/cvmfs/uboone.opensciencegrid.org/products/ubevt/v07_05_00_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/nusimdata/v1_14_01/slf6.x86_64.e17.prof/lib:/cvmfs/uboone.opensciencegrid.org/products/ubraw/v07_05_00_01/slf6.x86_64.e17.prof/lib:/cvmfs/uboone.opensciencegrid.org/products/ubobj/v07_05_00/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v2_02_04/slf6.x86_64.e17.prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingAssnsAna_module.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingHandlesAna_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingHandlesAna_module.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingHandlesAna_module.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/lib/libubana_LArSoftExamples_UsingHandlesAna_module.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingHandlesAna_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingHandlesAna_module.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingHandlesAna_module.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/art/v2_11_03/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/canvas/v3_03_03/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_06_08/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v3_03_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/cetlib_except/v1_02_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/root/v6_12_06a/Linux64bit+2.6-2.12-e17-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_66_0a/Linux64bit+2.6-2.12-e17-prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcorealg/v07_01_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larcore/v07_00_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larsim/v07_02_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_24_04/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v07_02_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/lardata/v07_00_06/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larevt/v07_00_06/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larreco/v07_03_02/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/larpandora/v07_01_03/slf6.x86_64.e17.prof/lib:/cvmfs/uboone.opensciencegrid.org/products/ubevt/v07_05_00_01/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/nusimdata/v1_14_01/slf6.x86_64.e17.prof/lib:/cvmfs/uboone.opensciencegrid.org/products/ubraw/v07_05_00_01/slf6.x86_64.e17.prof/lib:/cvmfs/uboone.opensciencegrid.org/products/ubobj/v07_05_00/slf6.x86_64.e17.prof/lib:/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v2_02_04/slf6.x86_64.e17.prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/slf6.x86_64.e17.prof/lib/libubana_LArSoftExamples_UsingHandlesAna_module.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/job" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/LArSoftExamples/run_usingassnsana.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/LArSoftExamples/run_usinghandlesana.fcl"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/LArSoftExamples" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/LArSoftExamples/UsingAssnsAna_module.cc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/LArSoftExamples" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/LArSoftExamples/UsingHandlesAna_module.cc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/LArSoftExamples" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/LArSoftExamples/README.md")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ubana/v07_05_00_01/source/ubana/LArSoftExamples" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/LArSoftExamples/README.md")
endif()

