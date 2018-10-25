# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libbernfebdaq-core_Overlays.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libbernfebdaq-core_Overlays.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libbernfebdaq-core_Overlays.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib" TYPE SHARED_LIBRARY FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/lib/libbernfebdaq-core_Overlays.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libbernfebdaq-core_Overlays.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libbernfebdaq-core_Overlays.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libbernfebdaq-core_Overlays.so"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/slf6.x86_64.e10.prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/lib/libbernfebdaq-core_Overlays.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/include/uboone/CRT/CRTBernFEBDAQCore/Overlays" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays/BernFEBFragment.hh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays/BernZMQFragment.hh"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays/FragmentType.hh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CRT/CRTBernFEBDAQCore/Overlays" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays/BernFEBFragment.cc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CRT/CRTBernFEBDAQCore/Overlays" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays/BernZMQFragment.cc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CRT/CRTBernFEBDAQCore/Overlays" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays/FragmentType.cc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CRT/CRTBernFEBDAQCore/Overlays" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays/BernFEBFragment.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CRT/CRTBernFEBDAQCore/Overlays" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays/BernZMQFragment.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/uboone/CRT/CRTBernFEBDAQCore/Overlays" TYPE FILE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTBernFEBDAQCore/Overlays/FragmentType.hh")
endif()

