// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME uboone_UBFlashFinder_dict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBFlashFinder/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR_Dictionary();
   static void pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR_TClassManip(TClass*);
   static void *new_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(void *p = 0);
   static void *newArray_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(Long_t size, void *p);
   static void delete_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(void *p);
   static void deleteArray_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(void *p);
   static void destruct_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >*)
   {
      pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >", "invalid", 17,
                  typeid(pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >) );
      instance.SetNew(&new_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR);
      instance.SetNewArray(&newArray_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR);
      instance.SetDelete(&delete_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR);
      instance.SetDestructor(&destruct_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >*)0x0)->GetClass();
      pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR_Dictionary();
   static void pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR_TClassManip(TClass*);
   static void *new_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(void *p = 0);
   static void *newArray_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(Long_t size, void *p);
   static void delete_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(void *p);
   static void deleteArray_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(void *p);
   static void destruct_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >*)
   {
      pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >", "invalid", 18,
                  typeid(pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >) );
      instance.SetNew(&new_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR);
      instance.SetNewArray(&newArray_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR);
      instance.SetDelete(&delete_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR);
      instance.SetDestructor(&destruct_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >*)0x0)->GetClass();
      pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> > : new pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >;
   }
   static void *newArray_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >[nElements] : new pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(void *p) {
      delete ((pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >*)p);
   }
   static void deleteArray_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(void *p) {
      delete [] ((pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >*)p);
   }
   static void destruct_pairlEartcLcLPtrlErecobcLcLOpHitgRcOartcLcLPtrlErecobcLcLOpFlashgRsPgR(void *p) {
      typedef pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<art::Ptr<recob::OpHit>,art::Ptr<recob::OpFlash> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> > : new pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >;
   }
   static void *newArray_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >[nElements] : new pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(void *p) {
      delete ((pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >*)p);
   }
   static void deleteArray_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(void *p) {
      delete [] ((pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >*)p);
   }
   static void destruct_pairlEartcLcLPtrlErecobcLcLOpFlashgRcOartcLcLPtrlErecobcLcLOpHitgRsPgR(void *p) {
      typedef pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<art::Ptr<recob::OpFlash>,art::Ptr<recob::OpHit> >

namespace {
  void TriggerDictionaryInitialization_libuboone_UBFlashFinder_dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/boost/v1_61_0/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cetlib/v1_21_00/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_02_00/include",
"/cvmfs/larsoft.opensciencegrid.org/products/fhiclcpp/v4_02_00/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v1_18_00/include",
"/cvmfs/larsoft.opensciencegrid.org/products/messagefacility/v1_18_00/include",
"/cvmfs/larsoft.opensciencegrid.org/products/tbb/v4_4_3a/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/canvas/v1_05_02/include",
"/cvmfs/larsoft.opensciencegrid.org/products/canvas/v1_05_02/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larcoreobj/v1_06_02_03/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larcoreobj/v1_06_02_03/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_03/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_03/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/nusimdata/v1_06_02/include",
"/cvmfs/larsoft.opensciencegrid.org/products/nusimdata/v1_06_02/include",
"/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v1_11_00_06/include",
"/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v1_11_00_06/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_10_00_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_10_00_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/lardata/v06_14_04_06/include",
"/cvmfs/larsoft.opensciencegrid.org/products/lardata/v06_14_04_06/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larevt/v06_07_09_08/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larevt/v06_07_09_08/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/marley/v0_9_5a/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larsim/v06_13_01_10/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larsim/v06_13_01_10/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/marley/v0_9_5a/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larreco/v06_20_00_14/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larreco/v06_20_00_14/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/marley/v0_9_5a/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/pandora/v03_00_00/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/pandora/v03_00_00/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/eigen/v3_2_9a/include/eigen3",
"/cvmfs/larsoft.opensciencegrid.org/products/larpandoracontent/v03_07_02_05/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larpandoracontent/v03_07_02_05/include",
"/cvmfs/larsoft.opensciencegrid.org/products/eigen/v3_2_9a/include/eigen3",
"/cvmfs/larsoft.opensciencegrid.org/products/larpandora/v06_08_00_14/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larpandora/v06_08_00_14/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/marley/v0_9_5a/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larana/v06_03_18_14/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larana/v06_03_18_14/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/uboone.opensciencegrid.org/products/uboonedaq_datatypes/v6_19_01_e10/include",
"/cvmfs/uboone.opensciencegrid.org/products/uboonedaq_datatypes/v6_19_01_e10/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/ifdh_art/v2_00_03/slf6.x86_64.e10.nu.s59.prof/inc",
"/cvmfs/larsoft.opensciencegrid.org/products/ifdh_art/v2_00_03/slf6.x86_64.e10.nu.s59.prof/inc",
"/cvmfs/larsoft.opensciencegrid.org/products/gsl/v2_1/Linux64bit+2.6-2.12-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/gallery/v1_03_13/include",
"/cvmfs/larsoft.opensciencegrid.org/products/gallery/v1_03_13/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/artdaq_core/v1_05_09_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/artdaq_core/v1_05_09_01/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBFlashFinder",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/UBFlashFinder/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libuboone_UBFlashFinder_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace recob{class __attribute__((annotate("$clingAutoload$lardataobj/RecoBase/OpHit.h")))  OpHit;}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/PtrVector.h")))  Ptr;
}
namespace recob{class __attribute__((annotate("$clingAutoload$lardataobj/RecoBase/OpFlash.h")))  OpFlash;}
namespace std{template <class T1, class T2> struct __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  pair;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libuboone_UBFlashFinder_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef NDEBUG
  #define NDEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H

#include "canvas/Persistency/Common/PtrVector.h" 
#include "canvas/Persistency/Common/Wrapper.h"
#include "canvas/Persistency/Common/Assns.h"

#include "lardataobj/RecoBase/OpFlash.h"
#include "lardataobj/RecoBase/OpHit.h"

template class std::pair< art::Ptr<recob::OpHit>,        art::Ptr<recob::OpFlash>    >;
template class std::pair< art::Ptr<recob::OpFlash>,      art::Ptr<recob::OpHit>      >;

//template class art::Assns<recob::OpHit,      recob::OpFlash,    void>;
//template class art::Assns<recob::OpFlash,    recob::OpHit,      void>;

//template class art::Wrapper< art::Assns<recob::OpHit,      recob::OpFlash,    void> >;
//template class art::Wrapper< art::Assns<recob::OpFlash,    recob::OpHit,      void> >;

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libuboone_UBFlashFinder_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libuboone_UBFlashFinder_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libuboone_UBFlashFinder_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libuboone_UBFlashFinder_dict() {
  TriggerDictionaryInitialization_libuboone_UBFlashFinder_dict_Impl();
}
