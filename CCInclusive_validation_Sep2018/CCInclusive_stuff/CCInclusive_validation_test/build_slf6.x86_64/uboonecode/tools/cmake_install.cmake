# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/tools

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/bin/track_hadd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/bin/track_hadd")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/bin/track_hadd"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/bin" TYPE EXECUTABLE FILES "/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/bin/track_hadd")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/bin/track_hadd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/bin/track_hadd")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/bin/track_hadd"
         OLD_RPATH "/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/slf6.x86_64.e10.prof/bin/track_hadd")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/tools/MiniBooNENtupletoGSimpleConversion/cmake_install.cmake")

endif()

