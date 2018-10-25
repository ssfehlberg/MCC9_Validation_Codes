# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/gen/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/g4/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/detsim/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/reco/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/ana/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/utility/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/evd/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/filter/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/systematics/cmake_install.cmake")
  include("/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/fcl/deeplearn/cmake_install.cmake")

endif()

