// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME uboone_DataOverlay_DataOverlayProducts_dict

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
#include "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/DataOverlay/DataOverlayProducts/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *mixcLcLEventMixingSummary_Dictionary();
   static void mixcLcLEventMixingSummary_TClassManip(TClass*);
   static void *new_mixcLcLEventMixingSummary(void *p = 0);
   static void *newArray_mixcLcLEventMixingSummary(Long_t size, void *p);
   static void delete_mixcLcLEventMixingSummary(void *p);
   static void deleteArray_mixcLcLEventMixingSummary(void *p);
   static void destruct_mixcLcLEventMixingSummary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mix::EventMixingSummary*)
   {
      ::mix::EventMixingSummary *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::mix::EventMixingSummary));
      static ::ROOT::TGenericClassInfo 
         instance("mix::EventMixingSummary", 11, "EventMixingSummary.h", 19,
                  typeid(::mix::EventMixingSummary), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mixcLcLEventMixingSummary_Dictionary, isa_proxy, 8,
                  sizeof(::mix::EventMixingSummary) );
      instance.SetNew(&new_mixcLcLEventMixingSummary);
      instance.SetNewArray(&newArray_mixcLcLEventMixingSummary);
      instance.SetDelete(&delete_mixcLcLEventMixingSummary);
      instance.SetDeleteArray(&deleteArray_mixcLcLEventMixingSummary);
      instance.SetDestructor(&destruct_mixcLcLEventMixingSummary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mix::EventMixingSummary*)
   {
      return GenerateInitInstanceLocal((::mix::EventMixingSummary*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mix::EventMixingSummary*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mixcLcLEventMixingSummary_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mix::EventMixingSummary*)0x0)->GetClass();
      mixcLcLEventMixingSummary_TClassManip(theClass);
   return theClass;
   }

   static void mixcLcLEventMixingSummary_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<mix::EventMixingSummary> >*)
   {
      ::art::Wrapper<vector<mix::EventMixingSummary> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<mix::EventMixingSummary> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<mix::EventMixingSummary> >", ::art::Wrapper<vector<mix::EventMixingSummary> >::Class_Version(), "invalid", 29,
                  typeid(::art::Wrapper<vector<mix::EventMixingSummary> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<mix::EventMixingSummary> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<mix::EventMixingSummary> >","art::Wrapper<std::vector<mix::EventMixingSummary> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<mix::EventMixingSummary> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<mix::EventMixingSummary> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<mix::EventMixingSummary> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<mix::EventMixingSummary> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_mixcLcLEventMixingSummary(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mix::EventMixingSummary : new ::mix::EventMixingSummary;
   }
   static void *newArray_mixcLcLEventMixingSummary(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mix::EventMixingSummary[nElements] : new ::mix::EventMixingSummary[nElements];
   }
   // Wrapper around operator delete
   static void delete_mixcLcLEventMixingSummary(void *p) {
      delete ((::mix::EventMixingSummary*)p);
   }
   static void deleteArray_mixcLcLEventMixingSummary(void *p) {
      delete [] ((::mix::EventMixingSummary*)p);
   }
   static void destruct_mixcLcLEventMixingSummary(void *p) {
      typedef ::mix::EventMixingSummary current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mix::EventMixingSummary

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<mix::EventMixingSummary> > : new ::art::Wrapper<vector<mix::EventMixingSummary> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<mix::EventMixingSummary> >[nElements] : new ::art::Wrapper<vector<mix::EventMixingSummary> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(void *p) {
      delete ((::art::Wrapper<vector<mix::EventMixingSummary> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<mix::EventMixingSummary> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEmixcLcLEventMixingSummarygRsPgR(void *p) {
      typedef ::art::Wrapper<vector<mix::EventMixingSummary> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<mix::EventMixingSummary> >

namespace ROOT {
   static TClass *vectorlEmixcLcLEventMixingSummarygR_Dictionary();
   static void vectorlEmixcLcLEventMixingSummarygR_TClassManip(TClass*);
   static void *new_vectorlEmixcLcLEventMixingSummarygR(void *p = 0);
   static void *newArray_vectorlEmixcLcLEventMixingSummarygR(Long_t size, void *p);
   static void delete_vectorlEmixcLcLEventMixingSummarygR(void *p);
   static void deleteArray_vectorlEmixcLcLEventMixingSummarygR(void *p);
   static void destruct_vectorlEmixcLcLEventMixingSummarygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<mix::EventMixingSummary>*)
   {
      vector<mix::EventMixingSummary> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<mix::EventMixingSummary>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<mix::EventMixingSummary>", -2, "invalid", 28,
                  typeid(vector<mix::EventMixingSummary>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEmixcLcLEventMixingSummarygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<mix::EventMixingSummary>) );
      instance.SetNew(&new_vectorlEmixcLcLEventMixingSummarygR);
      instance.SetNewArray(&newArray_vectorlEmixcLcLEventMixingSummarygR);
      instance.SetDelete(&delete_vectorlEmixcLcLEventMixingSummarygR);
      instance.SetDeleteArray(&deleteArray_vectorlEmixcLcLEventMixingSummarygR);
      instance.SetDestructor(&destruct_vectorlEmixcLcLEventMixingSummarygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<mix::EventMixingSummary> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<mix::EventMixingSummary>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmixcLcLEventMixingSummarygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<mix::EventMixingSummary>*)0x0)->GetClass();
      vectorlEmixcLcLEventMixingSummarygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmixcLcLEventMixingSummarygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmixcLcLEventMixingSummarygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<mix::EventMixingSummary> : new vector<mix::EventMixingSummary>;
   }
   static void *newArray_vectorlEmixcLcLEventMixingSummarygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<mix::EventMixingSummary>[nElements] : new vector<mix::EventMixingSummary>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmixcLcLEventMixingSummarygR(void *p) {
      delete ((vector<mix::EventMixingSummary>*)p);
   }
   static void deleteArray_vectorlEmixcLcLEventMixingSummarygR(void *p) {
      delete [] ((vector<mix::EventMixingSummary>*)p);
   }
   static void destruct_vectorlEmixcLcLEventMixingSummarygR(void *p) {
      typedef vector<mix::EventMixingSummary> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<mix::EventMixingSummary>

namespace {
  void TriggerDictionaryInitialization_libuboone_DataOverlay_DataOverlayProducts_dict_Impl() {
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
"/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/DataOverlay/.",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/DataOverlay/DataOverlayProducts",
"/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_10_00_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/DataOverlay/DataOverlayProducts/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libuboone_DataOverlay_DataOverlayProducts_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace mix{class __attribute__((annotate("$clingAutoload$EventMixingSummary.h")))  EventMixingSummary;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libuboone_DataOverlay_DataOverlayProducts_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef NDEBUG
  #define NDEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//
// Build a dictionary.
//
// $Id: classes.h,v 1.8 2010/04/12 18:12:28  Exp $
// $Author:  $
// $Date: 2010/04/12 18:12:28 $
// 
// Original author Rob Kutschke, modified by wes
//

#include "canvas/Persistency/Common/Wrapper.h"
#include "EventMixingSummary.h"
#include <vector>

//
// Only include objects that we would like to be able to put into the event.
// Do not include the objects they contain internally.
//

template class std::vector<mix::EventMixingSummary>;
template class art::Wrapper< std::vector<mix::EventMixingSummary> >;

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"art::Wrapper<std::vector<mix::EventMixingSummary> >", payloadCode, "@",
"art::Wrapper<vector<mix::EventMixingSummary> >", payloadCode, "@",
"mix::EventMixingSummary", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libuboone_DataOverlay_DataOverlayProducts_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libuboone_DataOverlay_DataOverlayProducts_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libuboone_DataOverlay_DataOverlayProducts_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libuboone_DataOverlay_DataOverlayProducts_dict() {
  TriggerDictionaryInitialization_libuboone_DataOverlay_DataOverlayProducts_dict_Impl();
}
