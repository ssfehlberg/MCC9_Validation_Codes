
set( uboonecode_VERSION 06.26.01.13 )
set( uboonecode_UPS_VERSION v06_26_01_13 )


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was product-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################


## find_ups_product directives
## remember that these are minimum required versions
    find_ups_product( larcore v1_00_00 )
    find_ups_product( larcoreobj  )
    find_ups_product( canvas  )
    find_ups_product( cppunit  )
    find_ups_product( clhep  )
    find_ups_product( cetlib  )
    find_ups_boost( v1_50_0 )
    find_ups_product( sqlite  )
    find_ups_product( fhiclcpp  )
    find_ups_product( messagefacility  )
    find_ups_product( tbb  )
    find_ups_root(  )
    find_ups_product( art  )
    find_ups_product( lardata v1_00_00 )
    find_ups_product( lardataobj  )
    find_ups_product( nusimdata  )
    find_ups_product( nutools  )
    find_ups_product( genie  )
    find_ups_product( libwda  )
    find_ups_product( postgresql  )
    find_ups_product( geant4  )
    find_ups_product( xerces_c v3_0_0 )
    find_ups_product( range  )
    find_ups_product( larevt v1_00_00 )
    find_ups_product( larsim v1_00_00 )
    find_ups_product( marley  )
    find_ups_product( ifdhc  )
    find_ups_product( larreco v1_00_00 )
    find_ups_product( larpandora v1_00_00 )
    find_ups_product( pandora v02_00_00 )
    find_ups_product( larpandoracontent v02_04_00 )
    find_ups_product( eigen  )
    find_ups_product( larana v1_00_00 )
    find_ups_product( uboonedaq_datatypes  )
    find_ups_product( ifdh_art  )
    find_ups_product( ifbeam  )
    find_ups_product( nucondb  )
    find_ups_product( gsl  )
    find_ups_product( gallery  )
    find_ups_product( artdaq_core v1_00_00 )
    find_ups_product( cetpkgsupport v1_08_03 )


## find_library directives
    if( NOT SQLITE3 )
      cet_find_library( SQLITE3 NAMES sqlite3_ups PATHS ENV SQLITE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT CLHEP )
      cet_find_library( CLHEP NAMES CLHEP PATHS ENV CLHEP_LIB_DIR NO_DEFAULT_PATH )
    endif()
    if( NOT CPPUNIT )
      cet_find_library( CPPUNIT NAMES cppunit PATHS ENV CPPUNIT_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4FR )
      cet_find_library( G4FR NAMES G4FR PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4GMOCREN )
      cet_find_library( G4GMOCREN NAMES G4GMocren PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4OPENGL )
      cet_find_library( G4OPENGL NAMES G4OpenGL PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4RAYTRACER )
      cet_find_library( G4RAYTRACER NAMES G4RayTracer PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4TREE )
      cet_find_library( G4TREE NAMES G4Tree PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4VRML )
      cet_find_library( G4VRML NAMES G4VRML PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4ANALYSIS )
      cet_find_library( G4ANALYSIS NAMES G4analysis PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4DIGITS_HITS )
      cet_find_library( G4DIGITS_HITS NAMES G4digits_hits PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4ERROR_PROPAGATION )
      cet_find_library( G4ERROR_PROPAGATION NAMES G4error_propagation PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4EVENT )
      cet_find_library( G4EVENT NAMES G4event PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4GEOMETRY )
      cet_find_library( G4GEOMETRY NAMES G4geometry PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4GL2PS )
      cet_find_library( G4GL2PS NAMES G4gl2ps PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4GLOBAL )
      cet_find_library( G4GLOBAL NAMES G4global PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4GRAPHICS_REPS )
      cet_find_library( G4GRAPHICS_REPS NAMES G4graphics_reps PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4INTERCOMS )
      cet_find_library( G4INTERCOMS NAMES G4intercoms PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4INTERFACES )
      cet_find_library( G4INTERFACES NAMES G4interfaces PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4MATERIALS )
      cet_find_library( G4MATERIALS NAMES G4materials PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4MODELING )
      cet_find_library( G4MODELING NAMES G4modeling PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4PARMODELS )
      cet_find_library( G4PARMODELS NAMES G4parmodels PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4PARTICLES )
      cet_find_library( G4PARTICLES NAMES G4particles PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4PERSISTENCY )
      cet_find_library( G4PERSISTENCY NAMES G4persistency PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4PHYSICSLISTS )
      cet_find_library( G4PHYSICSLISTS NAMES G4physicslists PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4PROCESSES )
      cet_find_library( G4PROCESSES NAMES G4processes PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4READOUT )
      cet_find_library( G4READOUT NAMES G4readout PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4RUN )
      cet_find_library( G4RUN NAMES G4run PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4TRACK )
      cet_find_library( G4TRACK NAMES G4track PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4TRACKING )
      cet_find_library( G4TRACKING NAMES G4tracking PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4VISHEPREP )
      cet_find_library( G4VISHEPREP NAMES G4visHepRep PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4VISXXX )
      cet_find_library( G4VISXXX NAMES G4visXXX PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4VIS_MANAGEMENT )
      cet_find_library( G4VIS_MANAGEMENT NAMES G4vis_management PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT G4ZLIB )
      cet_find_library( G4ZLIB NAMES G4zlib PATHS ENV G4LIB NO_DEFAULT_PATH )
    endif()
    if( NOT PYTHIA6 )
      cet_find_library( PYTHIA6 NAMES Pythia6 PATHS ENV PYLIB NO_DEFAULT_PATH )
    endif()
    if( NOT LHAPDF )
      cet_find_library( LHAPDF NAMES LHAPDF PATHS ENV LHAPDF_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT LOG4CPP )
      cet_find_library( LOG4CPP NAMES log4cpp PATHS ENV LOG4CPP_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT XML2 )
      cet_find_library( XML2 NAMES xml2 PATHS /scratch/workspace/nu-release-build/v2_10_00_01/s59-e10/prof/build/libxml2/v2_9_3/Linux64bit+2.6-2.12-prof/lib NO_DEFAULT_PATH )
    endif()
    if( NOT CRY )
      cet_find_library( CRY NAMES CRY PATHS ENV CRY_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GALGORITHM )
      cet_find_library( GALGORITHM NAMES GAlgorithm PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GBARYONRESONANCE )
      cet_find_library( GBARYONRESONANCE NAMES GBaryonResonance PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GBASE )
      cet_find_library( GBASE NAMES GBase PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GBODEKYANG )
      cet_find_library( GBODEKYANG NAMES GBodekYang PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GCHARM )
      cet_find_library( GCHARM NAMES GCharm PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GCOH )
      cet_find_library( GCOH NAMES GCoh PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GDFRC )
      cet_find_library( GDFRC NAMES GDfrc PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GDIS )
      cet_find_library( GDIS NAMES GDIS PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GCROSSSECTIONS )
      cet_find_library( GCROSSSECTIONS NAMES GCrossSections PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GDECAY )
      cet_find_library( GDECAY NAMES GDecay PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GELAS )
      cet_find_library( GELAS NAMES GElas PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GELFF )
      cet_find_library( GELFF NAMES GElFF PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GHEP )
      cet_find_library( GHEP NAMES GHEP PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GEVGCORE )
      cet_find_library( GEVGCORE NAMES GEVGCore PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GEVGMODULES )
      cet_find_library( GEVGMODULES NAMES GEVGModules PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GEVGDRIVERS )
      cet_find_library( GEVGDRIVERS NAMES GEVGDrivers PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GGIBUU )
      cet_find_library( GGIBUU NAMES GGiBUU PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GHADRONTRANSP )
      cet_find_library( GHADRONTRANSP NAMES GHadronTransp PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GFRAGMENTATION )
      cet_find_library( GFRAGMENTATION NAMES GFragmentation PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GINTERACTION )
      cet_find_library( GINTERACTION NAMES GInteraction PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GLLEWELLYNSMITH )
      cet_find_library( GLLEWELLYNSMITH NAMES GLlewellynSmith PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GMEC )
      cet_find_library( GMEC NAMES GMEC PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GMESSENGER )
      cet_find_library( GMESSENGER NAMES GMessenger PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GNUGAMMA )
      cet_find_library( GNUGAMMA NAMES GNuGamma PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GNUE )
      cet_find_library( GNUE NAMES GNuE PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GNTUPLE )
      cet_find_library( GNTUPLE NAMES GNtuple PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GNUCLEAR )
      cet_find_library( GNUCLEAR NAMES GNuclear PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GNUMERICAL )
      cet_find_library( GNUMERICAL NAMES GNumerical PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GQPM )
      cet_find_library( GQPM NAMES GQPM PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GPDG )
      cet_find_library( GPDG NAMES GPDG PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GPDF )
      cet_find_library( GPDF NAMES GPDF PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GQEL )
      cet_find_library( GQEL NAMES GQEL PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GRES )
      cet_find_library( GRES NAMES GRES PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GREGISTRY )
      cet_find_library( GREGISTRY NAMES GRegistry PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GREINSEHGAL )
      cet_find_library( GREINSEHGAL NAMES GReinSehgal PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GUTILS )
      cet_find_library( GUTILS NAMES GUtils PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GGEO )
      cet_find_library( GGEO NAMES GGeo PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GFLUXDRIVERS )
      cet_find_library( GFLUXDRIVERS NAMES GFluxDrivers PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GMUELOSS )
      cet_find_library( GMUELOSS NAMES GMuELoss PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GREWEIGHT )
      cet_find_library( GREWEIGHT NAMES GReWeight PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GNUCLEONDECAY )
      cet_find_library( GNUCLEONDECAY NAMES GNucleonDecay PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT IFDH )
      cet_find_library( IFDH NAMES ifdh PATHS ENV IFDHC_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT PQ )
      cet_find_library( PQ NAMES pq PATHS ENV POSTGRESQL_LIBRARIES NO_DEFAULT_PATH )
    endif()
    if( NOT BOOST_SERIALIZATION )
      cet_find_library( BOOST_SERIALIZATION NAMES boost_serialization PATHS ENV BOOST_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT BOOST_DATE_TIME )
      cet_find_library( BOOST_DATE_TIME NAMES boost_date_time PATHS ENV BOOST_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GREINSEGHAL )
      cet_find_library( GREINSEGHAL NAMES GReinSeghal PATHS ENV GENIE_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT MARLEY )
      cet_find_library( MARLEY NAMES MARLEY PATHS ENV MARLEY_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT MARLEY_ROOT )
      cet_find_library( MARLEY_ROOT NAMES MARLEY_ROOT PATHS ENV MARLEY_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT PANDORASDK )
      cet_find_library( PANDORASDK NAMES PandoraSDK PATHS ENV PANDORA_LIB )
    endif()
    if( NOT PANDORAMONITORING )
      cet_find_library( PANDORAMONITORING NAMES PandoraMonitoring PATHS ENV PANDORA_LIB )
    endif()
    if( NOT IFBEAM )
      cet_find_library( IFBEAM NAMES ifbeam PATHS ENV IFBEAM_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT NUCONDB )
      cet_find_library( NUCONDB NAMES nucondb PATHS ENV NUCONDB_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT WDA )
      cet_find_library( WDA NAMES wda PATHS ENV LIBWDA_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT GSL )
      cet_find_library( GSL NAMES gsl PATHS ENV GSL_LIB NO_DEFAULT_PATH )
    endif()
    if( NOT UBDut )
      cet_find_library( UBDut NAMES ubdata_types PATHS /cvmfs/uboone.opensciencegrid.org/products/uboonedaq_datatypes/v6_19_01_e10/slf6.x86_64.e10.prof/lib )
    endif()
      set( UBOONEOBJ $ENV{UBOONECODE_LIB}/libubooneobj.so )
      set( UBOONEOBJ_DICT $ENV{UBOONECODE_LIB}/libubooneobj_dict.so )
      set( UBOONE_GEOMETRY $ENV{UBOONECODE_LIB}/libuboone_Geometry.so )
      set( UBOPREADOUTMAP_SERVICE $ENV{UBOONECODE_LIB}/libUBOpReadoutMap_service.so )
      set( UBOONEGEOMETRYHELPER_SERVICE $ENV{UBOONECODE_LIB}/libUBooNEGeometryHelper_service.so )
      set( LARRAWINPUTSOURCEUBOONE_SOURCE $ENV{UBOONECODE_LIB}/libLArRawInputSourceUBooNE_source.so )
      set( RAWDIGITWRITER_MODULE $ENV{UBOONECODE_LIB}/libRawDigitWriter_module.so )
      set( TRIGGERENFORCEMENT_MODULE $ENV{UBOONECODE_LIB}/libTriggerEnforcement_module.so )
      set( UBOONE_RAWDATA $ENV{UBOONECODE_LIB}/libuboone_RawData.so )
      set( RAWDIGITSAVER_MODULE $ENV{UBOONECODE_LIB}/libRawDigitSaver_module.so )
      set( TRIGGERDUMPER_MODULE $ENV{UBOONECODE_LIB}/libTriggerDumper_module.so )
      set( UBOONE_RAWDATA_UTILS_DICT $ENV{UBOONECODE_LIB}/libuboone_RawData_utils_dict.so )
      set( BEAMUTIL $ENV{UBOONECODE_LIB}/libBeamUtil.so )
      set( BEAMDATAQUALITYFILTER_MODULE $ENV{UBOONECODE_LIB}/libBeamDataQualityFilter_module.so )
      set( UBOONE_BEAMDATA $ENV{UBOONECODE_LIB}/libuboone_BeamData.so )
      set( BEAMDATA_MODULE $ENV{UBOONECODE_LIB}/libBeamData_module.so )
      set( BEAMDAQ $ENV{UBOONECODE_LIB}/libBeamDAQ.so )
      set( BEAMANA_MODULE $ENV{UBOONECODE_LIB}/libBeamAna_module.so )
      set( CRTPRODUCTS $ENV{UBOONECODE_LIB}/libCRTProducts.so )
      set( UBOONE_CRT_CRTPRODUCTS_DICT $ENV{UBOONECODE_LIB}/libuboone_CRT_CRTProducts_dict.so )
      set( BERNFEBDAQ-CORE_OVERLAYS $ENV{UBOONECODE_LIB}/libbernfebdaq-core_Overlays.so )
      set( CRTDATA $ENV{UBOONECODE_LIB}/libCRTData.so )
      set( CRTTRIGGERFILTER_MODULE $ENV{UBOONECODE_LIB}/libCRTTriggerFilter_module.so )
      set( UBOONE_CRT_DICT $ENV{UBOONECODE_LIB}/libuboone_CRT_dict.so )
      set( CRT $ENV{UBOONECODE_LIB}/libCRT.so )
      set( CRTGEOMETRYHELPER_SERVICE $ENV{UBOONECODE_LIB}/libCRTGeometryHelper_service.so )
      set( CRTDETSIM_MODULE $ENV{UBOONECODE_LIB}/libCRTDetSim_module.so )
      set( CRTCALIBRATION_MODULE $ENV{UBOONECODE_LIB}/libCRTCalibration_module.so )
      set( UBOONE_CRT_CRTHITPRODUCER_MODULE $ENV{UBOONECODE_LIB}/libuboone_CRT_CRTHitProducer_module.so )
      set( UBOONE_CRT_CRTTRACKPRODUCER_MODULE $ENV{UBOONECODE_LIB}/libuboone_CRT_CRTTrackProducer_module.so )
      set( UBOONE_CRT_FLASHEXT_MODULE $ENV{UBOONECODE_LIB}/libuboone_CRT_FlashExt_module.so )
      set( UBOONE_CRT_TIMEEXTRACTION_MODULE $ENV{UBOONECODE_LIB}/libuboone_CRT_TimeExtraction_module.so )
      set( UBOONE_CRT_MERGETEST_MODULE $ENV{UBOONECODE_LIB}/libuboone_CRT_MergeTest_module.so )
      set( UBOONE_CRT_CRTRAWTOCRTHIT_SOURCE $ENV{UBOONECODE_LIB}/libuboone_CRT_CRTRawtoCRTHit_source.so )
      set( UBOONE_CRT_CRTANALYSER_MODULE $ENV{UBOONECODE_LIB}/libuboone_CRT_CRTAnalyser_module.so )
      set( UBOONE_CRT_CRTMERGER_MODULE $ENV{UBOONECODE_LIB}/libuboone_CRT_CRTMerger_module.so )
      set( SIGNALSHAPINGSERVICEMICROBOONE_SERVICE $ENV{UBOONECODE_LIB}/libSignalShapingServiceMicroBooNE_service.so )
      set( FILECATALOGMETADATAMICROBOONE_SERVICE $ENV{UBOONECODE_LIB}/libFileCatalogMetadataMicroBooNE_service.so )
      set( TFILEMETADATAMICROBOONE_SERVICE $ENV{UBOONECODE_LIB}/libTFileMetadataMicroBooNE_service.so )
      set( TINYHITFINDERANA_MODULE $ENV{UBOONECODE_LIB}/libTinyHitFinderAna_module.so )
      set( RANDOMPRESCALE_MODULE $ENV{UBOONECODE_LIB}/libRandomPrescale_module.so )
      set( FILECATALOGMETADATARAWDIGIT_PLUGIN $ENV{UBOONECODE_LIB}/libFileCatalogMetadataRawDigit_plugin.so )
      set( SIGNALSHAPINGMICROBOONETEST_MODULE $ENV{UBOONECODE_LIB}/libSignalShapingMicroBooNETest_module.so )
      set( UBOONE_DATABASE $ENV{UBOONECODE_LIB}/libuboone_Database.so )
      set( TESTDBI_MODULE $ENV{UBOONECODE_LIB}/libTestDBI_module.so )
      set( UBOONECHANNELSTATUSSERVICE_SERVICE $ENV{UBOONECODE_LIB}/libUbooneChannelStatusService_service.so )
      set( UBOONEDETPEDESTALSERVICE_SERVICE $ENV{UBOONECODE_LIB}/libUbooneDetPedestalService_service.so )
      set( UBOONEELECTRONLIFETIMESERVICE_SERVICE $ENV{UBOONECODE_LIB}/libUbooneElectronLifetimeService_service.so )
      set( UBOONEELECTRONICSCALIBSERVICE_SERVICE $ENV{UBOONECODE_LIB}/libUbooneElectronicsCalibService_service.so )
      set( UBOONEPMTGAINSERVICE_SERVICE $ENV{UBOONECODE_LIB}/libUboonePmtGainService_service.so )
      set( UBOONE_DATABASE_TPCENERGYCALIB $ENV{UBOONECODE_LIB}/libuboone_Database_TPCEnergyCalib.so )
      set( UBOONETPCENERGYCALIBSERVICE_SERVICE $ENV{UBOONECODE_LIB}/libUbooneTPCEnergyCalibService_service.so )
      set( RAWDIGITSIMULATOR_MODULE $ENV{UBOONECODE_LIB}/libRawDigitSimulator_module.so )
      set( SIMWIREMICROBOONEANA_MODULE $ENV{UBOONECODE_LIB}/libSimWireMicroBooNEAna_module.so )
      set( SIMWIREMICROBOONE_MODULE $ENV{UBOONECODE_LIB}/libSimWireMicroBooNE_module.so )
      set( GENERATORPOSITIONFILTER_MODULE $ENV{UBOONECODE_LIB}/libGeneratorPositionFilter_module.so )
      set( MULTIPARTVERTEX_MODULE $ENV{UBOONECODE_LIB}/libMultiPartVertex_module.so )
      set( CALDATA $ENV{UBOONECODE_LIB}/libCalData.so )
      set( CALWIREINVERT_MODULE $ENV{UBOONECODE_LIB}/libCalWireInvert_module.so )
      set( CALWIREMICROBOONE_MODULE $ENV{UBOONECODE_LIB}/libCalWireMicroBooNE_module.so )
      set( CALWIREROI_MODULE $ENV{UBOONECODE_LIB}/libCalWireROI_module.so )
      set( DUMPOPDETGEOMICROBOONE_MODULE $ENV{UBOONECODE_LIB}/libDumpOpDetGeoMicroBooNE_module.so )
      set( RAWDIGITANDWIRECOMPARISON_MODULE $ENV{UBOONECODE_LIB}/libRawDigitAndWireComparison_module.so )
      set( RAWDIGITFILTERUBOONE_MODULE $ENV{UBOONECODE_LIB}/libRawDigitFilterUBooNE_module.so )
      set( SHOWWIRE_MODULE $ENV{UBOONECODE_LIB}/libShowWire_module.so )
      set( TESTCFI_MODULE $ENV{UBOONECODE_LIB}/libTestCFI_module.so )
      set( NOISEFILTERALGS $ENV{UBOONECODE_LIB}/libNoiseFilterAlgs.so )
      set( UBOONE_CALDATA_DECONTOOLS $ENV{UBOONECODE_LIB}/libuboone_CalData_DeconTools.so )
      set( UBOONECODE_UBOONE_TRIGGERSIM $ENV{UBOONECODE_LIB}/libuboonecode_uboone_TriggerSim.so )
      set( UBTRIGGERSIM_MODULE $ENV{UBOONECODE_LIB}/libUBTriggerSim_module.so )
      set( UBOONE_ANALYSISTREE_MCTRUTH_MCTRUTHBASE $ENV{UBOONECODE_LIB}/libuboone_AnalysisTree_MCTruth_MCTruthBase.so )
      set( UBOONE_ANALYSISTREE_MCTRUTH $ENV{UBOONECODE_LIB}/libuboone_AnalysisTree_MCTruth.so )
      set( UBOONE_ANALYSISTREE_MCTRUTH_MCTRUTHTESTANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_AnalysisTree_MCTruth_MCTruthTestAna_module.so )
      set( UBOONE_ANALYSISTREE_ANALYSISTREE_MODULE $ENV{UBOONECODE_LIB}/libuboone_AnalysisTree_AnalysisTree_module.so )
      set( SPECALIBRATIONCODE $ENV{UBOONECODE_LIB}/libSPEcalibrationCode.so )
      set( SPECALIBRATION_MODULE $ENV{UBOONECODE_LIB}/libSPEcalibration_module.so )
      set( FEMEMULATOR_MODULE $ENV{UBOONECODE_LIB}/libFEMemulator_module.so )
      set( SWTRIGGER_MODULE $ENV{UBOONECODE_LIB}/libSWTrigger_module.so )
      set( UBOONECODE_UBOONE_CALIBRATIONS $ENV{UBOONECODE_LIB}/libuboonecode_uboone_Calibrations.so )
      set( CALIBRATIONTPC_MODULE $ENV{UBOONECODE_LIB}/libCalibrationTPC_module.so )
      set( CALIBRATIONDEDX_MODULE $ENV{UBOONECODE_LIB}/libCalibrationdEdX_module.so )
      set( DIFFUSION_MODULE $ENV{UBOONECODE_LIB}/libDiffusion_module.so )
      set( LIFETIMEQAQC_MODULE $ENV{UBOONECODE_LIB}/libLifetimeQAQC_module.so )
      set( LIFETIME_MODULE $ENV{UBOONECODE_LIB}/libLifetime_module.so )
      set( NOISEFILTER_MODULE $ENV{UBOONECODE_LIB}/libNoiseFilter_module.so )
      set( VALIDATELIFETIME_MODULE $ENV{UBOONECODE_LIB}/libValidateLifetime_module.so )
      set( UBOONECODE_UBOONE_OPTICALDETECTORSIM $ENV{UBOONECODE_LIB}/libuboonecode_uboone_OpticalDetectorSim.so )
      set( OPTICALFEM_MODULE $ENV{UBOONECODE_LIB}/libOpticalFEM_module.so )
      set( UBFLASHERMC_MODULE $ENV{UBOONECODE_LIB}/libUBFlasherMC_module.so )
      set( UBOPTICALADCSIM_MODULE $ENV{UBOONECODE_LIB}/libUBOpticalADCSim_module.so )
      set( UBOPTICALCHCONFIG_SERVICE $ENV{UBOONECODE_LIB}/libUBOpticalChConfig_service.so )
      set( OPTICALDRAMREADOUT_MODULE $ENV{UBOONECODE_LIB}/libOpticalDRAMReadout_module.so )
      set( UBOONE_OPTICALDETECTORANA $ENV{UBOONECODE_LIB}/libuboone_OpticalDetectorAna.so )
      set( FLASHTRIGGER_MODULE $ENV{UBOONECODE_LIB}/libFlashTrigger_module.so )
      set( OPDIGITSATURATIONCORRECTION_MODULE $ENV{UBOONECODE_LIB}/libOpDigitSaturationCorrection_module.so )
      set( SIMPLEFLASHFINDER_MODULE $ENV{UBOONECODE_LIB}/libSimpleFlashFinder_module.so )
      set( UBBASICOPTICALANA_MODULE $ENV{UBOONECODE_LIB}/libUBBasicOpticalAna_module.so )
      set( OPTICALSUBEVENTS $ENV{UBOONECODE_LIB}/libOpticalSubEvents.so )
      set( UBOONE_OPTICALDETECTORANA_OPTICALSUBEVENTS_DICT $ENV{UBOONECODE_LIB}/libuboone_OpticalDetectorAna_OpticalSubEvents_dict.so )
      set( SUBEVENTBUILDER_MODULE $ENV{UBOONECODE_LIB}/libSubEventBuilder_module.so )
      set( UBOONE_LEEPRECUTALGO $ENV{UBOONECODE_LIB}/libuboone_LEEPreCutAlgo.so )
      set( DLPMTPRECUTS_MODULE $ENV{UBOONECODE_LIB}/libDLPMTPreCuts_module.so )
      set( UBOONE_SPACECHARGE $ENV{UBOONECODE_LIB}/libuboone_SpaceCharge.so )
      set( UBOONE_SPACECHARGESERVICES_SPACECHARGESERVICEMICROBOONE_SERVICE $ENV{UBOONECODE_LIB}/libuboone_SpaceChargeServices_SpaceChargeServiceMicroBooNE_service.so )
      set( OPFLASHFILTER_MODULE $ENV{UBOONECODE_LIB}/libOpFlashFilter_module.so )
      set( TPCNEUTRINOIDANA_MODULE $ENV{UBOONECODE_LIB}/libTPCNeutrinoIDAna_module.so )
      set( TPCNEUTRINOIDFILTER_MODULE $ENV{UBOONECODE_LIB}/libTPCNeutrinoIDFilter_module.so )
      set( TPCNEUTRINOID_MODULE $ENV{UBOONECODE_LIB}/libTPCNeutrinoID_module.so )
      set( TPCNEUTRINOIDALGS $ENV{UBOONECODE_LIB}/libTPCNeutrinoIDAlgs.so )
      set( UBOONECODE_UBOONE_LITEMAKER $ENV{UBOONECODE_LIB}/libuboonecode_uboone_LiteMaker.so )
      set( LITESCANNER_MODULE $ENV{UBOONECODE_LIB}/libLiteScanner_module.so )
      set( UTILSCANNER_MODULE $ENV{UBOONECODE_LIB}/libUtilScanner_module.so )
      set( LLMETAMAKER_SERVICE $ENV{UBOONECODE_LIB}/libLLMetaMaker_service.so )
      set( UBOONECODE_UBOONE_LARCVIMAGEMAKER $ENV{UBOONECODE_LIB}/libuboonecode_uboone_LArCVImageMaker.so )
      set( LARSOFTSUPERASRIVER_MODULE $ENV{UBOONECODE_LIB}/libLArSoftSuperaSriver_module.so )
      set( RSEFILTER_MODULE $ENV{UBOONECODE_LIB}/libRSEFilter_module.so )
      set( VPLANEHANDLER_MODULE $ENV{UBOONECODE_LIB}/libVPlaneHandler_module.so )
      set( LARCVMETAMAKER_SERVICE $ENV{UBOONECODE_LIB}/libLArCVMetaMaker_service.so )
      set( UBOONECODE_UBOONE_MUCS $ENV{UBOONECODE_LIB}/libuboonecode_uboone_MuCS.so )
      set( MUCSDT_MODULE $ENV{UBOONECODE_LIB}/libMuCSDT_module.so )
      set( MUCSEXTRAPOLATE_MODULE $ENV{UBOONECODE_LIB}/libMuCSExtrapolate_module.so )
      set( MUCSMCGEN_MODULE $ENV{UBOONECODE_LIB}/libMuCSMCGen_module.so )
      set( MUCSMERGER_MODULE $ENV{UBOONECODE_LIB}/libMuCSMerger_module.so )
      set( MUCSREADER_MODULE $ENV{UBOONECODE_LIB}/libMuCSReader_module.so )
      set( MUCSRECOTOMC_MODULE $ENV{UBOONECODE_LIB}/libMuCSRecoToMC_module.so )
      set( MUCSRECO_MODULE $ENV{UBOONECODE_LIB}/libMuCSReco_module.so )
      set( MUCSTRACKTAGGER_MODULE $ENV{UBOONECODE_LIB}/libMuCSTrackTagger_module.so )
      set( UBOONE_MUCS_DICT $ENV{UBOONECODE_LIB}/libuboone_MuCS_dict.so )
      set( UBOONE_T0RECO_T0RECOANODECATHODEPIERCINGANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_T0Reco_T0RecoAnodeCathodePiercingAna_module.so )
      set( UBOONE_T0RECO_T0RECOANODECATHODEPIERCINGVALIDATIONANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_T0Reco_T0RecoAnodeCathodePiercingValidationAna_module.so )
      set( UBOONE_T0RECO_T0RECOANODECATHODEPIERCING_MODULE $ENV{UBOONECODE_LIB}/libuboone_T0Reco_T0RecoAnodeCathodePiercing_module.so )
      set( WEIGHTCALCULATORS $ENV{UBOONECODE_LIB}/libWeightCalculators.so )
      set( EVENTWEIGHT $ENV{UBOONECODE_LIB}/libEventWeight.so )
      set( UBOONE_EVENTWEIGHT_EVENTWEIGHT_MODULE $ENV{UBOONECODE_LIB}/libuboone_EventWeight_EventWeight_module.so )
      set( UBOONE_EVENTWEIGHT_DICT $ENV{UBOONECODE_LIB}/libuboone_EventWeight_dict.so )
      set( BNBPRIMARYHADRONWEIGHTCALCULATORS $ENV{UBOONECODE_LIB}/libBNBPrimaryHadronWeightCalculators.so )
      set( UBOONE_UBFLASHFINDER $ENV{UBOONECODE_LIB}/libuboone_UBFlashFinder.so )
      set( UBFLASHFINDER_MODULE $ENV{UBOONECODE_LIB}/libUBFlashFinder_module.so )
      set( UBOONE_UBFLASHFINDER_DICT $ENV{UBOONECODE_LIB}/libuboone_UBFlashFinder_dict.so )
      set( UBOONECODE_UBOONE_SELECTIONTOOL_OPT0FINDERBASE $ENV{UBOONECODE_LIB}/libuboonecode_uboone_SelectionTool_OpT0FinderBase.so )
      set( UBOONECODE_UBOONE_SELECTIONTOOL_OPT0FINDERALGORITHMS $ENV{UBOONECODE_LIB}/libuboonecode_uboone_SelectionTool_OpT0FinderAlgorithms.so )
      set( UBOONECODE_UBOONE_BASICTOOL_GEOALGO $ENV{UBOONECODE_LIB}/libuboonecode_uboone_BasicTool_GeoAlgo.so )
      set( MUCSGAINANA_MODULE $ENV{UBOONECODE_LIB}/libMuCSGainAna_module.so )
      set( MUCST0FINDER_MODULE $ENV{UBOONECODE_LIB}/libMuCST0Finder_module.so )
      set( MUCSTRACKFINDER_MODULE $ENV{UBOONECODE_LIB}/libMuCSTrackFinder_module.so )
      set( T0TRACKCALIB_MODULE $ENV{UBOONECODE_LIB}/libT0TrackCalib_module.so )
      set( TPCOBJECTCREATOR_MODULE $ENV{UBOONECODE_LIB}/libTPCObjectCreator_module.so )
      set( UBT0FINDER_MODULE $ENV{UBOONECODE_LIB}/libUBT0Finder_module.so )
      set( COSMICFLASHTAGGERANA_MODULE $ENV{UBOONECODE_LIB}/libCosmicFlashTaggerAna_module.so )
      set( COSMICFLASHTAGGER_MODULE $ENV{UBOONECODE_LIB}/libCosmicFlashTagger_module.so )
      set( UBOONECODE_UBOONE_COSMICTAGGING_COSMICTAGGINGALGORITHMS $ENV{UBOONECODE_LIB}/libuboonecode_uboone_CosmicTagging_CosmicTaggingAlgorithms.so )
      set( UBOONE_QUIETEVENTFILTER_QUIETEVENTFILTER_MODULE $ENV{UBOONECODE_LIB}/libuboone_QuietEventFilter_QuietEventFilter_module.so )
      set( UBOONE_QUIETEVENTFILTER_QUIETEVENTANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_QuietEventFilter_QuietEventAna_module.so )
      set( UBOONE_DLFILTERS_DLSIGNALSAMPLE_MODULE $ENV{UBOONECODE_LIB}/libuboone_DLFilters_DLSignalSample_module.so )
      set( DATAOVERLAYPRODUCTS $ENV{UBOONECODE_LIB}/libDataOverlayProducts.so )
      set( UBOONE_DATAOVERLAY_DATAOVERLAYPRODUCTS_DICT $ENV{UBOONECODE_LIB}/libuboone_DataOverlay_DataOverlayProducts_dict.so )
      set( UB_RAWDIGITADDERANA $ENV{UBOONECODE_LIB}/libub_RawDigitAdderAna.so )
      set( UB_RAWDIGITADDER $ENV{UBOONECODE_LIB}/libub_RawDigitAdder.so )
      set( UB_RAWDIGITMIXER $ENV{UBOONECODE_LIB}/libub_RawDigitMixer.so )
      set( UB_OPDETWAVEFORMMIXER $ENV{UBOONECODE_LIB}/libub_OpDetWaveformMixer.so )
      set( UBOONE_DATAOVERLAY_DATAOVERLAYMIXER_RETRIEVEOVERLAYDATAMICROBOONE_MODULE $ENV{UBOONECODE_LIB}/libuboone_DataOverlay_DataOverlayMixer_RetrieveOverlayDataMicroBooNE_module.so )
      set( UBOONE_DATAOVERLAY_DATAOVERLAYMIXER_OVERLAYRAWDATAMICROBOONE_MODULE $ENV{UBOONECODE_LIB}/libuboone_DataOverlay_DataOverlayMixer_OverlayRawDataMicroBooNE_module.so )
      set( UBOONE_DATAOVERLAY_DATAOVERLAYMIXER_RAWDIGITOVERLAYMICROBOONEANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_DataOverlay_DataOverlayMixer_RawDigitOverlayMicroBooNEAna_module.so )
      set( UBOONE_PATTERNFILTER_PMALGS $ENV{UBOONECODE_LIB}/libuboone_PatternFilter_PMAlgs.so )
      set( UBOONE_PATTERNFILTER_ARTMODULES_ANODECATHODETRACKANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_PatternFilter_ArtModules_AnodeCathodeTrackAna_module.so )
      set( UBOONE_PATTERNFILTER_ARTMODULES_ANODECATHODETRACKFILTER_MODULE $ENV{UBOONECODE_LIB}/libuboone_PatternFilter_ArtModules_AnodeCathodeTrackFilter_module.so )
      set( UBOONE_DQMTOOLS $ENV{UBOONECODE_LIB}/libuboone_DQMTools.so )
      set( UBOONE_DQMTOOLS_DQMCHANNELNOISEMODULE_MODULE $ENV{UBOONECODE_LIB}/libuboone_DQMTools_DQMChannelNoiseModule_module.so )
      set( UBOONE_DQMTOOLS_DQMFLASHMODULE_MODULE $ENV{UBOONECODE_LIB}/libuboone_DQMTools_DQMFlashModule_module.so )
      set( UBOONE_DQMTOOLS_DQMHITMODULE_MODULE $ENV{UBOONECODE_LIB}/libuboone_DQMTools_DQMHitModule_module.so )
      set( UBOONE_DQMTOOLS_DQMTPCBURSTMODULE_MODULE $ENV{UBOONECODE_LIB}/libuboone_DQMTools_DQMTPCBurstModule_module.so )
      set( UBOONE_DQMTOOLS_DQMTRACKMODULE_MODULE $ENV{UBOONECODE_LIB}/libuboone_DQMTools_DQMTrackModule_module.so )
      set( UBOONE_DQMTOOLS_GOODRUNSELECTIONANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_DQMTools_GoodRunSelectionAna_module.so )
      set( UBOONE_DQMTOOLS_HVBURSTFILTER_MODULE $ENV{UBOONECODE_LIB}/libuboone_DQMTools_HVBurstFilter_module.so )
      set( UBOONE_CHARGEDTRACKMULTIPLICITY_MC_CTMMCANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_ChargedTrackMultiplicity_MC_CTMMCAna_module.so )
      set( UBOONE_CHARGEDTRACKMULTIPLICITY_DATAON_CTMDATAONANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_ChargedTrackMultiplicity_DataON_CTMDataONAna_module.so )
      set( UBOONE_CHARGEDTRACKMULTIPLICITY_DATAOFF_CTMDATAOFFANA_MODULE $ENV{UBOONECODE_LIB}/libuboone_ChargedTrackMultiplicity_DataOFF_CTMDataOFFAna_module.so )
      set( UBOONE_LEEPHOTONANALYSIS $ENV{UBOONECODE_LIB}/libuboone_LEEPhotonAnalysis.so )
      set( GENIETEST_MODULE $ENV{UBOONECODE_LIB}/libGENIETest_module.so )
      set( LEEPHOTONANALYSIS_MODULE $ENV{UBOONECODE_LIB}/libLEEPhotonAnalysis_module.so )
      set( NCDELTARADIATIVE_MODULE $ENV{UBOONECODE_LIB}/libNCDeltaRadiative_module.so )
      set( RECOTRUETEST_MODULE $ENV{UBOONECODE_LIB}/libRecoTrueTest_module.so )
      set( SIGNALFILTER_MODULE $ENV{UBOONECODE_LIB}/libSignalFilter_module.so )
      set( FLASH_MODULE $ENV{UBOONECODE_LIB}/libflash_module.so )
      set( ACPTTAGGER_MODULE $ENV{UBOONECODE_LIB}/libACPTTagger_module.so )
      set( CANDIDATECONSISTENCY_MODULE $ENV{UBOONECODE_LIB}/libCandidateConsistency_module.so )
      set( COSMICFLASHMATCH_MODULE $ENV{UBOONECODE_LIB}/libCosmicFlashMatch_module.so )
      set( COSMICTAGGERANA_MODULE $ENV{UBOONECODE_LIB}/libCosmicTaggerAna_module.so )
      set( COSMICTRACKHITTAGGER_MODULE $ENV{UBOONECODE_LIB}/libCosmicTrackHitTagger_module.so )
      set( DEDXANA_MODULE $ENV{UBOONECODE_LIB}/libDeDxAna_module.so )
      set( FLASHMATCHCALIB_MODULE $ENV{UBOONECODE_LIB}/libFlashMatchCalib_module.so )
      set( GEOCOSMICTAGGER_MODULE $ENV{UBOONECODE_LIB}/libGeoCosmicTagger_module.so )
      set( INTIMESTUDY_MODULE $ENV{UBOONECODE_LIB}/libInTimeStudy_module.so )
      set( NEUTRINOFLASHMATCH_MODULE $ENV{UBOONECODE_LIB}/libNeutrinoFlashMatch_module.so )
      set( NEUTRINOMCFLASH_MODULE $ENV{UBOONECODE_LIB}/libNeutrinoMCFlash_module.so )
      set( PHOTONACTIVITY_MODULE $ENV{UBOONECODE_LIB}/libPhotonActivity_module.so )
      set( RECOTRUEMATCHER_MODULE $ENV{UBOONECODE_LIB}/libRecoTrueMatcher_module.so )
      set( SIMPLEANA_MODULE $ENV{UBOONECODE_LIB}/libSimpleAna_module.so )
      set( STOPPINGMUONTAGGER_MODULE $ENV{UBOONECODE_LIB}/libStoppingMuonTagger_module.so )
      set( TPCOBJECTMAKER_MODULE $ENV{UBOONECODE_LIB}/libTPCObjectMaker_module.so )
      set( UBXSEC_MODULE $ENV{UBOONECODE_LIB}/libUBXSec_module.so )
      set( UBOONECODE_UBOONE_UBXSEC_ALGORITHMS $ENV{UBOONECODE_LIB}/libuboonecode_uboone_UBXSec_Algorithms.so )
      set( UBOONECODE_UBOONE_UBXSEC_DATATYPES $ENV{UBOONECODE_LIB}/libuboonecode_uboone_UBXSec_DataTypes.so )
      set( UBOONE_UBXSEC_DATATYPES_DICT $ENV{UBOONECODE_LIB}/libuboone_UBXSec_DataTypes_dict.so )
      set( HITCOSMICTAG_BASE $ENV{UBOONECODE_LIB}/libHitCosmicTag_Base.so )
      set( HITCOSMICTAG_ALGORITHMS $ENV{UBOONECODE_LIB}/libHitCosmicTag_Algorithms.so )
      set( KALMANFILTERTEST_MODULE $ENV{UBOONECODE_LIB}/libKalmanFilterTest_module.so )
      set( PROPTEST_MODULE $ENV{UBOONECODE_LIB}/libPropTest_module.so )
      set( INTERACTTEST_MODULE $ENV{UBOONECODE_LIB}/libInteractTest_module.so )
      set( SPARSERAWDIGITTEST_MODULE $ENV{UBOONECODE_LIB}/libSparseRawDigitTest_module.so )
      include_directories ( $ENV{UBOONECODE_INC} )

check_required_components(uboonecode)

