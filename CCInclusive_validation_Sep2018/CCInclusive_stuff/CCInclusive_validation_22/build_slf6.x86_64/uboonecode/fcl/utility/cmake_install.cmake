# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/job" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_raw.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawbnb.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawbnb_hsnc0.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawbnb_unbiased.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext_bnb.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext_hsnc0.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext_numi.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext_unbiased.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawmucs.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawnotpc.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawnotpc_specalib.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawnumi.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawnumi_unbiased.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawprescale.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recobnb.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recoext.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recomucs.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_reconotpc.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_reconumi.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recoprescale.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recosel1.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recosel2.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/drop_wires.fcl"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_22/source/fcl/utility" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_raw.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawbnb.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawbnb_hsnc0.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawbnb_unbiased.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext_bnb.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext_hsnc0.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext_numi.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawext_unbiased.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawmucs.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawnotpc.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawnotpc_specalib.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawnumi.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawnumi_unbiased.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_rawprescale.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recobnb.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recoext.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recomucs.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_reconotpc.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_reconumi.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recoprescale.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recosel1.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/copy_recosel2.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/fcl/utility/drop_wires.fcl"
    )
endif()

