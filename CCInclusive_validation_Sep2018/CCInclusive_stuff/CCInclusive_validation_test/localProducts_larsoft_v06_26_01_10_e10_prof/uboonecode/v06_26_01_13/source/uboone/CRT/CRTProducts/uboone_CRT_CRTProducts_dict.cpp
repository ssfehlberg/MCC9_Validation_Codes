// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME uboone_CRT_CRTProducts_dict

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
#include "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTProducts/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *crtcLcLCRTSimData_Dictionary();
   static void crtcLcLCRTSimData_TClassManip(TClass*);
   static void *new_crtcLcLCRTSimData(void *p = 0);
   static void *newArray_crtcLcLCRTSimData(Long_t size, void *p);
   static void delete_crtcLcLCRTSimData(void *p);
   static void deleteArray_crtcLcLCRTSimData(void *p);
   static void destruct_crtcLcLCRTSimData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::crt::CRTSimData*)
   {
      ::crt::CRTSimData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::crt::CRTSimData));
      static ::ROOT::TGenericClassInfo 
         instance("crt::CRTSimData", 10, "CRTSimData.hh", 29,
                  typeid(::crt::CRTSimData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &crtcLcLCRTSimData_Dictionary, isa_proxy, 8,
                  sizeof(::crt::CRTSimData) );
      instance.SetNew(&new_crtcLcLCRTSimData);
      instance.SetNewArray(&newArray_crtcLcLCRTSimData);
      instance.SetDelete(&delete_crtcLcLCRTSimData);
      instance.SetDeleteArray(&deleteArray_crtcLcLCRTSimData);
      instance.SetDestructor(&destruct_crtcLcLCRTSimData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::crt::CRTSimData*)
   {
      return GenerateInitInstanceLocal((::crt::CRTSimData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::crt::CRTSimData*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *crtcLcLCRTSimData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::crt::CRTSimData*)0x0)->GetClass();
      crtcLcLCRTSimData_TClassManip(theClass);
   return theClass;
   }

   static void crtcLcLCRTSimData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<crt::CRTSimData> >*)
   {
      ::art::Wrapper<vector<crt::CRTSimData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<crt::CRTSimData> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<crt::CRTSimData> >", ::art::Wrapper<vector<crt::CRTSimData> >::Class_Version(), "invalid", 35,
                  typeid(::art::Wrapper<vector<crt::CRTSimData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<crt::CRTSimData> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<crt::CRTSimData> >","art::Wrapper<std::vector<crt::CRTSimData> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<crt::CRTSimData> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<crt::CRTSimData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<crt::CRTSimData> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<crt::CRTSimData> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *crtcLcLCRTHit_Dictionary();
   static void crtcLcLCRTHit_TClassManip(TClass*);
   static void *new_crtcLcLCRTHit(void *p = 0);
   static void *newArray_crtcLcLCRTHit(Long_t size, void *p);
   static void delete_crtcLcLCRTHit(void *p);
   static void deleteArray_crtcLcLCRTHit(void *p);
   static void destruct_crtcLcLCRTHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::crt::CRTHit*)
   {
      ::crt::CRTHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::crt::CRTHit));
      static ::ROOT::TGenericClassInfo 
         instance("crt::CRTHit", 17, "CRTHit.hh", 22,
                  typeid(::crt::CRTHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &crtcLcLCRTHit_Dictionary, isa_proxy, 8,
                  sizeof(::crt::CRTHit) );
      instance.SetNew(&new_crtcLcLCRTHit);
      instance.SetNewArray(&newArray_crtcLcLCRTHit);
      instance.SetDelete(&delete_crtcLcLCRTHit);
      instance.SetDeleteArray(&deleteArray_crtcLcLCRTHit);
      instance.SetDestructor(&destruct_crtcLcLCRTHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::crt::CRTHit*)
   {
      return GenerateInitInstanceLocal((::crt::CRTHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::crt::CRTHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *crtcLcLCRTHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::crt::CRTHit*)0x0)->GetClass();
      crtcLcLCRTHit_TClassManip(theClass);
   return theClass;
   }

   static void crtcLcLCRTHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<crt::CRTHit> >*)
   {
      ::art::Wrapper<vector<crt::CRTHit> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<crt::CRTHit> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<crt::CRTHit> >", ::art::Wrapper<vector<crt::CRTHit> >::Class_Version(), "invalid", 41,
                  typeid(::art::Wrapper<vector<crt::CRTHit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<crt::CRTHit> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<crt::CRTHit> >","art::Wrapper<std::vector<crt::CRTHit> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<crt::CRTHit> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<crt::CRTHit> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<crt::CRTHit> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<crt::CRTHit> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *crtcLcLCRTTrack_Dictionary();
   static void crtcLcLCRTTrack_TClassManip(TClass*);
   static void *new_crtcLcLCRTTrack(void *p = 0);
   static void *newArray_crtcLcLCRTTrack(Long_t size, void *p);
   static void delete_crtcLcLCRTTrack(void *p);
   static void deleteArray_crtcLcLCRTTrack(void *p);
   static void destruct_crtcLcLCRTTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::crt::CRTTrack*)
   {
      ::crt::CRTTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::crt::CRTTrack));
      static ::ROOT::TGenericClassInfo 
         instance("crt::CRTTrack", 14, "CRTTrack.hh", 22,
                  typeid(::crt::CRTTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &crtcLcLCRTTrack_Dictionary, isa_proxy, 8,
                  sizeof(::crt::CRTTrack) );
      instance.SetNew(&new_crtcLcLCRTTrack);
      instance.SetNewArray(&newArray_crtcLcLCRTTrack);
      instance.SetDelete(&delete_crtcLcLCRTTrack);
      instance.SetDeleteArray(&deleteArray_crtcLcLCRTTrack);
      instance.SetDestructor(&destruct_crtcLcLCRTTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::crt::CRTTrack*)
   {
      return GenerateInitInstanceLocal((::crt::CRTTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::crt::CRTTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *crtcLcLCRTTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::crt::CRTTrack*)0x0)->GetClass();
      crtcLcLCRTTrack_TClassManip(theClass);
   return theClass;
   }

   static void crtcLcLCRTTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<crt::CRTTrack> >*)
   {
      ::art::Wrapper<vector<crt::CRTTrack> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<crt::CRTTrack> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<crt::CRTTrack> >", ::art::Wrapper<vector<crt::CRTTrack> >::Class_Version(), "invalid", 44,
                  typeid(::art::Wrapper<vector<crt::CRTTrack> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<crt::CRTTrack> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<crt::CRTTrack> >","art::Wrapper<std::vector<crt::CRTTrack> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<crt::CRTTrack> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<crt::CRTTrack> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<crt::CRTTrack> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<crt::CRTTrack> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_crtcLcLCRTSimData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::crt::CRTSimData : new ::crt::CRTSimData;
   }
   static void *newArray_crtcLcLCRTSimData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::crt::CRTSimData[nElements] : new ::crt::CRTSimData[nElements];
   }
   // Wrapper around operator delete
   static void delete_crtcLcLCRTSimData(void *p) {
      delete ((::crt::CRTSimData*)p);
   }
   static void deleteArray_crtcLcLCRTSimData(void *p) {
      delete [] ((::crt::CRTSimData*)p);
   }
   static void destruct_crtcLcLCRTSimData(void *p) {
      typedef ::crt::CRTSimData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::crt::CRTSimData

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<crt::CRTSimData> > : new ::art::Wrapper<vector<crt::CRTSimData> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<crt::CRTSimData> >[nElements] : new ::art::Wrapper<vector<crt::CRTSimData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(void *p) {
      delete ((::art::Wrapper<vector<crt::CRTSimData> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<crt::CRTSimData> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTSimDatagRsPgR(void *p) {
      typedef ::art::Wrapper<vector<crt::CRTSimData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<crt::CRTSimData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_crtcLcLCRTHit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::crt::CRTHit : new ::crt::CRTHit;
   }
   static void *newArray_crtcLcLCRTHit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::crt::CRTHit[nElements] : new ::crt::CRTHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_crtcLcLCRTHit(void *p) {
      delete ((::crt::CRTHit*)p);
   }
   static void deleteArray_crtcLcLCRTHit(void *p) {
      delete [] ((::crt::CRTHit*)p);
   }
   static void destruct_crtcLcLCRTHit(void *p) {
      typedef ::crt::CRTHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::crt::CRTHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<crt::CRTHit> > : new ::art::Wrapper<vector<crt::CRTHit> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<crt::CRTHit> >[nElements] : new ::art::Wrapper<vector<crt::CRTHit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<crt::CRTHit> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<crt::CRTHit> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTHitgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<crt::CRTHit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<crt::CRTHit> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_crtcLcLCRTTrack(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::crt::CRTTrack : new ::crt::CRTTrack;
   }
   static void *newArray_crtcLcLCRTTrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::crt::CRTTrack[nElements] : new ::crt::CRTTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_crtcLcLCRTTrack(void *p) {
      delete ((::crt::CRTTrack*)p);
   }
   static void deleteArray_crtcLcLCRTTrack(void *p) {
      delete [] ((::crt::CRTTrack*)p);
   }
   static void destruct_crtcLcLCRTTrack(void *p) {
      typedef ::crt::CRTTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::crt::CRTTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<crt::CRTTrack> > : new ::art::Wrapper<vector<crt::CRTTrack> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<crt::CRTTrack> >[nElements] : new ::art::Wrapper<vector<crt::CRTTrack> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<crt::CRTTrack> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<crt::CRTTrack> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEcrtcLcLCRTTrackgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<crt::CRTTrack> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<crt::CRTTrack> >

namespace ROOT {
   static TClass *vectorlEpairlEintcOfloatgRsPgR_Dictionary();
   static void vectorlEpairlEintcOfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEintcOfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEintcOfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEintcOfloatgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEintcOfloatgRsPgR(void *p);
   static void destruct_vectorlEpairlEintcOfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<int,float> >*)
   {
      vector<pair<int,float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<int,float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<int,float> >", -2, "invalid", 37,
                  typeid(vector<pair<int,float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEintcOfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<int,float> >) );
      instance.SetNew(&new_vectorlEpairlEintcOfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEintcOfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEintcOfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEintcOfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEintcOfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<int,float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<int,float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEintcOfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<int,float> >*)0x0)->GetClass();
      vectorlEpairlEintcOfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEintcOfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEintcOfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<int,float> > : new vector<pair<int,float> >;
   }
   static void *newArray_vectorlEpairlEintcOfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<int,float> >[nElements] : new vector<pair<int,float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEintcOfloatgRsPgR(void *p) {
      delete ((vector<pair<int,float> >*)p);
   }
   static void deleteArray_vectorlEpairlEintcOfloatgRsPgR(void *p) {
      delete [] ((vector<pair<int,float> >*)p);
   }
   static void destruct_vectorlEpairlEintcOfloatgRsPgR(void *p) {
      typedef vector<pair<int,float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<int,float> >

namespace ROOT {
   static TClass *vectorlEcrtcLcLCRTTrackgR_Dictionary();
   static void vectorlEcrtcLcLCRTTrackgR_TClassManip(TClass*);
   static void *new_vectorlEcrtcLcLCRTTrackgR(void *p = 0);
   static void *newArray_vectorlEcrtcLcLCRTTrackgR(Long_t size, void *p);
   static void delete_vectorlEcrtcLcLCRTTrackgR(void *p);
   static void deleteArray_vectorlEcrtcLcLCRTTrackgR(void *p);
   static void destruct_vectorlEcrtcLcLCRTTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<crt::CRTTrack>*)
   {
      vector<crt::CRTTrack> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<crt::CRTTrack>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<crt::CRTTrack>", -2, "invalid", 43,
                  typeid(vector<crt::CRTTrack>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEcrtcLcLCRTTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<crt::CRTTrack>) );
      instance.SetNew(&new_vectorlEcrtcLcLCRTTrackgR);
      instance.SetNewArray(&newArray_vectorlEcrtcLcLCRTTrackgR);
      instance.SetDelete(&delete_vectorlEcrtcLcLCRTTrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlEcrtcLcLCRTTrackgR);
      instance.SetDestructor(&destruct_vectorlEcrtcLcLCRTTrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<crt::CRTTrack> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<crt::CRTTrack>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEcrtcLcLCRTTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<crt::CRTTrack>*)0x0)->GetClass();
      vectorlEcrtcLcLCRTTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEcrtcLcLCRTTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEcrtcLcLCRTTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<crt::CRTTrack> : new vector<crt::CRTTrack>;
   }
   static void *newArray_vectorlEcrtcLcLCRTTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<crt::CRTTrack>[nElements] : new vector<crt::CRTTrack>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEcrtcLcLCRTTrackgR(void *p) {
      delete ((vector<crt::CRTTrack>*)p);
   }
   static void deleteArray_vectorlEcrtcLcLCRTTrackgR(void *p) {
      delete [] ((vector<crt::CRTTrack>*)p);
   }
   static void destruct_vectorlEcrtcLcLCRTTrackgR(void *p) {
      typedef vector<crt::CRTTrack> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<crt::CRTTrack>

namespace ROOT {
   static TClass *vectorlEcrtcLcLCRTSimDatagR_Dictionary();
   static void vectorlEcrtcLcLCRTSimDatagR_TClassManip(TClass*);
   static void *new_vectorlEcrtcLcLCRTSimDatagR(void *p = 0);
   static void *newArray_vectorlEcrtcLcLCRTSimDatagR(Long_t size, void *p);
   static void delete_vectorlEcrtcLcLCRTSimDatagR(void *p);
   static void deleteArray_vectorlEcrtcLcLCRTSimDatagR(void *p);
   static void destruct_vectorlEcrtcLcLCRTSimDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<crt::CRTSimData>*)
   {
      vector<crt::CRTSimData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<crt::CRTSimData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<crt::CRTSimData>", -2, "invalid", 34,
                  typeid(vector<crt::CRTSimData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEcrtcLcLCRTSimDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<crt::CRTSimData>) );
      instance.SetNew(&new_vectorlEcrtcLcLCRTSimDatagR);
      instance.SetNewArray(&newArray_vectorlEcrtcLcLCRTSimDatagR);
      instance.SetDelete(&delete_vectorlEcrtcLcLCRTSimDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEcrtcLcLCRTSimDatagR);
      instance.SetDestructor(&destruct_vectorlEcrtcLcLCRTSimDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<crt::CRTSimData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<crt::CRTSimData>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEcrtcLcLCRTSimDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<crt::CRTSimData>*)0x0)->GetClass();
      vectorlEcrtcLcLCRTSimDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEcrtcLcLCRTSimDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEcrtcLcLCRTSimDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<crt::CRTSimData> : new vector<crt::CRTSimData>;
   }
   static void *newArray_vectorlEcrtcLcLCRTSimDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<crt::CRTSimData>[nElements] : new vector<crt::CRTSimData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEcrtcLcLCRTSimDatagR(void *p) {
      delete ((vector<crt::CRTSimData>*)p);
   }
   static void deleteArray_vectorlEcrtcLcLCRTSimDatagR(void *p) {
      delete [] ((vector<crt::CRTSimData>*)p);
   }
   static void destruct_vectorlEcrtcLcLCRTSimDatagR(void *p) {
      typedef vector<crt::CRTSimData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<crt::CRTSimData>

namespace ROOT {
   static TClass *vectorlEcrtcLcLCRTHitgR_Dictionary();
   static void vectorlEcrtcLcLCRTHitgR_TClassManip(TClass*);
   static void *new_vectorlEcrtcLcLCRTHitgR(void *p = 0);
   static void *newArray_vectorlEcrtcLcLCRTHitgR(Long_t size, void *p);
   static void delete_vectorlEcrtcLcLCRTHitgR(void *p);
   static void deleteArray_vectorlEcrtcLcLCRTHitgR(void *p);
   static void destruct_vectorlEcrtcLcLCRTHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<crt::CRTHit>*)
   {
      vector<crt::CRTHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<crt::CRTHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<crt::CRTHit>", -2, "invalid", 40,
                  typeid(vector<crt::CRTHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEcrtcLcLCRTHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<crt::CRTHit>) );
      instance.SetNew(&new_vectorlEcrtcLcLCRTHitgR);
      instance.SetNewArray(&newArray_vectorlEcrtcLcLCRTHitgR);
      instance.SetDelete(&delete_vectorlEcrtcLcLCRTHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEcrtcLcLCRTHitgR);
      instance.SetDestructor(&destruct_vectorlEcrtcLcLCRTHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<crt::CRTHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<crt::CRTHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEcrtcLcLCRTHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<crt::CRTHit>*)0x0)->GetClass();
      vectorlEcrtcLcLCRTHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEcrtcLcLCRTHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEcrtcLcLCRTHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<crt::CRTHit> : new vector<crt::CRTHit>;
   }
   static void *newArray_vectorlEcrtcLcLCRTHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<crt::CRTHit>[nElements] : new vector<crt::CRTHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEcrtcLcLCRTHitgR(void *p) {
      delete ((vector<crt::CRTHit>*)p);
   }
   static void deleteArray_vectorlEcrtcLcLCRTHitgR(void *p) {
      delete [] ((vector<crt::CRTHit>*)p);
   }
   static void destruct_vectorlEcrtcLcLCRTHitgR(void *p) {
      typedef vector<crt::CRTHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<crt::CRTHit>

namespace ROOT {
   static TClass *maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR_Dictionary();
   static void maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(void *p = 0);
   static void *newArray_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(void *p);
   static void destruct_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned char,vector<pair<int,float> > >*)
   {
      map<unsigned char,vector<pair<int,float> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned char,vector<pair<int,float> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned char,vector<pair<int,float> > >", -2, "invalid", 38,
                  typeid(map<unsigned char,vector<pair<int,float> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<unsigned char,vector<pair<int,float> > >) );
      instance.SetNew(&new_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned char,vector<pair<int,float> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<unsigned char,vector<pair<int,float> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned char,vector<pair<int,float> > >*)0x0)->GetClass();
      maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned char,vector<pair<int,float> > > : new map<unsigned char,vector<pair<int,float> > >;
   }
   static void *newArray_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned char,vector<pair<int,float> > >[nElements] : new map<unsigned char,vector<pair<int,float> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(void *p) {
      delete ((map<unsigned char,vector<pair<int,float> > >*)p);
   }
   static void deleteArray_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(void *p) {
      delete [] ((map<unsigned char,vector<pair<int,float> > >*)p);
   }
   static void destruct_maplEunsignedsPcharcOvectorlEpairlEintcOfloatgRsPgRsPgR(void *p) {
      typedef map<unsigned char,vector<pair<int,float> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned char,vector<pair<int,float> > >

namespace ROOT {
   static TClass *maplEunsignedsPcharcOunsignedsPshortgR_Dictionary();
   static void maplEunsignedsPcharcOunsignedsPshortgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPcharcOunsignedsPshortgR(void *p = 0);
   static void *newArray_maplEunsignedsPcharcOunsignedsPshortgR(Long_t size, void *p);
   static void delete_maplEunsignedsPcharcOunsignedsPshortgR(void *p);
   static void deleteArray_maplEunsignedsPcharcOunsignedsPshortgR(void *p);
   static void destruct_maplEunsignedsPcharcOunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned char,unsigned short>*)
   {
      map<unsigned char,unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned char,unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned char,unsigned short>", -2, "map", 96,
                  typeid(map<unsigned char,unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPcharcOunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(map<unsigned char,unsigned short>) );
      instance.SetNew(&new_maplEunsignedsPcharcOunsignedsPshortgR);
      instance.SetNewArray(&newArray_maplEunsignedsPcharcOunsignedsPshortgR);
      instance.SetDelete(&delete_maplEunsignedsPcharcOunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPcharcOunsignedsPshortgR);
      instance.SetDestructor(&destruct_maplEunsignedsPcharcOunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned char,unsigned short> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<unsigned char,unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPcharcOunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned char,unsigned short>*)0x0)->GetClass();
      maplEunsignedsPcharcOunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPcharcOunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPcharcOunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned char,unsigned short> : new map<unsigned char,unsigned short>;
   }
   static void *newArray_maplEunsignedsPcharcOunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned char,unsigned short>[nElements] : new map<unsigned char,unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPcharcOunsignedsPshortgR(void *p) {
      delete ((map<unsigned char,unsigned short>*)p);
   }
   static void deleteArray_maplEunsignedsPcharcOunsignedsPshortgR(void *p) {
      delete [] ((map<unsigned char,unsigned short>*)p);
   }
   static void destruct_maplEunsignedsPcharcOunsignedsPshortgR(void *p) {
      typedef map<unsigned char,unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned char,unsigned short>

namespace {
  void TriggerDictionaryInitialization_libuboone_CRT_CRTProducts_dict_Impl() {
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
"/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/CRT/CRTProducts",
"/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_10_00_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/CRT/CRTProducts/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libuboone_CRT_CRTProducts_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace crt{class __attribute__((annotate("$clingAutoload$CRTSimData.hh")))  CRTSimData;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace crt{struct __attribute__((annotate("$clingAutoload$CRTHit.hh")))  CRTHit;}
namespace std{template <class T1, class T2> struct __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  pair;
}
namespace std{template <class T = void> struct __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  less;
}
namespace crt{struct __attribute__((annotate("$clingAutoload$CRTTrack.hh")))  CRTTrack;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libuboone_CRT_CRTProducts_dict dictionary payload"

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
#include "CRTSimData.hh"
#include "CRTHit.hh"
#include "CRTTrack.hh"
////#include "MSetCRTFrag.hh"
#include <utility>
#include <vector>
#include <artdaq-core/Data/Fragment.hh>
#include <map>

//
// Only include objects that we would like to be able to put into the event.
// Do not include the objects they contain internally.
//

template class std::vector<crt::CRTSimData>;
template class art::Wrapper< std::vector<crt::CRTSimData> >;

template class std::vector< std::pair<int,float> >;
template class std::map< unsigned char, std::vector< std::pair<int,float> > >;

template class std::vector<crt::CRTHit>;
template class art::Wrapper< std::vector<crt::CRTHit> >;

template class std::vector<crt::CRTTrack>;
template class art::Wrapper< std::vector<crt::CRTTrack> >;

////template class std::vector<crt::MSetCRTFrag>;
////template class art::Wrapper< std::vector<crt::MSetCRTFrag> >;

//template class std::vector< std::vector< artdaq::Fragment> >;
//template class art::Wrapper< std::vector< std::vector< artdaq::Fragment> > >;


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"art::Wrapper<std::vector<crt::CRTHit> >", payloadCode, "@",
"art::Wrapper<std::vector<crt::CRTSimData> >", payloadCode, "@",
"art::Wrapper<std::vector<crt::CRTTrack> >", payloadCode, "@",
"art::Wrapper<vector<crt::CRTHit> >", payloadCode, "@",
"art::Wrapper<vector<crt::CRTSimData> >", payloadCode, "@",
"art::Wrapper<vector<crt::CRTTrack> >", payloadCode, "@",
"crt::CRTHit", payloadCode, "@",
"crt::CRTSimData", payloadCode, "@",
"crt::CRTTrack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libuboone_CRT_CRTProducts_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libuboone_CRT_CRTProducts_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libuboone_CRT_CRTProducts_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libuboone_CRT_CRTProducts_dict() {
  TriggerDictionaryInitialization_libuboone_CRT_CRTProducts_dict_Impl();
}
