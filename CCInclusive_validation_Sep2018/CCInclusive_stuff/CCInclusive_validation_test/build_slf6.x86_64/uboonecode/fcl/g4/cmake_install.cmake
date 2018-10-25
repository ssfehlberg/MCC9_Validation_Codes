# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/job" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_a.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_b.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_c.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_d.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_e.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_intime.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_mcc80compat_intime.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_merge.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_50kV_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_60kV_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_dark_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_dirt_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_mcc7_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_mcc80compat_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_nospacecharge_mcc80compat_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_nospacecharge_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_spacecharge_mcc80compat_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_spacecharge_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_uboone.fcl"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/fcl/g4" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_a.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_b.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_c.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_d.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_e.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_intime.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_mcc80compat_intime.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/corsika_g4_merge.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_50kV_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_60kV_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_dark_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_dirt_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_mcc7_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_mcc80compat_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_nospacecharge_mcc80compat_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_nospacecharge_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_spacecharge_mcc80compat_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_spacecharge_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/g4/standard_g4_uboone.fcl"
    )
endif()

