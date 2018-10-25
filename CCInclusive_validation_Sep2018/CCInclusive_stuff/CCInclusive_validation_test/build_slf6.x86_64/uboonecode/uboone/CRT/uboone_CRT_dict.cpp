// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME uboone_CRT_dict

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
#include "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *crtcLcLCRTData_Dictionary();
   static void crtcLcLCRTData_TClassManip(TClass*);
   static void *new_crtcLcLCRTData(void *p = 0);
   static void *newArray_crtcLcLCRTData(Long_t size, void *p);
   static void delete_crtcLcLCRTData(void *p);
   static void deleteArray_crtcLcLCRTData(void *p);
   static void destruct_crtcLcLCRTData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::crt::CRTData*)
   {
      ::crt::CRTData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::crt::CRTData));
      static ::ROOT::TGenericClassInfo 
         instance("crt::CRTData", "CRTData.hh", 29,
                  typeid(::crt::CRTData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &crtcLcLCRTData_Dictionary, isa_proxy, 0,
                  sizeof(::crt::CRTData) );
      instance.SetNew(&new_crtcLcLCRTData);
      instance.SetNewArray(&newArray_crtcLcLCRTData);
      instance.SetDelete(&delete_crtcLcLCRTData);
      instance.SetDeleteArray(&deleteArray_crtcLcLCRTData);
      instance.SetDestructor(&destruct_crtcLcLCRTData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::crt::CRTData*)
   {
      return GenerateInitInstanceLocal((::crt::CRTData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::crt::CRTData*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *crtcLcLCRTData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::crt::CRTData*)0x0)->GetClass();
      crtcLcLCRTData_TClassManip(theClass);
   return theClass;
   }

   static void crtcLcLCRTData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEcrtcLcLCRTDatagR_Dictionary();
   static void artcLcLWrapperlEcrtcLcLCRTDatagR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEcrtcLcLCRTDatagR(void *p = 0);
   static void *newArray_artcLcLWrapperlEcrtcLcLCRTDatagR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEcrtcLcLCRTDatagR(void *p);
   static void deleteArray_artcLcLWrapperlEcrtcLcLCRTDatagR(void *p);
   static void destruct_artcLcLWrapperlEcrtcLcLCRTDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<crt::CRTData>*)
   {
      ::art::Wrapper<crt::CRTData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<crt::CRTData>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<crt::CRTData>", ::art::Wrapper<crt::CRTData>::Class_Version(), "invalid", 19,
                  typeid(::art::Wrapper<crt::CRTData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEcrtcLcLCRTDatagR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<crt::CRTData>) );
      instance.SetNew(&new_artcLcLWrapperlEcrtcLcLCRTDatagR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEcrtcLcLCRTDatagR);
      instance.SetDelete(&delete_artcLcLWrapperlEcrtcLcLCRTDatagR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEcrtcLcLCRTDatagR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEcrtcLcLCRTDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<crt::CRTData>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<crt::CRTData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<crt::CRTData>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEcrtcLcLCRTDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<crt::CRTData>*)0x0)->GetClass();
      artcLcLWrapperlEcrtcLcLCRTDatagR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEcrtcLcLCRTDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<crt::CRTData> >*)
   {
      ::art::Wrapper<vector<crt::CRTData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<crt::CRTData> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<crt::CRTData> >", ::art::Wrapper<vector<crt::CRTData> >::Class_Version(), "invalid", 18,
                  typeid(::art::Wrapper<vector<crt::CRTData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<crt::CRTData> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<crt::CRTData> >","art::Wrapper<std::vector<crt::CRTData> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<crt::CRTData> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<crt::CRTData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<crt::CRTData> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<crt::CRTData> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_crtcLcLCRTData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::crt::CRTData : new ::crt::CRTData;
   }
   static void *newArray_crtcLcLCRTData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::crt::CRTData[nElements] : new ::crt::CRTData[nElements];
   }
   // Wrapper around operator delete
   static void delete_crtcLcLCRTData(void *p) {
      delete ((::crt::CRTData*)p);
   }
   static void deleteArray_crtcLcLCRTData(void *p) {
      delete [] ((::crt::CRTData*)p);
   }
   static void destruct_crtcLcLCRTData(void *p) {
      typedef ::crt::CRTData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::crt::CRTData

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEcrtcLcLCRTDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<crt::CRTData> : new ::art::Wrapper<crt::CRTData>;
   }
   static void *newArray_artcLcLWrapperlEcrtcLcLCRTDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<crt::CRTData>[nElements] : new ::art::Wrapper<crt::CRTData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEcrtcLcLCRTDatagR(void *p) {
      delete ((::art::Wrapper<crt::CRTData>*)p);
   }
   static void deleteArray_artcLcLWrapperlEcrtcLcLCRTDatagR(void *p) {
      delete [] ((::art::Wrapper<crt::CRTData>*)p);
   }
   static void destruct_artcLcLWrapperlEcrtcLcLCRTDatagR(void *p) {
      typedef ::art::Wrapper<crt::CRTData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<crt::CRTData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<crt::CRTData> > : new ::art::Wrapper<vector<crt::CRTData> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<crt::CRTData> >[nElements] : new ::art::Wrapper<vector<crt::CRTData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(void *p) {
      delete ((::art::Wrapper<vector<crt::CRTData> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<crt::CRTData> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTDatagRsPgR(void *p) {
      typedef ::art::Wrapper<vector<crt::CRTData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<crt::CRTData> >

namespace ROOT {
   static TClass *vectorlEcrtcLcLCRTDatagR_Dictionary();
   static void vectorlEcrtcLcLCRTDatagR_TClassManip(TClass*);
   static void *new_vectorlEcrtcLcLCRTDatagR(void *p = 0);
   static void *newArray_vectorlEcrtcLcLCRTDatagR(Long_t size, void *p);
   static void delete_vectorlEcrtcLcLCRTDatagR(void *p);
   static void deleteArray_vectorlEcrtcLcLCRTDatagR(void *p);
   static void destruct_vectorlEcrtcLcLCRTDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<crt::CRTData>*)
   {
      vector<crt::CRTData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<crt::CRTData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<crt::CRTData>", -2, "invalid", 17,
                  typeid(vector<crt::CRTData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEcrtcLcLCRTDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<crt::CRTData>) );
      instance.SetNew(&new_vectorlEcrtcLcLCRTDatagR);
      instance.SetNewArray(&newArray_vectorlEcrtcLcLCRTDatagR);
      instance.SetDelete(&delete_vectorlEcrtcLcLCRTDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEcrtcLcLCRTDatagR);
      instance.SetDestructor(&destruct_vectorlEcrtcLcLCRTDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<crt::CRTData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<crt::CRTData>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEcrtcLcLCRTDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<crt::CRTData>*)0x0)->GetClass();
      vectorlEcrtcLcLCRTDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEcrtcLcLCRTDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEcrtcLcLCRTDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<crt::CRTData> : new vector<crt::CRTData>;
   }
   static void *newArray_vectorlEcrtcLcLCRTDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<crt::CRTData>[nElements] : new vector<crt::CRTData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEcrtcLcLCRTDatagR(void *p) {
      delete ((vector<crt::CRTData>*)p);
   }
   static void deleteArray_vectorlEcrtcLcLCRTDatagR(void *p) {
      delete [] ((vector<crt::CRTData>*)p);
   }
   static void destruct_vectorlEcrtcLcLCRTDatagR(void *p) {
      typedef vector<crt::CRTData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<crt::CRTData>

namespace {
  void TriggerDictionaryInitialization_libuboone_CRT_dict_Impl() {
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
"/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT",
"/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_10_00_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/ifdhc/v2_0_1/Linux64bit+2.6-2.12-e10-p2711-prof/inc",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/CRT/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libuboone_CRT_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace crt{class __attribute__((annotate("$clingAutoload$uboone/CRT/CRTData.hh")))  CRTData;}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libuboone_CRT_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef NDEBUG
  #define NDEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/**
  \defgroup crt All things Cosmic Ray Tagger related
**/

#include "canvas/Persistency/Common/Wrapper.h"
#include "uboone/CRT/CRTData.hh"
#include <vector>

template class std::vector<crt::CRTData>;
template class art::Wrapper< std::vector<crt::CRTData> >;
template class art::Wrapper< crt::CRTData >;

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"art::Wrapper<crt::CRTData>", payloadCode, "@",
"art::Wrapper<std::vector<crt::CRTData> >", payloadCode, "@",
"art::Wrapper<vector<crt::CRTData> >", payloadCode, "@",
"crt::CRTData", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libuboone_CRT_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libuboone_CRT_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libuboone_CRT_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libuboone_CRT_dict() {
  TriggerDictionaryInitialization_libuboone_CRT_dict_Impl();
}
