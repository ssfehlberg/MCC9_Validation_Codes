// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME uboone_OpticalDetectorAna_OpticalSubEvents_dict

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
#include "/uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/OpticalDetectorAna/OpticalSubEvents/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *subeventcLcLSubEvent_Dictionary();
   static void subeventcLcLSubEvent_TClassManip(TClass*);
   static void *new_subeventcLcLSubEvent(void *p = 0);
   static void *newArray_subeventcLcLSubEvent(Long_t size, void *p);
   static void delete_subeventcLcLSubEvent(void *p);
   static void deleteArray_subeventcLcLSubEvent(void *p);
   static void destruct_subeventcLcLSubEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::subevent::SubEvent*)
   {
      ::subevent::SubEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::subevent::SubEvent));
      static ::ROOT::TGenericClassInfo 
         instance("subevent::SubEvent", "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEvent.hh", 16,
                  typeid(::subevent::SubEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &subeventcLcLSubEvent_Dictionary, isa_proxy, 0,
                  sizeof(::subevent::SubEvent) );
      instance.SetNew(&new_subeventcLcLSubEvent);
      instance.SetNewArray(&newArray_subeventcLcLSubEvent);
      instance.SetDelete(&delete_subeventcLcLSubEvent);
      instance.SetDeleteArray(&deleteArray_subeventcLcLSubEvent);
      instance.SetDestructor(&destruct_subeventcLcLSubEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::subevent::SubEvent*)
   {
      return GenerateInitInstanceLocal((::subevent::SubEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::subevent::SubEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *subeventcLcLSubEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::subevent::SubEvent*)0x0)->GetClass();
      subeventcLcLSubEvent_TClassManip(theClass);
   return theClass;
   }

   static void subeventcLcLSubEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *subeventcLcLFlash_Dictionary();
   static void subeventcLcLFlash_TClassManip(TClass*);
   static void *new_subeventcLcLFlash(void *p = 0);
   static void *newArray_subeventcLcLFlash(Long_t size, void *p);
   static void delete_subeventcLcLFlash(void *p);
   static void deleteArray_subeventcLcLFlash(void *p);
   static void destruct_subeventcLcLFlash(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::subevent::Flash*)
   {
      ::subevent::Flash *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::subevent::Flash));
      static ::ROOT::TGenericClassInfo 
         instance("subevent::Flash", "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/Flash.hh", 13,
                  typeid(::subevent::Flash), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &subeventcLcLFlash_Dictionary, isa_proxy, 0,
                  sizeof(::subevent::Flash) );
      instance.SetNew(&new_subeventcLcLFlash);
      instance.SetNewArray(&newArray_subeventcLcLFlash);
      instance.SetDelete(&delete_subeventcLcLFlash);
      instance.SetDeleteArray(&deleteArray_subeventcLcLFlash);
      instance.SetDestructor(&destruct_subeventcLcLFlash);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::subevent::Flash*)
   {
      return GenerateInitInstanceLocal((::subevent::Flash*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::subevent::Flash*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *subeventcLcLFlash_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::subevent::Flash*)0x0)->GetClass();
      subeventcLcLFlash_TClassManip(theClass);
   return theClass;
   }

   static void subeventcLcLFlash_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *subeventcLcLFlashList_Dictionary();
   static void subeventcLcLFlashList_TClassManip(TClass*);
   static void *new_subeventcLcLFlashList(void *p = 0);
   static void *newArray_subeventcLcLFlashList(Long_t size, void *p);
   static void delete_subeventcLcLFlashList(void *p);
   static void deleteArray_subeventcLcLFlashList(void *p);
   static void destruct_subeventcLcLFlashList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::subevent::FlashList*)
   {
      ::subevent::FlashList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::subevent::FlashList));
      static ::ROOT::TGenericClassInfo 
         instance("subevent::FlashList", "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/FlashList.hh", 16,
                  typeid(::subevent::FlashList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &subeventcLcLFlashList_Dictionary, isa_proxy, 0,
                  sizeof(::subevent::FlashList) );
      instance.SetNew(&new_subeventcLcLFlashList);
      instance.SetNewArray(&newArray_subeventcLcLFlashList);
      instance.SetDelete(&delete_subeventcLcLFlashList);
      instance.SetDeleteArray(&deleteArray_subeventcLcLFlashList);
      instance.SetDestructor(&destruct_subeventcLcLFlashList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::subevent::FlashList*)
   {
      return GenerateInitInstanceLocal((::subevent::FlashList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::subevent::FlashList*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *subeventcLcLFlashList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::subevent::FlashList*)0x0)->GetClass();
      subeventcLcLFlashList_TClassManip(theClass);
   return theClass;
   }

   static void subeventcLcLFlashList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *subeventcLcLSubEventList_Dictionary();
   static void subeventcLcLSubEventList_TClassManip(TClass*);
   static void *new_subeventcLcLSubEventList(void *p = 0);
   static void *newArray_subeventcLcLSubEventList(Long_t size, void *p);
   static void delete_subeventcLcLSubEventList(void *p);
   static void deleteArray_subeventcLcLSubEventList(void *p);
   static void destruct_subeventcLcLSubEventList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::subevent::SubEventList*)
   {
      ::subevent::SubEventList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::subevent::SubEventList));
      static ::ROOT::TGenericClassInfo 
         instance("subevent::SubEventList", "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEventList.hh", 18,
                  typeid(::subevent::SubEventList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &subeventcLcLSubEventList_Dictionary, isa_proxy, 0,
                  sizeof(::subevent::SubEventList) );
      instance.SetNew(&new_subeventcLcLSubEventList);
      instance.SetNewArray(&newArray_subeventcLcLSubEventList);
      instance.SetDelete(&delete_subeventcLcLSubEventList);
      instance.SetDeleteArray(&deleteArray_subeventcLcLSubEventList);
      instance.SetDestructor(&destruct_subeventcLcLSubEventList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::subevent::SubEventList*)
   {
      return GenerateInitInstanceLocal((::subevent::SubEventList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::subevent::SubEventList*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *subeventcLcLSubEventList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::subevent::SubEventList*)0x0)->GetClass();
      subeventcLcLSubEventList_TClassManip(theClass);
   return theClass;
   }

   static void subeventcLcLSubEventList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<subevent::SubEvent> >*)
   {
      ::art::Wrapper<vector<subevent::SubEvent> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<subevent::SubEvent> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<subevent::SubEvent> >", ::art::Wrapper<vector<subevent::SubEvent> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<subevent::SubEvent> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<subevent::SubEvent> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<subevent::SubEvent> >","art::Wrapper<std::vector<subevent::SubEvent> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<subevent::SubEvent> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<subevent::SubEvent> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<subevent::SubEvent> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<subevent::SubEvent> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEsubeventcLcLFlashListgR_Dictionary();
   static void artcLcLWrapperlEsubeventcLcLFlashListgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEsubeventcLcLFlashListgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEsubeventcLcLFlashListgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEsubeventcLcLFlashListgR(void *p);
   static void deleteArray_artcLcLWrapperlEsubeventcLcLFlashListgR(void *p);
   static void destruct_artcLcLWrapperlEsubeventcLcLFlashListgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<subevent::FlashList>*)
   {
      ::art::Wrapper<subevent::FlashList> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<subevent::FlashList>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<subevent::FlashList>", ::art::Wrapper<subevent::FlashList>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<subevent::FlashList>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEsubeventcLcLFlashListgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<subevent::FlashList>) );
      instance.SetNew(&new_artcLcLWrapperlEsubeventcLcLFlashListgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEsubeventcLcLFlashListgR);
      instance.SetDelete(&delete_artcLcLWrapperlEsubeventcLcLFlashListgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEsubeventcLcLFlashListgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEsubeventcLcLFlashListgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<subevent::FlashList>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<subevent::FlashList>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<subevent::FlashList>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEsubeventcLcLFlashListgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<subevent::FlashList>*)0x0)->GetClass();
      artcLcLWrapperlEsubeventcLcLFlashListgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEsubeventcLcLFlashListgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_subeventcLcLSubEvent(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subevent::SubEvent : new ::subevent::SubEvent;
   }
   static void *newArray_subeventcLcLSubEvent(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subevent::SubEvent[nElements] : new ::subevent::SubEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_subeventcLcLSubEvent(void *p) {
      delete ((::subevent::SubEvent*)p);
   }
   static void deleteArray_subeventcLcLSubEvent(void *p) {
      delete [] ((::subevent::SubEvent*)p);
   }
   static void destruct_subeventcLcLSubEvent(void *p) {
      typedef ::subevent::SubEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::subevent::SubEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_subeventcLcLFlash(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subevent::Flash : new ::subevent::Flash;
   }
   static void *newArray_subeventcLcLFlash(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subevent::Flash[nElements] : new ::subevent::Flash[nElements];
   }
   // Wrapper around operator delete
   static void delete_subeventcLcLFlash(void *p) {
      delete ((::subevent::Flash*)p);
   }
   static void deleteArray_subeventcLcLFlash(void *p) {
      delete [] ((::subevent::Flash*)p);
   }
   static void destruct_subeventcLcLFlash(void *p) {
      typedef ::subevent::Flash current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::subevent::Flash

namespace ROOT {
   // Wrappers around operator new
   static void *new_subeventcLcLFlashList(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subevent::FlashList : new ::subevent::FlashList;
   }
   static void *newArray_subeventcLcLFlashList(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subevent::FlashList[nElements] : new ::subevent::FlashList[nElements];
   }
   // Wrapper around operator delete
   static void delete_subeventcLcLFlashList(void *p) {
      delete ((::subevent::FlashList*)p);
   }
   static void deleteArray_subeventcLcLFlashList(void *p) {
      delete [] ((::subevent::FlashList*)p);
   }
   static void destruct_subeventcLcLFlashList(void *p) {
      typedef ::subevent::FlashList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::subevent::FlashList

namespace ROOT {
   // Wrappers around operator new
   static void *new_subeventcLcLSubEventList(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subevent::SubEventList : new ::subevent::SubEventList;
   }
   static void *newArray_subeventcLcLSubEventList(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subevent::SubEventList[nElements] : new ::subevent::SubEventList[nElements];
   }
   // Wrapper around operator delete
   static void delete_subeventcLcLSubEventList(void *p) {
      delete ((::subevent::SubEventList*)p);
   }
   static void deleteArray_subeventcLcLSubEventList(void *p) {
      delete [] ((::subevent::SubEventList*)p);
   }
   static void destruct_subeventcLcLSubEventList(void *p) {
      typedef ::subevent::SubEventList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::subevent::SubEventList

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<subevent::SubEvent> > : new ::art::Wrapper<vector<subevent::SubEvent> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<subevent::SubEvent> >[nElements] : new ::art::Wrapper<vector<subevent::SubEvent> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<subevent::SubEvent> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<subevent::SubEvent> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEsubeventcLcLSubEventgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<subevent::SubEvent> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<subevent::SubEvent> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEsubeventcLcLFlashListgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<subevent::FlashList> : new ::art::Wrapper<subevent::FlashList>;
   }
   static void *newArray_artcLcLWrapperlEsubeventcLcLFlashListgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<subevent::FlashList>[nElements] : new ::art::Wrapper<subevent::FlashList>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEsubeventcLcLFlashListgR(void *p) {
      delete ((::art::Wrapper<subevent::FlashList>*)p);
   }
   static void deleteArray_artcLcLWrapperlEsubeventcLcLFlashListgR(void *p) {
      delete [] ((::art::Wrapper<subevent::FlashList>*)p);
   }
   static void destruct_artcLcLWrapperlEsubeventcLcLFlashListgR(void *p) {
      typedef ::art::Wrapper<subevent::FlashList> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<subevent::FlashList>

namespace ROOT {
   static TClass *vectorlEsubeventcLcLSubEventgR_Dictionary();
   static void vectorlEsubeventcLcLSubEventgR_TClassManip(TClass*);
   static void *new_vectorlEsubeventcLcLSubEventgR(void *p = 0);
   static void *newArray_vectorlEsubeventcLcLSubEventgR(Long_t size, void *p);
   static void delete_vectorlEsubeventcLcLSubEventgR(void *p);
   static void deleteArray_vectorlEsubeventcLcLSubEventgR(void *p);
   static void destruct_vectorlEsubeventcLcLSubEventgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<subevent::SubEvent>*)
   {
      vector<subevent::SubEvent> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<subevent::SubEvent>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<subevent::SubEvent>", -2, "vector", 214,
                  typeid(vector<subevent::SubEvent>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEsubeventcLcLSubEventgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<subevent::SubEvent>) );
      instance.SetNew(&new_vectorlEsubeventcLcLSubEventgR);
      instance.SetNewArray(&newArray_vectorlEsubeventcLcLSubEventgR);
      instance.SetDelete(&delete_vectorlEsubeventcLcLSubEventgR);
      instance.SetDeleteArray(&deleteArray_vectorlEsubeventcLcLSubEventgR);
      instance.SetDestructor(&destruct_vectorlEsubeventcLcLSubEventgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<subevent::SubEvent> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<subevent::SubEvent>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEsubeventcLcLSubEventgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<subevent::SubEvent>*)0x0)->GetClass();
      vectorlEsubeventcLcLSubEventgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEsubeventcLcLSubEventgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEsubeventcLcLSubEventgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<subevent::SubEvent> : new vector<subevent::SubEvent>;
   }
   static void *newArray_vectorlEsubeventcLcLSubEventgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<subevent::SubEvent>[nElements] : new vector<subevent::SubEvent>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEsubeventcLcLSubEventgR(void *p) {
      delete ((vector<subevent::SubEvent>*)p);
   }
   static void deleteArray_vectorlEsubeventcLcLSubEventgR(void *p) {
      delete [] ((vector<subevent::SubEvent>*)p);
   }
   static void destruct_vectorlEsubeventcLcLSubEventgR(void *p) {
      typedef vector<subevent::SubEvent> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<subevent::SubEvent>

namespace ROOT {
   static TClass *vectorlEsubeventcLcLFlashgR_Dictionary();
   static void vectorlEsubeventcLcLFlashgR_TClassManip(TClass*);
   static void *new_vectorlEsubeventcLcLFlashgR(void *p = 0);
   static void *newArray_vectorlEsubeventcLcLFlashgR(Long_t size, void *p);
   static void delete_vectorlEsubeventcLcLFlashgR(void *p);
   static void deleteArray_vectorlEsubeventcLcLFlashgR(void *p);
   static void destruct_vectorlEsubeventcLcLFlashgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<subevent::Flash>*)
   {
      vector<subevent::Flash> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<subevent::Flash>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<subevent::Flash>", -2, "vector", 214,
                  typeid(vector<subevent::Flash>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEsubeventcLcLFlashgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<subevent::Flash>) );
      instance.SetNew(&new_vectorlEsubeventcLcLFlashgR);
      instance.SetNewArray(&newArray_vectorlEsubeventcLcLFlashgR);
      instance.SetDelete(&delete_vectorlEsubeventcLcLFlashgR);
      instance.SetDeleteArray(&deleteArray_vectorlEsubeventcLcLFlashgR);
      instance.SetDestructor(&destruct_vectorlEsubeventcLcLFlashgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<subevent::Flash> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<subevent::Flash>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEsubeventcLcLFlashgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<subevent::Flash>*)0x0)->GetClass();
      vectorlEsubeventcLcLFlashgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEsubeventcLcLFlashgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEsubeventcLcLFlashgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<subevent::Flash> : new vector<subevent::Flash>;
   }
   static void *newArray_vectorlEsubeventcLcLFlashgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<subevent::Flash>[nElements] : new vector<subevent::Flash>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEsubeventcLcLFlashgR(void *p) {
      delete ((vector<subevent::Flash>*)p);
   }
   static void deleteArray_vectorlEsubeventcLcLFlashgR(void *p) {
      delete [] ((vector<subevent::Flash>*)p);
   }
   static void destruct_vectorlEsubeventcLcLFlashgR(void *p) {
      typedef vector<subevent::Flash> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<subevent::Flash>

namespace {
  void TriggerDictionaryInitialization_libuboone_OpticalDetectorAna_OpticalSubEvents_dict_Impl() {
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
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/OpticalDetectorAna/OpticalSubEvents/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libuboone_OpticalDetectorAna_OpticalSubEvents_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace subevent{class __attribute__((annotate("$clingAutoload$uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEvent.hh")))  SubEvent;}
namespace subevent{class __attribute__((annotate("$clingAutoload$uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEvent.hh")))  Flash;}
namespace subevent{class __attribute__((annotate("$clingAutoload$uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEvent.hh")))  FlashList;}
namespace subevent{class __attribute__((annotate("$clingAutoload$uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEventList.hh")))  SubEventList;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libuboone_OpticalDetectorAna_OpticalSubEvents_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef NDEBUG
  #define NDEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "canvas/Persistency/Common/Wrapper.h"

#include "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEvent.hh"
#include "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/Flash.hh"
#include "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEventList.hh"
#include "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/FlashList.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"art::Wrapper<std::vector<subevent::SubEvent> >", payloadCode, "@",
"art::Wrapper<subevent::FlashList>", payloadCode, "@",
"art::Wrapper<vector<subevent::SubEvent> >", payloadCode, "@",
"subevent::Flash", payloadCode, "@",
"subevent::FlashList", payloadCode, "@",
"subevent::SubEvent", payloadCode, "@",
"subevent::SubEventList", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libuboone_OpticalDetectorAna_OpticalSubEvents_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libuboone_OpticalDetectorAna_OpticalSubEvents_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libuboone_OpticalDetectorAna_OpticalSubEvents_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libuboone_OpticalDetectorAna_OpticalSubEvents_dict() {
  TriggerDictionaryInitialization_libuboone_OpticalDetectorAna_OpticalSubEvents_dict_Impl();
}
