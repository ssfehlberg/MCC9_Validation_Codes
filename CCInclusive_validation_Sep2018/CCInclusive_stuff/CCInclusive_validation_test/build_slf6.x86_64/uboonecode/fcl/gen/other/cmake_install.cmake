# Install script for directory: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other

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
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prod_supernova_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_cmc_mcc80compat_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_cmc_mcc80compat_uboone_intime.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_cmc_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_cmc_uboone_intime.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_p_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_cry_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodstop_muminus_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodstop_muplus_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodstopmu_cosmic_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodstopmu_uboone.fcl"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/uboonecode/v06_26_01_13/source/fcl/gen/other" TYPE FILE FILES
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prod_supernova_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_cmc_mcc80compat_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_cmc_mcc80compat_uboone_intime.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_cmc_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_cmc_uboone_intime.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_corsika_p_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodcosmics_cry_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodstop_muminus_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodstop_muplus_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodstopmu_cosmic_uboone.fcl"
    "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/fcl/gen/other/prodstopmu_uboone.fcl"
    )
endif()

