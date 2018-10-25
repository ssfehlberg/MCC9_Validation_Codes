# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# compile CXX with /cvmfs/larsoft.opensciencegrid.org/products/gcc/v7_3_0/Linux64bit+2.6-2.12/bin/g++
CXX_FLAGS = -g -gdwarf-4 -O3 -fno-omit-frame-pointer -std=c++98 -Werror -Wno-error=deprecated-declarations -pedantic -Wno-unused-local-typedefs -std=c++17 -Wall -Werror=return-type -fPIC  

CXX_DEFINES = -DNDEBUG -Dubana_LEEPhotonAnalysis_EXPORTS

CXX_INCLUDES = -I/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs -I/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana -I/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana -I/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_13_2c/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_4_6/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/cetlib_except/v1_02_01/include -isystem /cvmfs/larsoft.opensciencegrid.org/products/boost/v1_66_0a/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_20_01_00/Linux64bit+2.6-2.12/include -I/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v3_03_01/slf6.x86_64.e17.prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_06_08/include -I/cvmfs/larsoft.opensciencegrid.org/products/tbb/v2018_2a/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/hep_concurrency/v1_00_03/slf6.x86_64.e17.prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v2_02_04/include -I/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_3_0/include -I/cvmfs/larsoft.opensciencegrid.org/products/canvas/v3_03_03/include -I/cvmfs/larsoft.opensciencegrid.org/products/root/v6_12_06a/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/larcoreobj/v07_00_01/include -I/cvmfs/larsoft.opensciencegrid.org/products/larcorealg/v07_01_01/include -I/cvmfs/larsoft.opensciencegrid.org/products/dk2nudata/v01_06_01b/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/nusimdata/v1_14_01/include -I/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v07_02_02/include -I/cvmfs/larsoft.opensciencegrid.org/products/lardataalg/v07_00_02/include -I/cvmfs/larsoft.opensciencegrid.org/products/TRACE/v3_13_07/include -I/cvmfs/larsoft.opensciencegrid.org/products/artdaq_core/v3_02_04/include -I/cvmfs/uboone.opensciencegrid.org/products/ubobj/v07_05_00/include -I/cvmfs/larsoft.opensciencegrid.org/products/canvas_root_io/v1_01_08/include -I/cvmfs/larsoft.opensciencegrid.org/products/art/v2_11_03/include -I/cvmfs/larsoft.opensciencegrid.org/products/larcore/v07_00_02/include -I/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_10c/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/dk2nugenie/v01_06_01f/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_26_0/Linux64bit+2.6-2.12/include -I/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_6_6a/Linux64bit+2.6-2.12-p2714b/include -I/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_2_0a/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_24_04/include -I/cvmfs/larsoft.opensciencegrid.org/products/lardata/v07_00_06/include -I/cvmfs/uboone.opensciencegrid.org/products/ubcore/v07_05_00_01/include -I/cvmfs/larsoft.opensciencegrid.org/products/ifdh_art/v2_06_07/slf6.x86_64.e17.s70.prof/inc -I/cvmfs/larsoft.opensciencegrid.org/products/larevt/v07_00_06/include -I/cvmfs/larsoft.opensciencegrid.org/products/gsl/v2_4/Linux64bit+2.6-2.12-prof/include -I/cvmfs/uboone.opensciencegrid.org/products/ubevt/v07_05_00_01/include -I/cvmfs/larsoft.opensciencegrid.org/products/marley/v1_0_0e/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/larsim/v07_02_02/include -I/cvmfs/uboone.opensciencegrid.org/products/ubsim/v07_05_00_01/include -I/cvmfs/larsoft.opensciencegrid.org/products/eigen/v3_3_4a/include/eigen3 -I/cvmfs/larsoft.opensciencegrid.org/products/protobuf/v3_5_2/Linux64bit+2.6-2.12-e17/include -I/cvmfs/larsoft.opensciencegrid.org/products/tensorflow/v1_3_0d/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/larreco/v07_03_02/include -I/cvmfs/uboone.opensciencegrid.org/products/ubreco/v07_05_00_01/include -I/cvmfs/uboone.opensciencegrid.org/products/uboonedaq_datatypes/v6_22_05a/include -I/cvmfs/uboone.opensciencegrid.org/products/ubraw/v07_05_00_01/include -I/cvmfs/larsoft.opensciencegrid.org/products/larana/v07_01_01/include -I/cvmfs/larsoft.opensciencegrid.org/products/pandora/v03_11_01/Linux64bit+2.6-2.12-e17-prof/include -I/cvmfs/larsoft.opensciencegrid.org/products/larpandoracontent/v03_14_01/include -I/cvmfs/larsoft.opensciencegrid.org/products/larpandora/v07_01_03/include 

