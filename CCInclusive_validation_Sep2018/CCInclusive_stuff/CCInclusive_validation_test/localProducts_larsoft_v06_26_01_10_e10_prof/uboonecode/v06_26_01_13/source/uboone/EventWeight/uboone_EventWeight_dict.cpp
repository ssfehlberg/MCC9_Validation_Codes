// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME uboone_EventWeight_dict

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
#include "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/EventWeight/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *evwghcLcLMCEventWeight_Dictionary();
   static void evwghcLcLMCEventWeight_TClassManip(TClass*);
   static void *new_evwghcLcLMCEventWeight(void *p = 0);
   static void *newArray_evwghcLcLMCEventWeight(Long_t size, void *p);
   static void delete_evwghcLcLMCEventWeight(void *p);
   static void deleteArray_evwghcLcLMCEventWeight(void *p);
   static void destruct_evwghcLcLMCEventWeight(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::evwgh::MCEventWeight*)
   {
      ::evwgh::MCEventWeight *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::evwgh::MCEventWeight));
      static ::ROOT::TGenericClassInfo 
         instance("evwgh::MCEventWeight", "uboone/EventWeight/MCEventWeight.h", 8,
                  typeid(::evwgh::MCEventWeight), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &evwghcLcLMCEventWeight_Dictionary, isa_proxy, 0,
                  sizeof(::evwgh::MCEventWeight) );
      instance.SetNew(&new_evwghcLcLMCEventWeight);
      instance.SetNewArray(&newArray_evwghcLcLMCEventWeight);
      instance.SetDelete(&delete_evwghcLcLMCEventWeight);
      instance.SetDeleteArray(&deleteArray_evwghcLcLMCEventWeight);
      instance.SetDestructor(&destruct_evwghcLcLMCEventWeight);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::evwgh::MCEventWeight*)
   {
      return GenerateInitInstanceLocal((::evwgh::MCEventWeight*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::evwgh::MCEventWeight*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *evwghcLcLMCEventWeight_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::evwgh::MCEventWeight*)0x0)->GetClass();
      evwghcLcLMCEventWeight_TClassManip(theClass);
   return theClass;
   }

   static void evwghcLcLMCEventWeight_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("classVersion","10");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEevwghcLcLMCEventWeightgR_Dictionary();
   static void artcLcLWrapperlEevwghcLcLMCEventWeightgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEevwghcLcLMCEventWeightgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEevwghcLcLMCEventWeightgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEevwghcLcLMCEventWeightgR(void *p);
   static void deleteArray_artcLcLWrapperlEevwghcLcLMCEventWeightgR(void *p);
   static void destruct_artcLcLWrapperlEevwghcLcLMCEventWeightgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<evwgh::MCEventWeight>*)
   {
      ::art::Wrapper<evwgh::MCEventWeight> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<evwgh::MCEventWeight>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<evwgh::MCEventWeight>", ::art::Wrapper<evwgh::MCEventWeight>::Class_Version(), "invalid", 15,
                  typeid(::art::Wrapper<evwgh::MCEventWeight>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEevwghcLcLMCEventWeightgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<evwgh::MCEventWeight>) );
      instance.SetNew(&new_artcLcLWrapperlEevwghcLcLMCEventWeightgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEevwghcLcLMCEventWeightgR);
      instance.SetDelete(&delete_artcLcLWrapperlEevwghcLcLMCEventWeightgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEevwghcLcLMCEventWeightgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEevwghcLcLMCEventWeightgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<evwgh::MCEventWeight>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<evwgh::MCEventWeight>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<evwgh::MCEventWeight>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEevwghcLcLMCEventWeightgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<evwgh::MCEventWeight>*)0x0)->GetClass();
      artcLcLWrapperlEevwghcLcLMCEventWeightgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEevwghcLcLMCEventWeightgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<evwgh::MCEventWeight> >*)
   {
      ::art::Wrapper<vector<evwgh::MCEventWeight> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<evwgh::MCEventWeight> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<evwgh::MCEventWeight> >", ::art::Wrapper<vector<evwgh::MCEventWeight> >::Class_Version(), "invalid", 16,
                  typeid(::art::Wrapper<vector<evwgh::MCEventWeight> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<evwgh::MCEventWeight> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<evwgh::MCEventWeight> >","art::Wrapper<std::vector<evwgh::MCEventWeight> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<evwgh::MCEventWeight> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<evwgh::MCEventWeight> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<evwgh::MCEventWeight> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<evwgh::MCEventWeight> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_evwghcLcLMCEventWeight(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::evwgh::MCEventWeight : new ::evwgh::MCEventWeight;
   }
   static void *newArray_evwghcLcLMCEventWeight(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::evwgh::MCEventWeight[nElements] : new ::evwgh::MCEventWeight[nElements];
   }
   // Wrapper around operator delete
   static void delete_evwghcLcLMCEventWeight(void *p) {
      delete ((::evwgh::MCEventWeight*)p);
   }
   static void deleteArray_evwghcLcLMCEventWeight(void *p) {
      delete [] ((::evwgh::MCEventWeight*)p);
   }
   static void destruct_evwghcLcLMCEventWeight(void *p) {
      typedef ::evwgh::MCEventWeight current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::evwgh::MCEventWeight

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEevwghcLcLMCEventWeightgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<evwgh::MCEventWeight> : new ::art::Wrapper<evwgh::MCEventWeight>;
   }
   static void *newArray_artcLcLWrapperlEevwghcLcLMCEventWeightgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<evwgh::MCEventWeight>[nElements] : new ::art::Wrapper<evwgh::MCEventWeight>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEevwghcLcLMCEventWeightgR(void *p) {
      delete ((::art::Wrapper<evwgh::MCEventWeight>*)p);
   }
   static void deleteArray_artcLcLWrapperlEevwghcLcLMCEventWeightgR(void *p) {
      delete [] ((::art::Wrapper<evwgh::MCEventWeight>*)p);
   }
   static void destruct_artcLcLWrapperlEevwghcLcLMCEventWeightgR(void *p) {
      typedef ::art::Wrapper<evwgh::MCEventWeight> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<evwgh::MCEventWeight>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<evwgh::MCEventWeight> > : new ::art::Wrapper<vector<evwgh::MCEventWeight> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<evwgh::MCEventWeight> >[nElements] : new ::art::Wrapper<vector<evwgh::MCEventWeight> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<evwgh::MCEventWeight> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<evwgh::MCEventWeight> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEevwghcLcLMCEventWeightgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<evwgh::MCEventWeight> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<evwgh::MCEventWeight> >

namespace ROOT {
   static TClass *vectorlEevwghcLcLMCEventWeightgR_Dictionary();
   static void vectorlEevwghcLcLMCEventWeightgR_TClassManip(TClass*);
   static void *new_vectorlEevwghcLcLMCEventWeightgR(void *p = 0);
   static void *newArray_vectorlEevwghcLcLMCEventWeightgR(Long_t size, void *p);
   static void delete_vectorlEevwghcLcLMCEventWeightgR(void *p);
   static void deleteArray_vectorlEevwghcLcLMCEventWeightgR(void *p);
   static void destruct_vectorlEevwghcLcLMCEventWeightgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<evwgh::MCEventWeight>*)
   {
      vector<evwgh::MCEventWeight> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<evwgh::MCEventWeight>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<evwgh::MCEventWeight>", -2, "vector", 214,
                  typeid(vector<evwgh::MCEventWeight>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEevwghcLcLMCEventWeightgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<evwgh::MCEventWeight>) );
      instance.SetNew(&new_vectorlEevwghcLcLMCEventWeightgR);
      instance.SetNewArray(&newArray_vectorlEevwghcLcLMCEventWeightgR);
      instance.SetDelete(&delete_vectorlEevwghcLcLMCEventWeightgR);
      instance.SetDeleteArray(&deleteArray_vectorlEevwghcLcLMCEventWeightgR);
      instance.SetDestructor(&destruct_vectorlEevwghcLcLMCEventWeightgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<evwgh::MCEventWeight> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<evwgh::MCEventWeight>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEevwghcLcLMCEventWeightgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<evwgh::MCEventWeight>*)0x0)->GetClass();
      vectorlEevwghcLcLMCEventWeightgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEevwghcLcLMCEventWeightgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEevwghcLcLMCEventWeightgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<evwgh::MCEventWeight> : new vector<evwgh::MCEventWeight>;
   }
   static void *newArray_vectorlEevwghcLcLMCEventWeightgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<evwgh::MCEventWeight>[nElements] : new vector<evwgh::MCEventWeight>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEevwghcLcLMCEventWeightgR(void *p) {
      delete ((vector<evwgh::MCEventWeight>*)p);
   }
   static void deleteArray_vectorlEevwghcLcLMCEventWeightgR(void *p) {
      delete [] ((vector<evwgh::MCEventWeight>*)p);
   }
   static void destruct_vectorlEevwghcLcLMCEventWeightgR(void *p) {
      typedef vector<evwgh::MCEventWeight> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<evwgh::MCEventWeight>

namespace {
  void TriggerDictionaryInitialization_libuboone_EventWeight_dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode",
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
"/cvmfs/larsoft.opensciencegrid.org/products/larcoreobj/v1_06_02_02/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larcoreobj/v1_06_02_02/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/art/v2_05_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_02/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larcore/v06_05_03_02/include",
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
"/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v1_11_00_05/include",
"/cvmfs/larsoft.opensciencegrid.org/products/lardataobj/v1_11_00_05/include",
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
"/cvmfs/larsoft.opensciencegrid.org/products/lardata/v06_14_04_05/include",
"/cvmfs/larsoft.opensciencegrid.org/products/lardata/v06_14_04_05/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larevt/v06_07_09_06/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larevt/v06_07_09_06/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/marley/v0_9_5a/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larsim/v06_13_01_06/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larsim/v06_13_01_06/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/marley/v0_9_5a/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larreco/v06_20_00_10/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larreco/v06_20_00_10/include",
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
"/cvmfs/larsoft.opensciencegrid.org/products/larpandora/v06_08_00_10/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larpandora/v06_08_00_10/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cppunit/v1_12_1d/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/clhep/v2_3_3_2/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/sqlite/v3_12_02_00/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/libwda/v2_22_2/Linux64bit+2.6-2.12/include",
"/cvmfs/larsoft.opensciencegrid.org/products/postgresql/v9_3_12/Linux64bit+2.6-2.12-p2711/include",
"/cvmfs/larsoft.opensciencegrid.org/products/xerces_c/v3_1_3/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/range/v3_0_0/include",
"/cvmfs/larsoft.opensciencegrid.org/products/marley/v0_9_5a/Linux64bit+2.6-2.12-e10-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larana/v06_03_18_10/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larana/v06_03_18_10/include",
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
"/cvmfs/larsoft.opensciencegrid.org/products/genie/v2_12_2/Linux64bit+2.6-2.12-e10-r6-prof/include/GENIE",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/EventWeight/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libuboone_EventWeight_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace evwgh{struct __attribute__((annotate(R"ATTRDUMP(classVersion@@@10)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$uboone/EventWeight/MCEventWeight.h")))  MCEventWeight;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libuboone_EventWeight_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef NDEBUG
  #define NDEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include <map>
#include <string>
#include "canvas/Persistency/Common/Wrapper.h"

#include "uboone/EventWeight/MCEventWeight.h"

template class art::Wrapper<evwgh::MCEventWeight>;
template class art::Wrapper<std::vector<evwgh::MCEventWeight> >;
template class std::map<std::string, double>;
template class std::map<std::string, std::vector<double> >;

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"art::Wrapper<evwgh::MCEventWeight>", payloadCode, "@",
"art::Wrapper<std::vector<evwgh::MCEventWeight> >", payloadCode, "@",
"art::Wrapper<vector<evwgh::MCEventWeight> >", payloadCode, "@",
"evwgh::MCEventWeight", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libuboone_EventWeight_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libuboone_EventWeight_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libuboone_EventWeight_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libuboone_EventWeight_dict() {
  TriggerDictionaryInitialization_libuboone_EventWeight_dict_Impl();
}
