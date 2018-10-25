# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/scripts" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/CMakeLists.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v00.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v01.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v02.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v03.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v04.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v05.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v06.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v07.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v08.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/ccpi0_constraint_v09.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/michel_constraint.txt"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/deeplearn/constraints/michel_constraint_mcc7.txt"
    )
endif()

