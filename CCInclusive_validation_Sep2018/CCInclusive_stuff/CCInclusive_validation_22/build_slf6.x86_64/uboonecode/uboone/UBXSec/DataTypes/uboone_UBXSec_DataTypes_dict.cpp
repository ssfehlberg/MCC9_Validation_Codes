// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME uboone_UBXSec_DataTypes_dict

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
#include "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/DataTypes/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_Dictionary();
   static void artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p);
   static void destruct_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<anab::FlashMatch,recob::PFParticle,void>*)
   {
      ::art::Assns<anab::FlashMatch,recob::PFParticle,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<anab::FlashMatch,recob::PFParticle,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<anab::FlashMatch,recob::PFParticle,void>", ::art::Assns<anab::FlashMatch,recob::PFParticle,void>::Class_Version(), "invalid", 33,
                  typeid(::art::Assns<anab::FlashMatch,recob::PFParticle,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<anab::FlashMatch,recob::PFParticle,void>) );
      instance.SetNew(&new_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<anab::FlashMatch,recob::PFParticle,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<anab::FlashMatch,recob::PFParticle,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<anab::FlashMatch,recob::PFParticle,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<anab::FlashMatch,recob::PFParticle,void>*)0x0)->GetClass();
      artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR_Dictionary();
   static void artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(void *p);
   static void destruct_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<recob::PFParticle,anab::FlashMatch,void>*)
   {
      ::art::Assns<recob::PFParticle,anab::FlashMatch,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<recob::PFParticle,anab::FlashMatch,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<recob::PFParticle,anab::FlashMatch,void>", ::art::Assns<recob::PFParticle,anab::FlashMatch,void>::Class_Version(), "invalid", 34,
                  typeid(::art::Assns<recob::PFParticle,anab::FlashMatch,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<recob::PFParticle,anab::FlashMatch,void>) );
      instance.SetNew(&new_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<recob::PFParticle,anab::FlashMatch,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<recob::PFParticle,anab::FlashMatch,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<recob::PFParticle,anab::FlashMatch,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<recob::PFParticle,anab::FlashMatch,void>*)0x0)->GetClass();
      artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >*)
   {
      ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >", ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >::Class_Version(), "invalid", 36,
                  typeid(::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >*)
   {
      ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >", ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >::Class_Version(), "invalid", 37,
                  typeid(::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ubanacLcLFlashMatch_Dictionary();
   static void ubanacLcLFlashMatch_TClassManip(TClass*);
   static void *new_ubanacLcLFlashMatch(void *p = 0);
   static void *newArray_ubanacLcLFlashMatch(Long_t size, void *p);
   static void delete_ubanacLcLFlashMatch(void *p);
   static void deleteArray_ubanacLcLFlashMatch(void *p);
   static void destruct_ubanacLcLFlashMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ubana::FlashMatch*)
   {
      ::ubana::FlashMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ubana::FlashMatch));
      static ::ROOT::TGenericClassInfo 
         instance("ubana::FlashMatch", "FlashMatch.h", 28,
                  typeid(::ubana::FlashMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ubanacLcLFlashMatch_Dictionary, isa_proxy, 0,
                  sizeof(::ubana::FlashMatch) );
      instance.SetNew(&new_ubanacLcLFlashMatch);
      instance.SetNewArray(&newArray_ubanacLcLFlashMatch);
      instance.SetDelete(&delete_ubanacLcLFlashMatch);
      instance.SetDeleteArray(&deleteArray_ubanacLcLFlashMatch);
      instance.SetDestructor(&destruct_ubanacLcLFlashMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ubana::FlashMatch*)
   {
      return GenerateInitInstanceLocal((::ubana::FlashMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ubana::FlashMatch*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ubanacLcLFlashMatch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ubana::FlashMatch*)0x0)->GetClass();
      ubanacLcLFlashMatch_TClassManip(theClass);
   return theClass;
   }

   static void ubanacLcLFlashMatch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEubanacLcLFlashMatchgR_Dictionary();
   static void artcLcLWrapperlEubanacLcLFlashMatchgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEubanacLcLFlashMatchgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEubanacLcLFlashMatchgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEubanacLcLFlashMatchgR(void *p);
   static void deleteArray_artcLcLWrapperlEubanacLcLFlashMatchgR(void *p);
   static void destruct_artcLcLWrapperlEubanacLcLFlashMatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<ubana::FlashMatch>*)
   {
      ::art::Wrapper<ubana::FlashMatch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<ubana::FlashMatch>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<ubana::FlashMatch>", ::art::Wrapper<ubana::FlashMatch>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<ubana::FlashMatch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEubanacLcLFlashMatchgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<ubana::FlashMatch>) );
      instance.SetNew(&new_artcLcLWrapperlEubanacLcLFlashMatchgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEubanacLcLFlashMatchgR);
      instance.SetDelete(&delete_artcLcLWrapperlEubanacLcLFlashMatchgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEubanacLcLFlashMatchgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEubanacLcLFlashMatchgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<ubana::FlashMatch>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<ubana::FlashMatch>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<ubana::FlashMatch>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEubanacLcLFlashMatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<ubana::FlashMatch>*)0x0)->GetClass();
      artcLcLWrapperlEubanacLcLFlashMatchgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEubanacLcLFlashMatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<ubana::FlashMatch> >*)
   {
      ::art::Wrapper<vector<ubana::FlashMatch> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<ubana::FlashMatch> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<ubana::FlashMatch> >", ::art::Wrapper<vector<ubana::FlashMatch> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<ubana::FlashMatch> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<ubana::FlashMatch> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<ubana::FlashMatch> >","art::Wrapper<std::vector<ubana::FlashMatch> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<ubana::FlashMatch> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<ubana::FlashMatch> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<ubana::FlashMatch> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<ubana::FlashMatch> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::FlashMatch,recob::PFParticle,void>*)
   {
      ::art::Assns<ubana::FlashMatch,recob::PFParticle,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::FlashMatch,recob::PFParticle,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::FlashMatch,recob::PFParticle,void>", ::art::Assns<ubana::FlashMatch,recob::PFParticle,void>::Class_Version(), "invalid", 42,
                  typeid(::art::Assns<ubana::FlashMatch,recob::PFParticle,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::FlashMatch,recob::PFParticle,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::FlashMatch,recob::PFParticle,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::FlashMatch,recob::PFParticle,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::FlashMatch,recob::PFParticle,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::FlashMatch,recob::PFParticle,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR_Dictionary();
   static void artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(void *p);
   static void destruct_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<recob::PFParticle,ubana::FlashMatch,void>*)
   {
      ::art::Assns<recob::PFParticle,ubana::FlashMatch,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<recob::PFParticle,ubana::FlashMatch,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<recob::PFParticle,ubana::FlashMatch,void>", ::art::Assns<recob::PFParticle,ubana::FlashMatch,void>::Class_Version(), "invalid", 43,
                  typeid(::art::Assns<recob::PFParticle,ubana::FlashMatch,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<recob::PFParticle,ubana::FlashMatch,void>) );
      instance.SetNew(&new_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<recob::PFParticle,ubana::FlashMatch,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<recob::PFParticle,ubana::FlashMatch,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<recob::PFParticle,ubana::FlashMatch,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<recob::PFParticle,ubana::FlashMatch,void>*)0x0)->GetClass();
      artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR_Dictionary();
   static void artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(void *p);
   static void destruct_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<recob::Track,ubana::FlashMatch,void>*)
   {
      ::art::Assns<recob::Track,ubana::FlashMatch,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<recob::Track,ubana::FlashMatch,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<recob::Track,ubana::FlashMatch,void>", ::art::Assns<recob::Track,ubana::FlashMatch,void>::Class_Version(), "invalid", 45,
                  typeid(::art::Assns<recob::Track,ubana::FlashMatch,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<recob::Track,ubana::FlashMatch,void>) );
      instance.SetNew(&new_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<recob::Track,ubana::FlashMatch,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<recob::Track,ubana::FlashMatch,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<recob::Track,ubana::FlashMatch,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<recob::Track,ubana::FlashMatch,void>*)0x0)->GetClass();
      artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::FlashMatch,recob::Track,void>*)
   {
      ::art::Assns<ubana::FlashMatch,recob::Track,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::FlashMatch,recob::Track,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::FlashMatch,recob::Track,void>", ::art::Assns<ubana::FlashMatch,recob::Track,void>::Class_Version(), "invalid", 44,
                  typeid(::art::Assns<ubana::FlashMatch,recob::Track,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::FlashMatch,recob::Track,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::FlashMatch,recob::Track,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::FlashMatch,recob::Track,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::FlashMatch,recob::Track,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::FlashMatch,recob::Track,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >", ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >::Class_Version(), "invalid", 47,
                  typeid(::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >*)
   {
      ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >", ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >::Class_Version(), "invalid", 48,
                  typeid(::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >*)
   {
      ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >", ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >::Class_Version(), "invalid", 50,
                  typeid(::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >", ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >::Class_Version(), "invalid", 49,
                  typeid(::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ubanacLcLTPCObject_Dictionary();
   static void ubanacLcLTPCObject_TClassManip(TClass*);
   static void *new_ubanacLcLTPCObject(void *p = 0);
   static void *newArray_ubanacLcLTPCObject(Long_t size, void *p);
   static void delete_ubanacLcLTPCObject(void *p);
   static void deleteArray_ubanacLcLTPCObject(void *p);
   static void destruct_ubanacLcLTPCObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ubana::TPCObject*)
   {
      ::ubana::TPCObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ubana::TPCObject));
      static ::ROOT::TGenericClassInfo 
         instance("ubana::TPCObject", "TPCObject.h", 50,
                  typeid(::ubana::TPCObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ubanacLcLTPCObject_Dictionary, isa_proxy, 0,
                  sizeof(::ubana::TPCObject) );
      instance.SetNew(&new_ubanacLcLTPCObject);
      instance.SetNewArray(&newArray_ubanacLcLTPCObject);
      instance.SetDelete(&delete_ubanacLcLTPCObject);
      instance.SetDeleteArray(&deleteArray_ubanacLcLTPCObject);
      instance.SetDestructor(&destruct_ubanacLcLTPCObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ubana::TPCObject*)
   {
      return GenerateInitInstanceLocal((::ubana::TPCObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ubana::TPCObject*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ubanacLcLTPCObject_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ubana::TPCObject*)0x0)->GetClass();
      ubanacLcLTPCObject_TClassManip(theClass);
   return theClass;
   }

   static void ubanacLcLTPCObject_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEubanacLcLTPCObjectgR_Dictionary();
   static void artcLcLWrapperlEubanacLcLTPCObjectgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEubanacLcLTPCObjectgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEubanacLcLTPCObjectgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEubanacLcLTPCObjectgR(void *p);
   static void deleteArray_artcLcLWrapperlEubanacLcLTPCObjectgR(void *p);
   static void destruct_artcLcLWrapperlEubanacLcLTPCObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<ubana::TPCObject>*)
   {
      ::art::Wrapper<ubana::TPCObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<ubana::TPCObject>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<ubana::TPCObject>", ::art::Wrapper<ubana::TPCObject>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<ubana::TPCObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEubanacLcLTPCObjectgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<ubana::TPCObject>) );
      instance.SetNew(&new_artcLcLWrapperlEubanacLcLTPCObjectgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEubanacLcLTPCObjectgR);
      instance.SetDelete(&delete_artcLcLWrapperlEubanacLcLTPCObjectgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEubanacLcLTPCObjectgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEubanacLcLTPCObjectgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<ubana::TPCObject>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<ubana::TPCObject>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<ubana::TPCObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEubanacLcLTPCObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<ubana::TPCObject>*)0x0)->GetClass();
      artcLcLWrapperlEubanacLcLTPCObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEubanacLcLTPCObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<ubana::TPCObject> >*)
   {
      ::art::Wrapper<vector<ubana::TPCObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<ubana::TPCObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<ubana::TPCObject> >", ::art::Wrapper<vector<ubana::TPCObject> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<ubana::TPCObject> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<ubana::TPCObject> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<ubana::TPCObject> >","art::Wrapper<std::vector<ubana::TPCObject> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<ubana::TPCObject> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<ubana::TPCObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<ubana::TPCObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<ubana::TPCObject> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::TPCObject,recob::PFParticle,void>*)
   {
      ::art::Assns<ubana::TPCObject,recob::PFParticle,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::TPCObject,recob::PFParticle,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::TPCObject,recob::PFParticle,void>", ::art::Assns<ubana::TPCObject,recob::PFParticle,void>::Class_Version(), "invalid", 57,
                  typeid(::art::Assns<ubana::TPCObject,recob::PFParticle,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::TPCObject,recob::PFParticle,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::TPCObject,recob::PFParticle,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::TPCObject,recob::PFParticle,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,recob::PFParticle,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,recob::PFParticle,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR_Dictionary();
   static void artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(void *p);
   static void destruct_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<recob::PFParticle,ubana::TPCObject,void>*)
   {
      ::art::Assns<recob::PFParticle,ubana::TPCObject,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<recob::PFParticle,ubana::TPCObject,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<recob::PFParticle,ubana::TPCObject,void>", ::art::Assns<recob::PFParticle,ubana::TPCObject,void>::Class_Version(), "invalid", 58,
                  typeid(::art::Assns<recob::PFParticle,ubana::TPCObject,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<recob::PFParticle,ubana::TPCObject,void>) );
      instance.SetNew(&new_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<recob::PFParticle,ubana::TPCObject,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<recob::PFParticle,ubana::TPCObject,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<recob::PFParticle,ubana::TPCObject,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<recob::PFParticle,ubana::TPCObject,void>*)0x0)->GetClass();
      artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR_Dictionary();
   static void artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void destruct_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<recob::Track,ubana::TPCObject,void>*)
   {
      ::art::Assns<recob::Track,ubana::TPCObject,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<recob::Track,ubana::TPCObject,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<recob::Track,ubana::TPCObject,void>", ::art::Assns<recob::Track,ubana::TPCObject,void>::Class_Version(), "invalid", 60,
                  typeid(::art::Assns<recob::Track,ubana::TPCObject,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<recob::Track,ubana::TPCObject,void>) );
      instance.SetNew(&new_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<recob::Track,ubana::TPCObject,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<recob::Track,ubana::TPCObject,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<recob::Track,ubana::TPCObject,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<recob::Track,ubana::TPCObject,void>*)0x0)->GetClass();
      artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::TPCObject,recob::Track,void>*)
   {
      ::art::Assns<ubana::TPCObject,recob::Track,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::TPCObject,recob::Track,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::TPCObject,recob::Track,void>", ::art::Assns<ubana::TPCObject,recob::Track,void>::Class_Version(), "invalid", 59,
                  typeid(::art::Assns<ubana::TPCObject,recob::Track,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::TPCObject,recob::Track,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::TPCObject,recob::Track,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::TPCObject,recob::Track,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,recob::Track,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,recob::Track,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR_Dictionary();
   static void artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(void *p);
   static void destruct_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<recob::Shower,ubana::TPCObject,void>*)
   {
      ::art::Assns<recob::Shower,ubana::TPCObject,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<recob::Shower,ubana::TPCObject,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<recob::Shower,ubana::TPCObject,void>", ::art::Assns<recob::Shower,ubana::TPCObject,void>::Class_Version(), "invalid", 62,
                  typeid(::art::Assns<recob::Shower,ubana::TPCObject,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<recob::Shower,ubana::TPCObject,void>) );
      instance.SetNew(&new_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<recob::Shower,ubana::TPCObject,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<recob::Shower,ubana::TPCObject,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<recob::Shower,ubana::TPCObject,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<recob::Shower,ubana::TPCObject,void>*)0x0)->GetClass();
      artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::TPCObject,recob::Shower,void>*)
   {
      ::art::Assns<ubana::TPCObject,recob::Shower,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::TPCObject,recob::Shower,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::TPCObject,recob::Shower,void>", ::art::Assns<ubana::TPCObject,recob::Shower,void>::Class_Version(), "invalid", 61,
                  typeid(::art::Assns<ubana::TPCObject,recob::Shower,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::TPCObject,recob::Shower,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::TPCObject,recob::Shower,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::TPCObject,recob::Shower,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,recob::Shower,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,recob::Shower,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR_Dictionary();
   static void artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void destruct_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<recob::Vertex,ubana::TPCObject,void>*)
   {
      ::art::Assns<recob::Vertex,ubana::TPCObject,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<recob::Vertex,ubana::TPCObject,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<recob::Vertex,ubana::TPCObject,void>", ::art::Assns<recob::Vertex,ubana::TPCObject,void>::Class_Version(), "invalid", 64,
                  typeid(::art::Assns<recob::Vertex,ubana::TPCObject,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<recob::Vertex,ubana::TPCObject,void>) );
      instance.SetNew(&new_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<recob::Vertex,ubana::TPCObject,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<recob::Vertex,ubana::TPCObject,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<recob::Vertex,ubana::TPCObject,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<recob::Vertex,ubana::TPCObject,void>*)0x0)->GetClass();
      artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::TPCObject,recob::Vertex,void>*)
   {
      ::art::Assns<ubana::TPCObject,recob::Vertex,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::TPCObject,recob::Vertex,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::TPCObject,recob::Vertex,void>", ::art::Assns<ubana::TPCObject,recob::Vertex,void>::Class_Version(), "invalid", 63,
                  typeid(::art::Assns<ubana::TPCObject,recob::Vertex,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::TPCObject,recob::Vertex,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::TPCObject,recob::Vertex,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::TPCObject,recob::Vertex,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,recob::Vertex,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,recob::Vertex,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>*)
   {
      ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::TPCObject,ubana::FlashMatch,void>", ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>::Class_Version(), "invalid", 65,
                  typeid(::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>*)
   {
      ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::FlashMatch,ubana::TPCObject,void>", ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>::Class_Version(), "invalid", 66,
                  typeid(::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::TPCObject,anab::CosmicTag,void>*)
   {
      ::art::Assns<ubana::TPCObject,anab::CosmicTag,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::TPCObject,anab::CosmicTag,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::TPCObject,anab::CosmicTag,void>", ::art::Assns<ubana::TPCObject,anab::CosmicTag,void>::Class_Version(), "invalid", 67,
                  typeid(::art::Assns<ubana::TPCObject,anab::CosmicTag,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::TPCObject,anab::CosmicTag,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::TPCObject,anab::CosmicTag,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::TPCObject,anab::CosmicTag,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,anab::CosmicTag,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,anab::CosmicTag,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR_Dictionary();
   static void artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<anab::CosmicTag,ubana::TPCObject,void>*)
   {
      ::art::Assns<anab::CosmicTag,ubana::TPCObject,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<anab::CosmicTag,ubana::TPCObject,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<anab::CosmicTag,ubana::TPCObject,void>", ::art::Assns<anab::CosmicTag,ubana::TPCObject,void>::Class_Version(), "invalid", 68,
                  typeid(::art::Assns<anab::CosmicTag,ubana::TPCObject,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<anab::CosmicTag,ubana::TPCObject,void>) );
      instance.SetNew(&new_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<anab::CosmicTag,ubana::TPCObject,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<anab::CosmicTag,ubana::TPCObject,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<anab::CosmicTag,ubana::TPCObject,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<anab::CosmicTag,ubana::TPCObject,void>*)0x0)->GetClass();
      artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >", ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >::Class_Version(), "invalid", 70,
                  typeid(::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >*)
   {
      ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >", ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >::Class_Version(), "invalid", 71,
                  typeid(::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >*)
   {
      ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >", ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >::Class_Version(), "invalid", 72,
                  typeid(::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >", ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >::Class_Version(), "invalid", 73,
                  typeid(::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >*)
   {
      ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >", ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >::Class_Version(), "invalid", 74,
                  typeid(::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >", ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >::Class_Version(), "invalid", 75,
                  typeid(::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >*)
   {
      ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >", ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >::Class_Version(), "invalid", 76,
                  typeid(::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >", ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >::Class_Version(), "invalid", 77,
                  typeid(::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >", ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >::Class_Version(), "invalid", 78,
                  typeid(::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >", ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >::Class_Version(), "invalid", 79,
                  typeid(::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >", ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >::Class_Version(), "invalid", 80,
                  typeid(::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >*)
   {
      ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >", ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >::Class_Version(), "invalid", 81,
                  typeid(::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ubanacLcLMCGhost_Dictionary();
   static void ubanacLcLMCGhost_TClassManip(TClass*);
   static void *new_ubanacLcLMCGhost(void *p = 0);
   static void *newArray_ubanacLcLMCGhost(Long_t size, void *p);
   static void delete_ubanacLcLMCGhost(void *p);
   static void deleteArray_ubanacLcLMCGhost(void *p);
   static void destruct_ubanacLcLMCGhost(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ubana::MCGhost*)
   {
      ::ubana::MCGhost *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ubana::MCGhost));
      static ::ROOT::TGenericClassInfo 
         instance("ubana::MCGhost", "MCGhost.h", 28,
                  typeid(::ubana::MCGhost), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ubanacLcLMCGhost_Dictionary, isa_proxy, 0,
                  sizeof(::ubana::MCGhost) );
      instance.SetNew(&new_ubanacLcLMCGhost);
      instance.SetNewArray(&newArray_ubanacLcLMCGhost);
      instance.SetDelete(&delete_ubanacLcLMCGhost);
      instance.SetDeleteArray(&deleteArray_ubanacLcLMCGhost);
      instance.SetDestructor(&destruct_ubanacLcLMCGhost);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ubana::MCGhost*)
   {
      return GenerateInitInstanceLocal((::ubana::MCGhost*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ubana::MCGhost*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ubanacLcLMCGhost_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ubana::MCGhost*)0x0)->GetClass();
      ubanacLcLMCGhost_TClassManip(theClass);
   return theClass;
   }

   static void ubanacLcLMCGhost_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEubanacLcLMCGhostgR_Dictionary();
   static void artcLcLWrapperlEubanacLcLMCGhostgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEubanacLcLMCGhostgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEubanacLcLMCGhostgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEubanacLcLMCGhostgR(void *p);
   static void deleteArray_artcLcLWrapperlEubanacLcLMCGhostgR(void *p);
   static void destruct_artcLcLWrapperlEubanacLcLMCGhostgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<ubana::MCGhost>*)
   {
      ::art::Wrapper<ubana::MCGhost> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<ubana::MCGhost>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<ubana::MCGhost>", ::art::Wrapper<ubana::MCGhost>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<ubana::MCGhost>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEubanacLcLMCGhostgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<ubana::MCGhost>) );
      instance.SetNew(&new_artcLcLWrapperlEubanacLcLMCGhostgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEubanacLcLMCGhostgR);
      instance.SetDelete(&delete_artcLcLWrapperlEubanacLcLMCGhostgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEubanacLcLMCGhostgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEubanacLcLMCGhostgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<ubana::MCGhost>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<ubana::MCGhost>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<ubana::MCGhost>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEubanacLcLMCGhostgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<ubana::MCGhost>*)0x0)->GetClass();
      artcLcLWrapperlEubanacLcLMCGhostgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEubanacLcLMCGhostgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<ubana::MCGhost> >*)
   {
      ::art::Wrapper<vector<ubana::MCGhost> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<ubana::MCGhost> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<ubana::MCGhost> >", ::art::Wrapper<vector<ubana::MCGhost> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<ubana::MCGhost> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<ubana::MCGhost> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<ubana::MCGhost> >","art::Wrapper<std::vector<ubana::MCGhost> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<ubana::MCGhost> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<ubana::MCGhost> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<ubana::MCGhost> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<ubana::MCGhost> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR_Dictionary();
   static void artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(void *p);
   static void destruct_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<recob::PFParticle,ubana::MCGhost,void>*)
   {
      ::art::Assns<recob::PFParticle,ubana::MCGhost,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<recob::PFParticle,ubana::MCGhost,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<recob::PFParticle,ubana::MCGhost,void>", ::art::Assns<recob::PFParticle,ubana::MCGhost,void>::Class_Version(), "invalid", 88,
                  typeid(::art::Assns<recob::PFParticle,ubana::MCGhost,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<recob::PFParticle,ubana::MCGhost,void>) );
      instance.SetNew(&new_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<recob::PFParticle,ubana::MCGhost,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<recob::PFParticle,ubana::MCGhost,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<recob::PFParticle,ubana::MCGhost,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<recob::PFParticle,ubana::MCGhost,void>*)0x0)->GetClass();
      artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::MCGhost,recob::PFParticle,void>*)
   {
      ::art::Assns<ubana::MCGhost,recob::PFParticle,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::MCGhost,recob::PFParticle,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::MCGhost,recob::PFParticle,void>", ::art::Assns<ubana::MCGhost,recob::PFParticle,void>::Class_Version(), "invalid", 89,
                  typeid(::art::Assns<ubana::MCGhost,recob::PFParticle,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::MCGhost,recob::PFParticle,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::MCGhost,recob::PFParticle,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::MCGhost,recob::PFParticle,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::MCGhost,recob::PFParticle,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::MCGhost,recob::PFParticle,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR_Dictionary();
   static void artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<simb::MCParticle,ubana::MCGhost,void>*)
   {
      ::art::Assns<simb::MCParticle,ubana::MCGhost,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<simb::MCParticle,ubana::MCGhost,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<simb::MCParticle,ubana::MCGhost,void>", ::art::Assns<simb::MCParticle,ubana::MCGhost,void>::Class_Version(), "invalid", 86,
                  typeid(::art::Assns<simb::MCParticle,ubana::MCGhost,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<simb::MCParticle,ubana::MCGhost,void>) );
      instance.SetNew(&new_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<simb::MCParticle,ubana::MCGhost,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<simb::MCParticle,ubana::MCGhost,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<simb::MCParticle,ubana::MCGhost,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<simb::MCParticle,ubana::MCGhost,void>*)0x0)->GetClass();
      artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::MCGhost,simb::MCParticle,void>*)
   {
      ::art::Assns<ubana::MCGhost,simb::MCParticle,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::MCGhost,simb::MCParticle,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::MCGhost,simb::MCParticle,void>", ::art::Assns<ubana::MCGhost,simb::MCParticle,void>::Class_Version(), "invalid", 87,
                  typeid(::art::Assns<ubana::MCGhost,simb::MCParticle,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::MCGhost,simb::MCParticle,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::MCGhost,simb::MCParticle,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::MCGhost,simb::MCParticle,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::MCGhost,simb::MCParticle,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::MCGhost,simb::MCParticle,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >*)
   {
      ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >", ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >::Class_Version(), "invalid", 92,
                  typeid(::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >", ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >::Class_Version(), "invalid", 93,
                  typeid(::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >*)
   {
      ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >", ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >::Class_Version(), "invalid", 90,
                  typeid(::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >", ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >::Class_Version(), "invalid", 91,
                  typeid(::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *UBXSecEvent_Dictionary();
   static void UBXSecEvent_TClassManip(TClass*);
   static void *new_UBXSecEvent(void *p = 0);
   static void *newArray_UBXSecEvent(Long_t size, void *p);
   static void delete_UBXSecEvent(void *p);
   static void deleteArray_UBXSecEvent(void *p);
   static void destruct_UBXSecEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UBXSecEvent*)
   {
      ::UBXSecEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::UBXSecEvent));
      static ::ROOT::TGenericClassInfo 
         instance("UBXSecEvent", "UBXSecEvent.h", 33,
                  typeid(::UBXSecEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &UBXSecEvent_Dictionary, isa_proxy, 0,
                  sizeof(::UBXSecEvent) );
      instance.SetNew(&new_UBXSecEvent);
      instance.SetNewArray(&newArray_UBXSecEvent);
      instance.SetDelete(&delete_UBXSecEvent);
      instance.SetDeleteArray(&deleteArray_UBXSecEvent);
      instance.SetDestructor(&destruct_UBXSecEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UBXSecEvent*)
   {
      return GenerateInitInstanceLocal((::UBXSecEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::UBXSecEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *UBXSecEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::UBXSecEvent*)0x0)->GetClass();
      UBXSecEvent_TClassManip(theClass);
   return theClass;
   }

   static void UBXSecEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ubanacLcLSelectionResult_Dictionary();
   static void ubanacLcLSelectionResult_TClassManip(TClass*);
   static void *new_ubanacLcLSelectionResult(void *p = 0);
   static void *newArray_ubanacLcLSelectionResult(Long_t size, void *p);
   static void delete_ubanacLcLSelectionResult(void *p);
   static void deleteArray_ubanacLcLSelectionResult(void *p);
   static void destruct_ubanacLcLSelectionResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ubana::SelectionResult*)
   {
      ::ubana::SelectionResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ubana::SelectionResult));
      static ::ROOT::TGenericClassInfo 
         instance("ubana::SelectionResult", "SelectionResult.h", 30,
                  typeid(::ubana::SelectionResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ubanacLcLSelectionResult_Dictionary, isa_proxy, 0,
                  sizeof(::ubana::SelectionResult) );
      instance.SetNew(&new_ubanacLcLSelectionResult);
      instance.SetNewArray(&newArray_ubanacLcLSelectionResult);
      instance.SetDelete(&delete_ubanacLcLSelectionResult);
      instance.SetDeleteArray(&deleteArray_ubanacLcLSelectionResult);
      instance.SetDestructor(&destruct_ubanacLcLSelectionResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ubana::SelectionResult*)
   {
      return GenerateInitInstanceLocal((::ubana::SelectionResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ubana::SelectionResult*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ubanacLcLSelectionResult_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ubana::SelectionResult*)0x0)->GetClass();
      ubanacLcLSelectionResult_TClassManip(theClass);
   return theClass;
   }

   static void ubanacLcLSelectionResult_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEubanacLcLSelectionResultgR_Dictionary();
   static void artcLcLWrapperlEubanacLcLSelectionResultgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEubanacLcLSelectionResultgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEubanacLcLSelectionResultgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEubanacLcLSelectionResultgR(void *p);
   static void deleteArray_artcLcLWrapperlEubanacLcLSelectionResultgR(void *p);
   static void destruct_artcLcLWrapperlEubanacLcLSelectionResultgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<ubana::SelectionResult>*)
   {
      ::art::Wrapper<ubana::SelectionResult> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<ubana::SelectionResult>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<ubana::SelectionResult>", ::art::Wrapper<ubana::SelectionResult>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<ubana::SelectionResult>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEubanacLcLSelectionResultgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<ubana::SelectionResult>) );
      instance.SetNew(&new_artcLcLWrapperlEubanacLcLSelectionResultgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEubanacLcLSelectionResultgR);
      instance.SetDelete(&delete_artcLcLWrapperlEubanacLcLSelectionResultgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEubanacLcLSelectionResultgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEubanacLcLSelectionResultgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<ubana::SelectionResult>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<ubana::SelectionResult>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<ubana::SelectionResult>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEubanacLcLSelectionResultgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<ubana::SelectionResult>*)0x0)->GetClass();
      artcLcLWrapperlEubanacLcLSelectionResultgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEubanacLcLSelectionResultgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<ubana::SelectionResult> >*)
   {
      ::art::Wrapper<vector<ubana::SelectionResult> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<ubana::SelectionResult> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<ubana::SelectionResult> >", ::art::Wrapper<vector<ubana::SelectionResult> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<ubana::SelectionResult> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<ubana::SelectionResult> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<ubana::SelectionResult> >","art::Wrapper<std::vector<ubana::SelectionResult> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<ubana::SelectionResult> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<ubana::SelectionResult> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<ubana::SelectionResult> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<ubana::SelectionResult> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>*)
   {
      ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::TPCObject,ubana::SelectionResult,void>", ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>::Class_Version(), "canvas/Persistency/Common/Assns.h", 139,
                  typeid(::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR_Dictionary();
   static void artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(void *p);
   static void destruct_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>*)
   {
      ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<ubana::SelectionResult,ubana::TPCObject,void>", ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>::Class_Version(), "canvas/Persistency/Common/Assns.h", 139,
                  typeid(::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>) );
      instance.SetNew(&new_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>*)0x0)->GetClass();
      artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >", ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >::Class_Version(), "invalid", 97,
                  typeid(::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >*)
   {
      ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >", ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >::Class_Version(), "invalid", 98,
                  typeid(::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<anab::FlashMatch,recob::PFParticle,void> : new ::art::Assns<anab::FlashMatch,recob::PFParticle,void>;
   }
   static void *newArray_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<anab::FlashMatch,recob::PFParticle,void>[nElements] : new ::art::Assns<anab::FlashMatch,recob::PFParticle,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p) {
      delete ((::art::Assns<anab::FlashMatch,recob::PFParticle,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p) {
      delete [] ((::art::Assns<anab::FlashMatch,recob::PFParticle,void>*)p);
   }
   static void destruct_artcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p) {
      typedef ::art::Assns<anab::FlashMatch,recob::PFParticle,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<anab::FlashMatch,recob::PFParticle,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::PFParticle,anab::FlashMatch,void> : new ::art::Assns<recob::PFParticle,anab::FlashMatch,void>;
   }
   static void *newArray_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::PFParticle,anab::FlashMatch,void>[nElements] : new ::art::Assns<recob::PFParticle,anab::FlashMatch,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(void *p) {
      delete ((::art::Assns<recob::PFParticle,anab::FlashMatch,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(void *p) {
      delete [] ((::art::Assns<recob::PFParticle,anab::FlashMatch,void>*)p);
   }
   static void destruct_artcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgR(void *p) {
      typedef ::art::Assns<recob::PFParticle,anab::FlashMatch,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<recob::PFParticle,anab::FlashMatch,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> > : new ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >[nElements] : new ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEanabcLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> > : new ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >[nElements] : new ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOanabcLcLFlashMatchcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ubanacLcLFlashMatch(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ubana::FlashMatch : new ::ubana::FlashMatch;
   }
   static void *newArray_ubanacLcLFlashMatch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ubana::FlashMatch[nElements] : new ::ubana::FlashMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_ubanacLcLFlashMatch(void *p) {
      delete ((::ubana::FlashMatch*)p);
   }
   static void deleteArray_ubanacLcLFlashMatch(void *p) {
      delete [] ((::ubana::FlashMatch*)p);
   }
   static void destruct_ubanacLcLFlashMatch(void *p) {
      typedef ::ubana::FlashMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ubana::FlashMatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEubanacLcLFlashMatchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<ubana::FlashMatch> : new ::art::Wrapper<ubana::FlashMatch>;
   }
   static void *newArray_artcLcLWrapperlEubanacLcLFlashMatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<ubana::FlashMatch>[nElements] : new ::art::Wrapper<ubana::FlashMatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEubanacLcLFlashMatchgR(void *p) {
      delete ((::art::Wrapper<ubana::FlashMatch>*)p);
   }
   static void deleteArray_artcLcLWrapperlEubanacLcLFlashMatchgR(void *p) {
      delete [] ((::art::Wrapper<ubana::FlashMatch>*)p);
   }
   static void destruct_artcLcLWrapperlEubanacLcLFlashMatchgR(void *p) {
      typedef ::art::Wrapper<ubana::FlashMatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<ubana::FlashMatch>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<ubana::FlashMatch> > : new ::art::Wrapper<vector<ubana::FlashMatch> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<ubana::FlashMatch> >[nElements] : new ::art::Wrapper<vector<ubana::FlashMatch> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<ubana::FlashMatch> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<ubana::FlashMatch> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEubanacLcLFlashMatchgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<ubana::FlashMatch> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<ubana::FlashMatch> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::FlashMatch,recob::PFParticle,void> : new ::art::Assns<ubana::FlashMatch,recob::PFParticle,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::FlashMatch,recob::PFParticle,void>[nElements] : new ::art::Assns<ubana::FlashMatch,recob::PFParticle,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p) {
      delete ((::art::Assns<ubana::FlashMatch,recob::PFParticle,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::FlashMatch,recob::PFParticle,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgR(void *p) {
      typedef ::art::Assns<ubana::FlashMatch,recob::PFParticle,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::FlashMatch,recob::PFParticle,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::PFParticle,ubana::FlashMatch,void> : new ::art::Assns<recob::PFParticle,ubana::FlashMatch,void>;
   }
   static void *newArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::PFParticle,ubana::FlashMatch,void>[nElements] : new ::art::Assns<recob::PFParticle,ubana::FlashMatch,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(void *p) {
      delete ((::art::Assns<recob::PFParticle,ubana::FlashMatch,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(void *p) {
      delete [] ((::art::Assns<recob::PFParticle,ubana::FlashMatch,void>*)p);
   }
   static void destruct_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgR(void *p) {
      typedef ::art::Assns<recob::PFParticle,ubana::FlashMatch,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<recob::PFParticle,ubana::FlashMatch,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Track,ubana::FlashMatch,void> : new ::art::Assns<recob::Track,ubana::FlashMatch,void>;
   }
   static void *newArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Track,ubana::FlashMatch,void>[nElements] : new ::art::Assns<recob::Track,ubana::FlashMatch,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(void *p) {
      delete ((::art::Assns<recob::Track,ubana::FlashMatch,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(void *p) {
      delete [] ((::art::Assns<recob::Track,ubana::FlashMatch,void>*)p);
   }
   static void destruct_artcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgR(void *p) {
      typedef ::art::Assns<recob::Track,ubana::FlashMatch,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<recob::Track,ubana::FlashMatch,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::FlashMatch,recob::Track,void> : new ::art::Assns<ubana::FlashMatch,recob::Track,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::FlashMatch,recob::Track,void>[nElements] : new ::art::Assns<ubana::FlashMatch,recob::Track,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(void *p) {
      delete ((::art::Assns<ubana::FlashMatch,recob::Track,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::FlashMatch,recob::Track,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgR(void *p) {
      typedef ::art::Assns<ubana::FlashMatch,recob::Track,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::FlashMatch,recob::Track,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> > : new ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> > : new ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >[nElements] : new ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> > : new ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >[nElements] : new ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> > : new ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOrecobcLcLTrackcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ubanacLcLTPCObject(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ubana::TPCObject : new ::ubana::TPCObject;
   }
   static void *newArray_ubanacLcLTPCObject(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ubana::TPCObject[nElements] : new ::ubana::TPCObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_ubanacLcLTPCObject(void *p) {
      delete ((::ubana::TPCObject*)p);
   }
   static void deleteArray_ubanacLcLTPCObject(void *p) {
      delete [] ((::ubana::TPCObject*)p);
   }
   static void destruct_ubanacLcLTPCObject(void *p) {
      typedef ::ubana::TPCObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ubana::TPCObject

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEubanacLcLTPCObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<ubana::TPCObject> : new ::art::Wrapper<ubana::TPCObject>;
   }
   static void *newArray_artcLcLWrapperlEubanacLcLTPCObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<ubana::TPCObject>[nElements] : new ::art::Wrapper<ubana::TPCObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEubanacLcLTPCObjectgR(void *p) {
      delete ((::art::Wrapper<ubana::TPCObject>*)p);
   }
   static void deleteArray_artcLcLWrapperlEubanacLcLTPCObjectgR(void *p) {
      delete [] ((::art::Wrapper<ubana::TPCObject>*)p);
   }
   static void destruct_artcLcLWrapperlEubanacLcLTPCObjectgR(void *p) {
      typedef ::art::Wrapper<ubana::TPCObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<ubana::TPCObject>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<ubana::TPCObject> > : new ::art::Wrapper<vector<ubana::TPCObject> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<ubana::TPCObject> >[nElements] : new ::art::Wrapper<vector<ubana::TPCObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<ubana::TPCObject> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<ubana::TPCObject> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEubanacLcLTPCObjectgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<ubana::TPCObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<ubana::TPCObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,recob::PFParticle,void> : new ::art::Assns<ubana::TPCObject,recob::PFParticle,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,recob::PFParticle,void>[nElements] : new ::art::Assns<ubana::TPCObject,recob::PFParticle,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(void *p) {
      delete ((::art::Assns<ubana::TPCObject,recob::PFParticle,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::TPCObject,recob::PFParticle,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgR(void *p) {
      typedef ::art::Assns<ubana::TPCObject,recob::PFParticle,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::TPCObject,recob::PFParticle,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::PFParticle,ubana::TPCObject,void> : new ::art::Assns<recob::PFParticle,ubana::TPCObject,void>;
   }
   static void *newArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::PFParticle,ubana::TPCObject,void>[nElements] : new ::art::Assns<recob::PFParticle,ubana::TPCObject,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete ((::art::Assns<recob::PFParticle,ubana::TPCObject,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete [] ((::art::Assns<recob::PFParticle,ubana::TPCObject,void>*)p);
   }
   static void destruct_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgR(void *p) {
      typedef ::art::Assns<recob::PFParticle,ubana::TPCObject,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<recob::PFParticle,ubana::TPCObject,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Track,ubana::TPCObject,void> : new ::art::Assns<recob::Track,ubana::TPCObject,void>;
   }
   static void *newArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Track,ubana::TPCObject,void>[nElements] : new ::art::Assns<recob::Track,ubana::TPCObject,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete ((::art::Assns<recob::Track,ubana::TPCObject,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete [] ((::art::Assns<recob::Track,ubana::TPCObject,void>*)p);
   }
   static void destruct_artcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgR(void *p) {
      typedef ::art::Assns<recob::Track,ubana::TPCObject,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<recob::Track,ubana::TPCObject,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,recob::Track,void> : new ::art::Assns<ubana::TPCObject,recob::Track,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,recob::Track,void>[nElements] : new ::art::Assns<ubana::TPCObject,recob::Track,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(void *p) {
      delete ((::art::Assns<ubana::TPCObject,recob::Track,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::TPCObject,recob::Track,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgR(void *p) {
      typedef ::art::Assns<ubana::TPCObject,recob::Track,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::TPCObject,recob::Track,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Shower,ubana::TPCObject,void> : new ::art::Assns<recob::Shower,ubana::TPCObject,void>;
   }
   static void *newArray_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Shower,ubana::TPCObject,void>[nElements] : new ::art::Assns<recob::Shower,ubana::TPCObject,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete ((::art::Assns<recob::Shower,ubana::TPCObject,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete [] ((::art::Assns<recob::Shower,ubana::TPCObject,void>*)p);
   }
   static void destruct_artcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgR(void *p) {
      typedef ::art::Assns<recob::Shower,ubana::TPCObject,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<recob::Shower,ubana::TPCObject,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,recob::Shower,void> : new ::art::Assns<ubana::TPCObject,recob::Shower,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,recob::Shower,void>[nElements] : new ::art::Assns<ubana::TPCObject,recob::Shower,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(void *p) {
      delete ((::art::Assns<ubana::TPCObject,recob::Shower,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::TPCObject,recob::Shower,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgR(void *p) {
      typedef ::art::Assns<ubana::TPCObject,recob::Shower,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::TPCObject,recob::Shower,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Vertex,ubana::TPCObject,void> : new ::art::Assns<recob::Vertex,ubana::TPCObject,void>;
   }
   static void *newArray_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Vertex,ubana::TPCObject,void>[nElements] : new ::art::Assns<recob::Vertex,ubana::TPCObject,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete ((::art::Assns<recob::Vertex,ubana::TPCObject,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete [] ((::art::Assns<recob::Vertex,ubana::TPCObject,void>*)p);
   }
   static void destruct_artcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgR(void *p) {
      typedef ::art::Assns<recob::Vertex,ubana::TPCObject,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<recob::Vertex,ubana::TPCObject,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,recob::Vertex,void> : new ::art::Assns<ubana::TPCObject,recob::Vertex,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,recob::Vertex,void>[nElements] : new ::art::Assns<ubana::TPCObject,recob::Vertex,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(void *p) {
      delete ((::art::Assns<ubana::TPCObject,recob::Vertex,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::TPCObject,recob::Vertex,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgR(void *p) {
      typedef ::art::Assns<ubana::TPCObject,recob::Vertex,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::TPCObject,recob::Vertex,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void> : new ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>[nElements] : new ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(void *p) {
      delete ((::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgR(void *p) {
      typedef ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::TPCObject,ubana::FlashMatch,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void> : new ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>[nElements] : new ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete ((::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgR(void *p) {
      typedef ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::FlashMatch,ubana::TPCObject,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,anab::CosmicTag,void> : new ::art::Assns<ubana::TPCObject,anab::CosmicTag,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,anab::CosmicTag,void>[nElements] : new ::art::Assns<ubana::TPCObject,anab::CosmicTag,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(void *p) {
      delete ((::art::Assns<ubana::TPCObject,anab::CosmicTag,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::TPCObject,anab::CosmicTag,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgR(void *p) {
      typedef ::art::Assns<ubana::TPCObject,anab::CosmicTag,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::TPCObject,anab::CosmicTag,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<anab::CosmicTag,ubana::TPCObject,void> : new ::art::Assns<anab::CosmicTag,ubana::TPCObject,void>;
   }
   static void *newArray_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<anab::CosmicTag,ubana::TPCObject,void>[nElements] : new ::art::Assns<anab::CosmicTag,ubana::TPCObject,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete ((::art::Assns<anab::CosmicTag,ubana::TPCObject,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete [] ((::art::Assns<anab::CosmicTag,ubana::TPCObject,void>*)p);
   }
   static void destruct_artcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgR(void *p) {
      typedef ::art::Assns<anab::CosmicTag,ubana::TPCObject,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<anab::CosmicTag,ubana::TPCObject,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> > : new ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> > : new ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >[nElements] : new ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> > : new ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >[nElements] : new ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLTrackcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> > : new ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLTrackcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> > : new ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >[nElements] : new ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLShowercOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> > : new ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLShowercOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> > : new ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >[nElements] : new ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLVertexcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> > : new ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOrecobcLcLVertexcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> > : new ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLFlashMatchcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> > : new ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLFlashMatchcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> > : new ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOanabcLcLCosmicTagcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> > : new ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >[nElements] : new ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEanabcLcLCosmicTagcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ubanacLcLMCGhost(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ubana::MCGhost : new ::ubana::MCGhost;
   }
   static void *newArray_ubanacLcLMCGhost(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ubana::MCGhost[nElements] : new ::ubana::MCGhost[nElements];
   }
   // Wrapper around operator delete
   static void delete_ubanacLcLMCGhost(void *p) {
      delete ((::ubana::MCGhost*)p);
   }
   static void deleteArray_ubanacLcLMCGhost(void *p) {
      delete [] ((::ubana::MCGhost*)p);
   }
   static void destruct_ubanacLcLMCGhost(void *p) {
      typedef ::ubana::MCGhost current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ubana::MCGhost

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEubanacLcLMCGhostgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<ubana::MCGhost> : new ::art::Wrapper<ubana::MCGhost>;
   }
   static void *newArray_artcLcLWrapperlEubanacLcLMCGhostgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<ubana::MCGhost>[nElements] : new ::art::Wrapper<ubana::MCGhost>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEubanacLcLMCGhostgR(void *p) {
      delete ((::art::Wrapper<ubana::MCGhost>*)p);
   }
   static void deleteArray_artcLcLWrapperlEubanacLcLMCGhostgR(void *p) {
      delete [] ((::art::Wrapper<ubana::MCGhost>*)p);
   }
   static void destruct_artcLcLWrapperlEubanacLcLMCGhostgR(void *p) {
      typedef ::art::Wrapper<ubana::MCGhost> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<ubana::MCGhost>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<ubana::MCGhost> > : new ::art::Wrapper<vector<ubana::MCGhost> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<ubana::MCGhost> >[nElements] : new ::art::Wrapper<vector<ubana::MCGhost> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<ubana::MCGhost> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<ubana::MCGhost> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEubanacLcLMCGhostgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<ubana::MCGhost> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<ubana::MCGhost> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::PFParticle,ubana::MCGhost,void> : new ::art::Assns<recob::PFParticle,ubana::MCGhost,void>;
   }
   static void *newArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::PFParticle,ubana::MCGhost,void>[nElements] : new ::art::Assns<recob::PFParticle,ubana::MCGhost,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(void *p) {
      delete ((::art::Assns<recob::PFParticle,ubana::MCGhost,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(void *p) {
      delete [] ((::art::Assns<recob::PFParticle,ubana::MCGhost,void>*)p);
   }
   static void destruct_artcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgR(void *p) {
      typedef ::art::Assns<recob::PFParticle,ubana::MCGhost,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<recob::PFParticle,ubana::MCGhost,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::MCGhost,recob::PFParticle,void> : new ::art::Assns<ubana::MCGhost,recob::PFParticle,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::MCGhost,recob::PFParticle,void>[nElements] : new ::art::Assns<ubana::MCGhost,recob::PFParticle,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(void *p) {
      delete ((::art::Assns<ubana::MCGhost,recob::PFParticle,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::MCGhost,recob::PFParticle,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgR(void *p) {
      typedef ::art::Assns<ubana::MCGhost,recob::PFParticle,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::MCGhost,recob::PFParticle,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<simb::MCParticle,ubana::MCGhost,void> : new ::art::Assns<simb::MCParticle,ubana::MCGhost,void>;
   }
   static void *newArray_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<simb::MCParticle,ubana::MCGhost,void>[nElements] : new ::art::Assns<simb::MCParticle,ubana::MCGhost,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(void *p) {
      delete ((::art::Assns<simb::MCParticle,ubana::MCGhost,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(void *p) {
      delete [] ((::art::Assns<simb::MCParticle,ubana::MCGhost,void>*)p);
   }
   static void destruct_artcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgR(void *p) {
      typedef ::art::Assns<simb::MCParticle,ubana::MCGhost,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<simb::MCParticle,ubana::MCGhost,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::MCGhost,simb::MCParticle,void> : new ::art::Assns<ubana::MCGhost,simb::MCParticle,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::MCGhost,simb::MCParticle,void>[nElements] : new ::art::Assns<ubana::MCGhost,simb::MCParticle,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(void *p) {
      delete ((::art::Assns<ubana::MCGhost,simb::MCParticle,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::MCGhost,simb::MCParticle,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgR(void *p) {
      typedef ::art::Assns<ubana::MCGhost,simb::MCParticle,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::MCGhost,simb::MCParticle,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> > : new ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >[nElements] : new ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLPFParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> > : new ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOrecobcLcLPFParticlecOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> > : new ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >[nElements] : new ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEsimbcLcLMCParticlecOubanacLcLMCGhostcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> > : new ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLMCGhostcOsimbcLcLMCParticlecOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_UBXSecEvent(void *p) {
      return  p ? new(p) ::UBXSecEvent : new ::UBXSecEvent;
   }
   static void *newArray_UBXSecEvent(Long_t nElements, void *p) {
      return p ? new(p) ::UBXSecEvent[nElements] : new ::UBXSecEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_UBXSecEvent(void *p) {
      delete ((::UBXSecEvent*)p);
   }
   static void deleteArray_UBXSecEvent(void *p) {
      delete [] ((::UBXSecEvent*)p);
   }
   static void destruct_UBXSecEvent(void *p) {
      typedef ::UBXSecEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UBXSecEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_ubanacLcLSelectionResult(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ubana::SelectionResult : new ::ubana::SelectionResult;
   }
   static void *newArray_ubanacLcLSelectionResult(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ubana::SelectionResult[nElements] : new ::ubana::SelectionResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_ubanacLcLSelectionResult(void *p) {
      delete ((::ubana::SelectionResult*)p);
   }
   static void deleteArray_ubanacLcLSelectionResult(void *p) {
      delete [] ((::ubana::SelectionResult*)p);
   }
   static void destruct_ubanacLcLSelectionResult(void *p) {
      typedef ::ubana::SelectionResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ubana::SelectionResult

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEubanacLcLSelectionResultgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<ubana::SelectionResult> : new ::art::Wrapper<ubana::SelectionResult>;
   }
   static void *newArray_artcLcLWrapperlEubanacLcLSelectionResultgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<ubana::SelectionResult>[nElements] : new ::art::Wrapper<ubana::SelectionResult>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEubanacLcLSelectionResultgR(void *p) {
      delete ((::art::Wrapper<ubana::SelectionResult>*)p);
   }
   static void deleteArray_artcLcLWrapperlEubanacLcLSelectionResultgR(void *p) {
      delete [] ((::art::Wrapper<ubana::SelectionResult>*)p);
   }
   static void destruct_artcLcLWrapperlEubanacLcLSelectionResultgR(void *p) {
      typedef ::art::Wrapper<ubana::SelectionResult> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<ubana::SelectionResult>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<ubana::SelectionResult> > : new ::art::Wrapper<vector<ubana::SelectionResult> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<ubana::SelectionResult> >[nElements] : new ::art::Wrapper<vector<ubana::SelectionResult> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<ubana::SelectionResult> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<ubana::SelectionResult> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEubanacLcLSelectionResultgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<ubana::SelectionResult> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<ubana::SelectionResult> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void> : new ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>[nElements] : new ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(void *p) {
      delete ((::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgR(void *p) {
      typedef ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::TPCObject,ubana::SelectionResult,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void> : new ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>;
   }
   static void *newArray_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>[nElements] : new ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete ((::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>*)p);
   }
   static void deleteArray_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(void *p) {
      delete [] ((::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>*)p);
   }
   static void destruct_artcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgR(void *p) {
      typedef ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<ubana::SelectionResult,ubana::TPCObject,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> > : new ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLTPCObjectcOubanacLcLSelectionResultcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> > : new ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >[nElements] : new ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslEubanacLcLSelectionResultcOubanacLcLTPCObjectcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >

namespace ROOT {
   static TClass *vectorlEubanacLcLTPCObjectgR_Dictionary();
   static void vectorlEubanacLcLTPCObjectgR_TClassManip(TClass*);
   static void *new_vectorlEubanacLcLTPCObjectgR(void *p = 0);
   static void *newArray_vectorlEubanacLcLTPCObjectgR(Long_t size, void *p);
   static void delete_vectorlEubanacLcLTPCObjectgR(void *p);
   static void deleteArray_vectorlEubanacLcLTPCObjectgR(void *p);
   static void destruct_vectorlEubanacLcLTPCObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ubana::TPCObject>*)
   {
      vector<ubana::TPCObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ubana::TPCObject>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ubana::TPCObject>", -2, "invalid", 55,
                  typeid(vector<ubana::TPCObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEubanacLcLTPCObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ubana::TPCObject>) );
      instance.SetNew(&new_vectorlEubanacLcLTPCObjectgR);
      instance.SetNewArray(&newArray_vectorlEubanacLcLTPCObjectgR);
      instance.SetDelete(&delete_vectorlEubanacLcLTPCObjectgR);
      instance.SetDeleteArray(&deleteArray_vectorlEubanacLcLTPCObjectgR);
      instance.SetDestructor(&destruct_vectorlEubanacLcLTPCObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ubana::TPCObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<ubana::TPCObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEubanacLcLTPCObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ubana::TPCObject>*)0x0)->GetClass();
      vectorlEubanacLcLTPCObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEubanacLcLTPCObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEubanacLcLTPCObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ubana::TPCObject> : new vector<ubana::TPCObject>;
   }
   static void *newArray_vectorlEubanacLcLTPCObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ubana::TPCObject>[nElements] : new vector<ubana::TPCObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEubanacLcLTPCObjectgR(void *p) {
      delete ((vector<ubana::TPCObject>*)p);
   }
   static void deleteArray_vectorlEubanacLcLTPCObjectgR(void *p) {
      delete [] ((vector<ubana::TPCObject>*)p);
   }
   static void destruct_vectorlEubanacLcLTPCObjectgR(void *p) {
      typedef vector<ubana::TPCObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ubana::TPCObject>

namespace ROOT {
   static TClass *vectorlEubanacLcLSelectionResultgR_Dictionary();
   static void vectorlEubanacLcLSelectionResultgR_TClassManip(TClass*);
   static void *new_vectorlEubanacLcLSelectionResultgR(void *p = 0);
   static void *newArray_vectorlEubanacLcLSelectionResultgR(Long_t size, void *p);
   static void delete_vectorlEubanacLcLSelectionResultgR(void *p);
   static void deleteArray_vectorlEubanacLcLSelectionResultgR(void *p);
   static void destruct_vectorlEubanacLcLSelectionResultgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ubana::SelectionResult>*)
   {
      vector<ubana::SelectionResult> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ubana::SelectionResult>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ubana::SelectionResult>", -2, "invalid", 96,
                  typeid(vector<ubana::SelectionResult>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEubanacLcLSelectionResultgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ubana::SelectionResult>) );
      instance.SetNew(&new_vectorlEubanacLcLSelectionResultgR);
      instance.SetNewArray(&newArray_vectorlEubanacLcLSelectionResultgR);
      instance.SetDelete(&delete_vectorlEubanacLcLSelectionResultgR);
      instance.SetDeleteArray(&deleteArray_vectorlEubanacLcLSelectionResultgR);
      instance.SetDestructor(&destruct_vectorlEubanacLcLSelectionResultgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ubana::SelectionResult> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<ubana::SelectionResult>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEubanacLcLSelectionResultgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ubana::SelectionResult>*)0x0)->GetClass();
      vectorlEubanacLcLSelectionResultgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEubanacLcLSelectionResultgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEubanacLcLSelectionResultgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ubana::SelectionResult> : new vector<ubana::SelectionResult>;
   }
   static void *newArray_vectorlEubanacLcLSelectionResultgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ubana::SelectionResult>[nElements] : new vector<ubana::SelectionResult>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEubanacLcLSelectionResultgR(void *p) {
      delete ((vector<ubana::SelectionResult>*)p);
   }
   static void deleteArray_vectorlEubanacLcLSelectionResultgR(void *p) {
      delete [] ((vector<ubana::SelectionResult>*)p);
   }
   static void destruct_vectorlEubanacLcLSelectionResultgR(void *p) {
      typedef vector<ubana::SelectionResult> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ubana::SelectionResult>

namespace ROOT {
   static TClass *vectorlEubanacLcLMCGhostgR_Dictionary();
   static void vectorlEubanacLcLMCGhostgR_TClassManip(TClass*);
   static void *new_vectorlEubanacLcLMCGhostgR(void *p = 0);
   static void *newArray_vectorlEubanacLcLMCGhostgR(Long_t size, void *p);
   static void delete_vectorlEubanacLcLMCGhostgR(void *p);
   static void deleteArray_vectorlEubanacLcLMCGhostgR(void *p);
   static void destruct_vectorlEubanacLcLMCGhostgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ubana::MCGhost>*)
   {
      vector<ubana::MCGhost> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ubana::MCGhost>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ubana::MCGhost>", -2, "invalid", 84,
                  typeid(vector<ubana::MCGhost>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEubanacLcLMCGhostgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ubana::MCGhost>) );
      instance.SetNew(&new_vectorlEubanacLcLMCGhostgR);
      instance.SetNewArray(&newArray_vectorlEubanacLcLMCGhostgR);
      instance.SetDelete(&delete_vectorlEubanacLcLMCGhostgR);
      instance.SetDeleteArray(&deleteArray_vectorlEubanacLcLMCGhostgR);
      instance.SetDestructor(&destruct_vectorlEubanacLcLMCGhostgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ubana::MCGhost> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<ubana::MCGhost>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEubanacLcLMCGhostgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ubana::MCGhost>*)0x0)->GetClass();
      vectorlEubanacLcLMCGhostgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEubanacLcLMCGhostgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEubanacLcLMCGhostgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ubana::MCGhost> : new vector<ubana::MCGhost>;
   }
   static void *newArray_vectorlEubanacLcLMCGhostgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ubana::MCGhost>[nElements] : new vector<ubana::MCGhost>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEubanacLcLMCGhostgR(void *p) {
      delete ((vector<ubana::MCGhost>*)p);
   }
   static void deleteArray_vectorlEubanacLcLMCGhostgR(void *p) {
      delete [] ((vector<ubana::MCGhost>*)p);
   }
   static void destruct_vectorlEubanacLcLMCGhostgR(void *p) {
      typedef vector<ubana::MCGhost> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ubana::MCGhost>

namespace ROOT {
   static TClass *vectorlEubanacLcLFlashMatchgR_Dictionary();
   static void vectorlEubanacLcLFlashMatchgR_TClassManip(TClass*);
   static void *new_vectorlEubanacLcLFlashMatchgR(void *p = 0);
   static void *newArray_vectorlEubanacLcLFlashMatchgR(Long_t size, void *p);
   static void delete_vectorlEubanacLcLFlashMatchgR(void *p);
   static void deleteArray_vectorlEubanacLcLFlashMatchgR(void *p);
   static void destruct_vectorlEubanacLcLFlashMatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ubana::FlashMatch>*)
   {
      vector<ubana::FlashMatch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ubana::FlashMatch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ubana::FlashMatch>", -2, "invalid", 40,
                  typeid(vector<ubana::FlashMatch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEubanacLcLFlashMatchgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ubana::FlashMatch>) );
      instance.SetNew(&new_vectorlEubanacLcLFlashMatchgR);
      instance.SetNewArray(&newArray_vectorlEubanacLcLFlashMatchgR);
      instance.SetDelete(&delete_vectorlEubanacLcLFlashMatchgR);
      instance.SetDeleteArray(&deleteArray_vectorlEubanacLcLFlashMatchgR);
      instance.SetDestructor(&destruct_vectorlEubanacLcLFlashMatchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ubana::FlashMatch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<ubana::FlashMatch>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEubanacLcLFlashMatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ubana::FlashMatch>*)0x0)->GetClass();
      vectorlEubanacLcLFlashMatchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEubanacLcLFlashMatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEubanacLcLFlashMatchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ubana::FlashMatch> : new vector<ubana::FlashMatch>;
   }
   static void *newArray_vectorlEubanacLcLFlashMatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ubana::FlashMatch>[nElements] : new vector<ubana::FlashMatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEubanacLcLFlashMatchgR(void *p) {
      delete ((vector<ubana::FlashMatch>*)p);
   }
   static void deleteArray_vectorlEubanacLcLFlashMatchgR(void *p) {
      delete [] ((vector<ubana::FlashMatch>*)p);
   }
   static void destruct_vectorlEubanacLcLFlashMatchgR(void *p) {
      typedef vector<ubana::FlashMatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ubana::FlashMatch>

namespace ROOT {
   static TClass *maplEstringcOboolgR_Dictionary();
   static void maplEstringcOboolgR_TClassManip(TClass*);
   static void *new_maplEstringcOboolgR(void *p = 0);
   static void *newArray_maplEstringcOboolgR(Long_t size, void *p);
   static void delete_maplEstringcOboolgR(void *p);
   static void deleteArray_maplEstringcOboolgR(void *p);
   static void destruct_maplEstringcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,bool>*)
   {
      map<string,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,bool>", -2, "map", 96,
                  typeid(map<string,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,bool>) );
      instance.SetNew(&new_maplEstringcOboolgR);
      instance.SetNewArray(&newArray_maplEstringcOboolgR);
      instance.SetDelete(&delete_maplEstringcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOboolgR);
      instance.SetDestructor(&destruct_maplEstringcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,bool>*)0x0)->GetClass();
      maplEstringcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,bool> : new map<string,bool>;
   }
   static void *newArray_maplEstringcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,bool>[nElements] : new map<string,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOboolgR(void *p) {
      delete ((map<string,bool>*)p);
   }
   static void deleteArray_maplEstringcOboolgR(void *p) {
      delete [] ((map<string,bool>*)p);
   }
   static void destruct_maplEstringcOboolgR(void *p) {
      typedef map<string,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,bool>

namespace {
  void TriggerDictionaryInitialization_libuboone_UBXSec_DataTypes_dict_Impl() {
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
"/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/UBXSec/DataTypes",
"/cvmfs/larsoft.opensciencegrid.org/products/pandora/v03_00_00/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/cvmfs/larsoft.opensciencegrid.org/products/larpandoracontent/v03_07_02_05/include",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/UBXSec/DataTypes/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libuboone_UBXSec_DataTypes_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace anab{class __attribute__((annotate("$clingAutoload$lardataobj/AnalysisBase/FlashMatch.h")))  FlashMatch;}
namespace recob{class __attribute__((annotate("$clingAutoload$lardataobj/RecoBase/PFParticle.h")))  PFParticle;}
namespace art{template <typename L, typename R, typename D = void> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Assns.h")))  Assns;
}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
namespace ubana{class __attribute__((annotate("$clingAutoload$uboone/UBXSec/DataTypes/FlashMatch.h")))  FlashMatch;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace recob{class __attribute__((annotate("$clingAutoload$lardataobj/RecoBase/Track.h")))  Track;}
namespace ubana{class __attribute__((annotate("$clingAutoload$uboone/UBXSec/DataTypes/TPCObject.h")))  TPCObject;}
namespace recob{class __attribute__((annotate("$clingAutoload$uboone/UBXSec/DataTypes/TPCObject.h")))  Shower;}
namespace recob{class __attribute__((annotate("$clingAutoload$lardataobj/RecoBase/Vertex.h")))  Vertex;}
namespace anab{class __attribute__((annotate("$clingAutoload$lardataobj/AnalysisBase/CosmicTag.h")))  CosmicTag;}
namespace ubana{class __attribute__((annotate("$clingAutoload$uboone/UBXSec/DataTypes/MCGhost.h")))  MCGhost;}
namespace simb{class __attribute__((annotate("$clingAutoload$nusimdata/SimulationBase/MCParticle.h")))  MCParticle;}
class __attribute__((annotate("$clingAutoload$uboone/UBXSec/DataTypes/UBXSecEvent.h")))  UBXSecEvent;
namespace ubana{class __attribute__((annotate("$clingAutoload$uboone/UBXSec/DataTypes/SelectionResult.h")))  SelectionResult;}
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libuboone_UBXSec_DataTypes_dict dictionary payload"

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

#include "lardataobj/RecoBase/Track.h"
#include "lardataobj/RecoBase/PFParticle.h"
#include "lardataobj/RecoBase/Vertex.h"
#include "lardataobj/AnalysisBase/FlashMatch.h"

#include "uboone/UBXSec/DataTypes/FlashMatch.h"
#include "uboone/UBXSec/DataTypes/TPCObject.h"
#include "uboone/UBXSec/DataTypes/MCGhost.h"
#include "lardataobj/AnalysisBase/CosmicTag.h"

#include "nusimdata/SimulationBase/MCParticle.h"

#include "uboone/UBXSec/DataTypes/UBXSecEvent.h"

#include "uboone/UBXSec/DataTypes/SelectionResult.h"


#include <vector>

template class art::Assns<anab::FlashMatch,recob::PFParticle>;
template class art::Assns<recob::PFParticle,anab::FlashMatch>;

template class art::Wrapper<art::Assns<anab::FlashMatch,  recob::PFParticle>>;
template class art::Wrapper<art::Assns<recob::PFParticle, anab::FlashMatch >>;


template class std::vector<ubana::FlashMatch>;

template class art::Assns<ubana::FlashMatch,recob::PFParticle>;
template class art::Assns<recob::PFParticle,ubana::FlashMatch>;
template class art::Assns<ubana::FlashMatch,recob::Track,void>;
template class art::Assns<recob::Track,ubana::FlashMatch,void>;

template class art::Wrapper<art::Assns<ubana::FlashMatch,  recob::PFParticle>>;
template class art::Wrapper<art::Assns<recob::PFParticle, ubana::FlashMatch >>;
template class art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >;
template class art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >;




template class std::vector<ubana::TPCObject>;

template class art::Assns<ubana::TPCObject,recob::PFParticle>;
template class art::Assns<recob::PFParticle,ubana::TPCObject>;
template class art::Assns<ubana::TPCObject,recob::Track,void>;
template class art::Assns<recob::Track,ubana::TPCObject,void>;
template class art::Assns<ubana::TPCObject,recob::Shower,void>;
template class art::Assns<recob::Shower,ubana::TPCObject,void>;
template class art::Assns<ubana::TPCObject,recob::Vertex,void>;
template class art::Assns<recob::Vertex,ubana::TPCObject,void>;
template class art::Assns<ubana::TPCObject,ubana::FlashMatch,void>;
template class art::Assns<ubana::FlashMatch,ubana::TPCObject,void>;
template class art::Assns<ubana::TPCObject,anab::CosmicTag,void>;
template class art::Assns<anab::CosmicTag,ubana::TPCObject,void>;

template class art::Wrapper<art::Assns<ubana::TPCObject,  recob::PFParticle>>;
template class art::Wrapper<art::Assns<recob::PFParticle, ubana::TPCObject >>;
template class art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >;
template class art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >;
template class art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >;
template class art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >;
template class art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >;
template class art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >;
template class art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >;
template class art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >;
template class art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >;
template class art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >;


template class std::vector<ubana::MCGhost>;

template class art::Assns<simb::MCParticle,ubana::MCGhost>;
template class art::Assns<ubana::MCGhost,simb::MCParticle>;
template class art::Assns<recob::PFParticle,ubana::MCGhost>;
template class art::Assns<ubana::MCGhost,recob::PFParticle>;
template class art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost>>;
template class art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle>>;
template class art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost>>;
template class art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle>>;


template class std::vector<ubana::SelectionResult>;
template class art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >;
template class art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >;


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"UBXSecEvent", payloadCode, "@",
"art::Assns<anab::CosmicTag,ubana::TPCObject,void>", payloadCode, "@",
"art::Assns<anab::FlashMatch,recob::PFParticle,void>", payloadCode, "@",
"art::Assns<recob::PFParticle,anab::FlashMatch,void>", payloadCode, "@",
"art::Assns<recob::PFParticle,ubana::FlashMatch,void>", payloadCode, "@",
"art::Assns<recob::PFParticle,ubana::MCGhost,void>", payloadCode, "@",
"art::Assns<recob::PFParticle,ubana::TPCObject,void>", payloadCode, "@",
"art::Assns<recob::Shower,ubana::TPCObject,void>", payloadCode, "@",
"art::Assns<recob::Track,ubana::FlashMatch,void>", payloadCode, "@",
"art::Assns<recob::Track,ubana::TPCObject,void>", payloadCode, "@",
"art::Assns<recob::Vertex,ubana::TPCObject,void>", payloadCode, "@",
"art::Assns<simb::MCParticle,ubana::MCGhost,void>", payloadCode, "@",
"art::Assns<ubana::FlashMatch,recob::PFParticle,void>", payloadCode, "@",
"art::Assns<ubana::FlashMatch,recob::Track,void>", payloadCode, "@",
"art::Assns<ubana::FlashMatch,ubana::TPCObject,void>", payloadCode, "@",
"art::Assns<ubana::MCGhost,recob::PFParticle,void>", payloadCode, "@",
"art::Assns<ubana::MCGhost,simb::MCParticle,void>", payloadCode, "@",
"art::Assns<ubana::SelectionResult,ubana::TPCObject,void>", payloadCode, "@",
"art::Assns<ubana::TPCObject,anab::CosmicTag,void>", payloadCode, "@",
"art::Assns<ubana::TPCObject,recob::PFParticle,void>", payloadCode, "@",
"art::Assns<ubana::TPCObject,recob::Shower,void>", payloadCode, "@",
"art::Assns<ubana::TPCObject,recob::Track,void>", payloadCode, "@",
"art::Assns<ubana::TPCObject,recob::Vertex,void>", payloadCode, "@",
"art::Assns<ubana::TPCObject,ubana::FlashMatch,void>", payloadCode, "@",
"art::Assns<ubana::TPCObject,ubana::SelectionResult,void>", payloadCode, "@",
"art::Wrapper<art::Assns<anab::CosmicTag,ubana::TPCObject,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<anab::FlashMatch,recob::PFParticle,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<recob::PFParticle,anab::FlashMatch,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<recob::PFParticle,ubana::FlashMatch,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<recob::PFParticle,ubana::MCGhost,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<recob::PFParticle,ubana::TPCObject,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<recob::Shower,ubana::TPCObject,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<recob::Track,ubana::FlashMatch,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<recob::Track,ubana::TPCObject,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<recob::Vertex,ubana::TPCObject,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<simb::MCParticle,ubana::MCGhost,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::FlashMatch,recob::PFParticle,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::FlashMatch,recob::Track,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::FlashMatch,ubana::TPCObject,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::MCGhost,recob::PFParticle,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::MCGhost,simb::MCParticle,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::SelectionResult,ubana::TPCObject,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::TPCObject,anab::CosmicTag,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::TPCObject,recob::PFParticle,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::TPCObject,recob::Shower,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::TPCObject,recob::Track,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::TPCObject,recob::Vertex,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::TPCObject,ubana::FlashMatch,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<ubana::TPCObject,ubana::SelectionResult,void> >", payloadCode, "@",
"art::Wrapper<std::vector<ubana::FlashMatch> >", payloadCode, "@",
"art::Wrapper<std::vector<ubana::MCGhost> >", payloadCode, "@",
"art::Wrapper<std::vector<ubana::SelectionResult> >", payloadCode, "@",
"art::Wrapper<std::vector<ubana::TPCObject> >", payloadCode, "@",
"art::Wrapper<ubana::FlashMatch>", payloadCode, "@",
"art::Wrapper<ubana::MCGhost>", payloadCode, "@",
"art::Wrapper<ubana::SelectionResult>", payloadCode, "@",
"art::Wrapper<ubana::TPCObject>", payloadCode, "@",
"art::Wrapper<vector<ubana::FlashMatch> >", payloadCode, "@",
"art::Wrapper<vector<ubana::MCGhost> >", payloadCode, "@",
"art::Wrapper<vector<ubana::SelectionResult> >", payloadCode, "@",
"art::Wrapper<vector<ubana::TPCObject> >", payloadCode, "@",
"ubana::FlashMatch", payloadCode, "@",
"ubana::MCGhost", payloadCode, "@",
"ubana::SelectionResult", payloadCode, "@",
"ubana::TPCObject", payloadCode, "@",
"ubana::TPCObjectOrigin", payloadCode, "@",
"ubana::TPCObjectOriginExtra", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libuboone_UBXSec_DataTypes_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libuboone_UBXSec_DataTypes_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libuboone_UBXSec_DataTypes_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libuboone_UBXSec_DataTypes_dict() {
  TriggerDictionaryInitialization_libuboone_UBXSec_DataTypes_dict_Impl();
}
