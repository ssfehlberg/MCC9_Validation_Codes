// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME uboone_MuCS_dict

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
#include "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/MuCS/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *MuCScLcLMuCSData_Dictionary();
   static void MuCScLcLMuCSData_TClassManip(TClass*);
   static void *new_MuCScLcLMuCSData(void *p = 0);
   static void *newArray_MuCScLcLMuCSData(Long_t size, void *p);
   static void delete_MuCScLcLMuCSData(void *p);
   static void deleteArray_MuCScLcLMuCSData(void *p);
   static void destruct_MuCScLcLMuCSData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MuCS::MuCSData*)
   {
      ::MuCS::MuCSData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MuCS::MuCSData));
      static ::ROOT::TGenericClassInfo 
         instance("MuCS::MuCSData", 10, "MuCSData.h", 24,
                  typeid(::MuCS::MuCSData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MuCScLcLMuCSData_Dictionary, isa_proxy, 8,
                  sizeof(::MuCS::MuCSData) );
      instance.SetNew(&new_MuCScLcLMuCSData);
      instance.SetNewArray(&newArray_MuCScLcLMuCSData);
      instance.SetDelete(&delete_MuCScLcLMuCSData);
      instance.SetDeleteArray(&deleteArray_MuCScLcLMuCSData);
      instance.SetDestructor(&destruct_MuCScLcLMuCSData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MuCS::MuCSData*)
   {
      return GenerateInitInstanceLocal((::MuCS::MuCSData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MuCS::MuCSData*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MuCScLcLMuCSData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MuCS::MuCSData*)0x0)->GetClass();
      MuCScLcLMuCSData_TClassManip(theClass);
   return theClass;
   }

   static void MuCScLcLMuCSData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MuCScLcLMuCSRecoData_Dictionary();
   static void MuCScLcLMuCSRecoData_TClassManip(TClass*);
   static void *new_MuCScLcLMuCSRecoData(void *p = 0);
   static void *newArray_MuCScLcLMuCSRecoData(Long_t size, void *p);
   static void delete_MuCScLcLMuCSRecoData(void *p);
   static void deleteArray_MuCScLcLMuCSRecoData(void *p);
   static void destruct_MuCScLcLMuCSRecoData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MuCS::MuCSRecoData*)
   {
      ::MuCS::MuCSRecoData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MuCS::MuCSRecoData));
      static ::ROOT::TGenericClassInfo 
         instance("MuCS::MuCSRecoData", 11, "MuCSRecoData.h", 23,
                  typeid(::MuCS::MuCSRecoData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MuCScLcLMuCSRecoData_Dictionary, isa_proxy, 8,
                  sizeof(::MuCS::MuCSRecoData) );
      instance.SetNew(&new_MuCScLcLMuCSRecoData);
      instance.SetNewArray(&newArray_MuCScLcLMuCSRecoData);
      instance.SetDelete(&delete_MuCScLcLMuCSRecoData);
      instance.SetDeleteArray(&deleteArray_MuCScLcLMuCSRecoData);
      instance.SetDestructor(&destruct_MuCScLcLMuCSRecoData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MuCS::MuCSRecoData*)
   {
      return GenerateInitInstanceLocal((::MuCS::MuCSRecoData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MuCS::MuCSRecoData*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MuCScLcLMuCSRecoData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MuCS::MuCSRecoData*)0x0)->GetClass();
      MuCScLcLMuCSRecoData_TClassManip(theClass);
   return theClass;
   }

   static void MuCScLcLMuCSRecoData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MuCScLcLMuCSDTOffset_Dictionary();
   static void MuCScLcLMuCSDTOffset_TClassManip(TClass*);
   static void *new_MuCScLcLMuCSDTOffset(void *p = 0);
   static void *newArray_MuCScLcLMuCSDTOffset(Long_t size, void *p);
   static void delete_MuCScLcLMuCSDTOffset(void *p);
   static void deleteArray_MuCScLcLMuCSDTOffset(void *p);
   static void destruct_MuCScLcLMuCSDTOffset(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MuCS::MuCSDTOffset*)
   {
      ::MuCS::MuCSDTOffset *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MuCS::MuCSDTOffset));
      static ::ROOT::TGenericClassInfo 
         instance("MuCS::MuCSDTOffset", "MuCSDTOffset.h", 19,
                  typeid(::MuCS::MuCSDTOffset), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MuCScLcLMuCSDTOffset_Dictionary, isa_proxy, 0,
                  sizeof(::MuCS::MuCSDTOffset) );
      instance.SetNew(&new_MuCScLcLMuCSDTOffset);
      instance.SetNewArray(&newArray_MuCScLcLMuCSDTOffset);
      instance.SetDelete(&delete_MuCScLcLMuCSDTOffset);
      instance.SetDeleteArray(&deleteArray_MuCScLcLMuCSDTOffset);
      instance.SetDestructor(&destruct_MuCScLcLMuCSDTOffset);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MuCS::MuCSDTOffset*)
   {
      return GenerateInitInstanceLocal((::MuCS::MuCSDTOffset*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MuCS::MuCSDTOffset*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MuCScLcLMuCSDTOffset_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MuCS::MuCSDTOffset*)0x0)->GetClass();
      MuCScLcLMuCSDTOffset_TClassManip(theClass);
   return theClass;
   }

   static void MuCScLcLMuCSDTOffset_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR_Dictionary();
   static void artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(void *p);
   static void deleteArray_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(void *p);
   static void destruct_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<MuCS::MuCSDTOffset>*)
   {
      ::art::Wrapper<MuCS::MuCSDTOffset> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<MuCS::MuCSDTOffset>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<MuCS::MuCSDTOffset>", ::art::Wrapper<MuCS::MuCSDTOffset>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<MuCS::MuCSDTOffset>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<MuCS::MuCSDTOffset>) );
      instance.SetNew(&new_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR);
      instance.SetDelete(&delete_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<MuCS::MuCSDTOffset>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<MuCS::MuCSDTOffset>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<MuCS::MuCSDTOffset>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<MuCS::MuCSDTOffset>*)0x0)->GetClass();
      artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<MuCS::MuCSDTOffset> >*)
   {
      ::art::Wrapper<vector<MuCS::MuCSDTOffset> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<MuCS::MuCSDTOffset> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<MuCS::MuCSDTOffset> >", ::art::Wrapper<vector<MuCS::MuCSDTOffset> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<MuCS::MuCSDTOffset> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<MuCS::MuCSDTOffset> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<MuCS::MuCSDTOffset> >","art::Wrapper<std::vector<MuCS::MuCSDTOffset> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<MuCS::MuCSDTOffset> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<MuCS::MuCSDTOffset> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<MuCS::MuCSDTOffset> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<MuCS::MuCSDTOffset> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEMuCScLcLMuCSDatagR_Dictionary();
   static void artcLcLWrapperlEMuCScLcLMuCSDatagR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEMuCScLcLMuCSDatagR(void *p = 0);
   static void *newArray_artcLcLWrapperlEMuCScLcLMuCSDatagR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEMuCScLcLMuCSDatagR(void *p);
   static void deleteArray_artcLcLWrapperlEMuCScLcLMuCSDatagR(void *p);
   static void destruct_artcLcLWrapperlEMuCScLcLMuCSDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<MuCS::MuCSData>*)
   {
      ::art::Wrapper<MuCS::MuCSData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<MuCS::MuCSData>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<MuCS::MuCSData>", ::art::Wrapper<MuCS::MuCSData>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<MuCS::MuCSData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEMuCScLcLMuCSDatagR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<MuCS::MuCSData>) );
      instance.SetNew(&new_artcLcLWrapperlEMuCScLcLMuCSDatagR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEMuCScLcLMuCSDatagR);
      instance.SetDelete(&delete_artcLcLWrapperlEMuCScLcLMuCSDatagR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEMuCScLcLMuCSDatagR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEMuCScLcLMuCSDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<MuCS::MuCSData>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<MuCS::MuCSData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<MuCS::MuCSData>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEMuCScLcLMuCSDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<MuCS::MuCSData>*)0x0)->GetClass();
      artcLcLWrapperlEMuCScLcLMuCSDatagR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEMuCScLcLMuCSDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<MuCS::MuCSData> >*)
   {
      ::art::Wrapper<vector<MuCS::MuCSData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<MuCS::MuCSData> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<MuCS::MuCSData> >", ::art::Wrapper<vector<MuCS::MuCSData> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<MuCS::MuCSData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<MuCS::MuCSData> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<MuCS::MuCSData> >","art::Wrapper<std::vector<MuCS::MuCSData> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<MuCS::MuCSData> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<MuCS::MuCSData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<MuCS::MuCSData> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<MuCS::MuCSData> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEMuCScLcLMuCSRecoDatagR_Dictionary();
   static void artcLcLWrapperlEMuCScLcLMuCSRecoDatagR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(void *p = 0);
   static void *newArray_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(void *p);
   static void deleteArray_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(void *p);
   static void destruct_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<MuCS::MuCSRecoData>*)
   {
      ::art::Wrapper<MuCS::MuCSRecoData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<MuCS::MuCSRecoData>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<MuCS::MuCSRecoData>", ::art::Wrapper<MuCS::MuCSRecoData>::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<MuCS::MuCSRecoData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEMuCScLcLMuCSRecoDatagR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<MuCS::MuCSRecoData>) );
      instance.SetNew(&new_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR);
      instance.SetDelete(&delete_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<MuCS::MuCSRecoData>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<MuCS::MuCSRecoData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<MuCS::MuCSRecoData>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEMuCScLcLMuCSRecoDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<MuCS::MuCSRecoData>*)0x0)->GetClass();
      artcLcLWrapperlEMuCScLcLMuCSRecoDatagR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEMuCScLcLMuCSRecoDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<MuCS::MuCSRecoData> >*)
   {
      ::art::Wrapper<vector<MuCS::MuCSRecoData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<MuCS::MuCSRecoData> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<MuCS::MuCSRecoData> >", ::art::Wrapper<vector<MuCS::MuCSRecoData> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<MuCS::MuCSRecoData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<MuCS::MuCSRecoData> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<MuCS::MuCSRecoData> >","art::Wrapper<std::vector<MuCS::MuCSRecoData> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<MuCS::MuCSRecoData> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<MuCS::MuCSRecoData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<MuCS::MuCSRecoData> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<MuCS::MuCSRecoData> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_MuCScLcLMuCSData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::MuCS::MuCSData : new ::MuCS::MuCSData;
   }
   static void *newArray_MuCScLcLMuCSData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::MuCS::MuCSData[nElements] : new ::MuCS::MuCSData[nElements];
   }
   // Wrapper around operator delete
   static void delete_MuCScLcLMuCSData(void *p) {
      delete ((::MuCS::MuCSData*)p);
   }
   static void deleteArray_MuCScLcLMuCSData(void *p) {
      delete [] ((::MuCS::MuCSData*)p);
   }
   static void destruct_MuCScLcLMuCSData(void *p) {
      typedef ::MuCS::MuCSData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MuCS::MuCSData

namespace ROOT {
   // Wrappers around operator new
   static void *new_MuCScLcLMuCSRecoData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::MuCS::MuCSRecoData : new ::MuCS::MuCSRecoData;
   }
   static void *newArray_MuCScLcLMuCSRecoData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::MuCS::MuCSRecoData[nElements] : new ::MuCS::MuCSRecoData[nElements];
   }
   // Wrapper around operator delete
   static void delete_MuCScLcLMuCSRecoData(void *p) {
      delete ((::MuCS::MuCSRecoData*)p);
   }
   static void deleteArray_MuCScLcLMuCSRecoData(void *p) {
      delete [] ((::MuCS::MuCSRecoData*)p);
   }
   static void destruct_MuCScLcLMuCSRecoData(void *p) {
      typedef ::MuCS::MuCSRecoData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MuCS::MuCSRecoData

namespace ROOT {
   // Wrappers around operator new
   static void *new_MuCScLcLMuCSDTOffset(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::MuCS::MuCSDTOffset : new ::MuCS::MuCSDTOffset;
   }
   static void *newArray_MuCScLcLMuCSDTOffset(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::MuCS::MuCSDTOffset[nElements] : new ::MuCS::MuCSDTOffset[nElements];
   }
   // Wrapper around operator delete
   static void delete_MuCScLcLMuCSDTOffset(void *p) {
      delete ((::MuCS::MuCSDTOffset*)p);
   }
   static void deleteArray_MuCScLcLMuCSDTOffset(void *p) {
      delete [] ((::MuCS::MuCSDTOffset*)p);
   }
   static void destruct_MuCScLcLMuCSDTOffset(void *p) {
      typedef ::MuCS::MuCSDTOffset current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MuCS::MuCSDTOffset

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<MuCS::MuCSDTOffset> : new ::art::Wrapper<MuCS::MuCSDTOffset>;
   }
   static void *newArray_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<MuCS::MuCSDTOffset>[nElements] : new ::art::Wrapper<MuCS::MuCSDTOffset>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(void *p) {
      delete ((::art::Wrapper<MuCS::MuCSDTOffset>*)p);
   }
   static void deleteArray_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(void *p) {
      delete [] ((::art::Wrapper<MuCS::MuCSDTOffset>*)p);
   }
   static void destruct_artcLcLWrapperlEMuCScLcLMuCSDTOffsetgR(void *p) {
      typedef ::art::Wrapper<MuCS::MuCSDTOffset> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<MuCS::MuCSDTOffset>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<MuCS::MuCSDTOffset> > : new ::art::Wrapper<vector<MuCS::MuCSDTOffset> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<MuCS::MuCSDTOffset> >[nElements] : new ::art::Wrapper<vector<MuCS::MuCSDTOffset> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<MuCS::MuCSDTOffset> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<MuCS::MuCSDTOffset> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEMuCScLcLMuCSDTOffsetgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<MuCS::MuCSDTOffset> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<MuCS::MuCSDTOffset> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEMuCScLcLMuCSDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<MuCS::MuCSData> : new ::art::Wrapper<MuCS::MuCSData>;
   }
   static void *newArray_artcLcLWrapperlEMuCScLcLMuCSDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<MuCS::MuCSData>[nElements] : new ::art::Wrapper<MuCS::MuCSData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEMuCScLcLMuCSDatagR(void *p) {
      delete ((::art::Wrapper<MuCS::MuCSData>*)p);
   }
   static void deleteArray_artcLcLWrapperlEMuCScLcLMuCSDatagR(void *p) {
      delete [] ((::art::Wrapper<MuCS::MuCSData>*)p);
   }
   static void destruct_artcLcLWrapperlEMuCScLcLMuCSDatagR(void *p) {
      typedef ::art::Wrapper<MuCS::MuCSData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<MuCS::MuCSData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<MuCS::MuCSData> > : new ::art::Wrapper<vector<MuCS::MuCSData> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<MuCS::MuCSData> >[nElements] : new ::art::Wrapper<vector<MuCS::MuCSData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(void *p) {
      delete ((::art::Wrapper<vector<MuCS::MuCSData> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<MuCS::MuCSData> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEMuCScLcLMuCSDatagRsPgR(void *p) {
      typedef ::art::Wrapper<vector<MuCS::MuCSData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<MuCS::MuCSData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<MuCS::MuCSRecoData> : new ::art::Wrapper<MuCS::MuCSRecoData>;
   }
   static void *newArray_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<MuCS::MuCSRecoData>[nElements] : new ::art::Wrapper<MuCS::MuCSRecoData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(void *p) {
      delete ((::art::Wrapper<MuCS::MuCSRecoData>*)p);
   }
   static void deleteArray_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(void *p) {
      delete [] ((::art::Wrapper<MuCS::MuCSRecoData>*)p);
   }
   static void destruct_artcLcLWrapperlEMuCScLcLMuCSRecoDatagR(void *p) {
      typedef ::art::Wrapper<MuCS::MuCSRecoData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<MuCS::MuCSRecoData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<MuCS::MuCSRecoData> > : new ::art::Wrapper<vector<MuCS::MuCSRecoData> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<MuCS::MuCSRecoData> >[nElements] : new ::art::Wrapper<vector<MuCS::MuCSRecoData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(void *p) {
      delete ((::art::Wrapper<vector<MuCS::MuCSRecoData> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<MuCS::MuCSRecoData> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlEMuCScLcLMuCSRecoDatagRsPgR(void *p) {
      typedef ::art::Wrapper<vector<MuCS::MuCSRecoData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<MuCS::MuCSRecoData> >

namespace ROOT {
   static TClass *vectorlEMuCScLcLMuCSRecoDatagR_Dictionary();
   static void vectorlEMuCScLcLMuCSRecoDatagR_TClassManip(TClass*);
   static void *new_vectorlEMuCScLcLMuCSRecoDatagR(void *p = 0);
   static void *newArray_vectorlEMuCScLcLMuCSRecoDatagR(Long_t size, void *p);
   static void delete_vectorlEMuCScLcLMuCSRecoDatagR(void *p);
   static void deleteArray_vectorlEMuCScLcLMuCSRecoDatagR(void *p);
   static void destruct_vectorlEMuCScLcLMuCSRecoDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MuCS::MuCSRecoData>*)
   {
      vector<MuCS::MuCSRecoData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MuCS::MuCSRecoData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MuCS::MuCSRecoData>", -2, "vector", 214,
                  typeid(vector<MuCS::MuCSRecoData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMuCScLcLMuCSRecoDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<MuCS::MuCSRecoData>) );
      instance.SetNew(&new_vectorlEMuCScLcLMuCSRecoDatagR);
      instance.SetNewArray(&newArray_vectorlEMuCScLcLMuCSRecoDatagR);
      instance.SetDelete(&delete_vectorlEMuCScLcLMuCSRecoDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEMuCScLcLMuCSRecoDatagR);
      instance.SetDestructor(&destruct_vectorlEMuCScLcLMuCSRecoDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MuCS::MuCSRecoData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<MuCS::MuCSRecoData>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMuCScLcLMuCSRecoDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MuCS::MuCSRecoData>*)0x0)->GetClass();
      vectorlEMuCScLcLMuCSRecoDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMuCScLcLMuCSRecoDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMuCScLcLMuCSRecoDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MuCS::MuCSRecoData> : new vector<MuCS::MuCSRecoData>;
   }
   static void *newArray_vectorlEMuCScLcLMuCSRecoDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MuCS::MuCSRecoData>[nElements] : new vector<MuCS::MuCSRecoData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMuCScLcLMuCSRecoDatagR(void *p) {
      delete ((vector<MuCS::MuCSRecoData>*)p);
   }
   static void deleteArray_vectorlEMuCScLcLMuCSRecoDatagR(void *p) {
      delete [] ((vector<MuCS::MuCSRecoData>*)p);
   }
   static void destruct_vectorlEMuCScLcLMuCSRecoDatagR(void *p) {
      typedef vector<MuCS::MuCSRecoData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MuCS::MuCSRecoData>

namespace ROOT {
   static TClass *vectorlEMuCScLcLMuCSDatagR_Dictionary();
   static void vectorlEMuCScLcLMuCSDatagR_TClassManip(TClass*);
   static void *new_vectorlEMuCScLcLMuCSDatagR(void *p = 0);
   static void *newArray_vectorlEMuCScLcLMuCSDatagR(Long_t size, void *p);
   static void delete_vectorlEMuCScLcLMuCSDatagR(void *p);
   static void deleteArray_vectorlEMuCScLcLMuCSDatagR(void *p);
   static void destruct_vectorlEMuCScLcLMuCSDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MuCS::MuCSData>*)
   {
      vector<MuCS::MuCSData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MuCS::MuCSData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MuCS::MuCSData>", -2, "vector", 214,
                  typeid(vector<MuCS::MuCSData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMuCScLcLMuCSDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<MuCS::MuCSData>) );
      instance.SetNew(&new_vectorlEMuCScLcLMuCSDatagR);
      instance.SetNewArray(&newArray_vectorlEMuCScLcLMuCSDatagR);
      instance.SetDelete(&delete_vectorlEMuCScLcLMuCSDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEMuCScLcLMuCSDatagR);
      instance.SetDestructor(&destruct_vectorlEMuCScLcLMuCSDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MuCS::MuCSData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<MuCS::MuCSData>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMuCScLcLMuCSDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MuCS::MuCSData>*)0x0)->GetClass();
      vectorlEMuCScLcLMuCSDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMuCScLcLMuCSDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMuCScLcLMuCSDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MuCS::MuCSData> : new vector<MuCS::MuCSData>;
   }
   static void *newArray_vectorlEMuCScLcLMuCSDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MuCS::MuCSData>[nElements] : new vector<MuCS::MuCSData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMuCScLcLMuCSDatagR(void *p) {
      delete ((vector<MuCS::MuCSData>*)p);
   }
   static void deleteArray_vectorlEMuCScLcLMuCSDatagR(void *p) {
      delete [] ((vector<MuCS::MuCSData>*)p);
   }
   static void destruct_vectorlEMuCScLcLMuCSDatagR(void *p) {
      typedef vector<MuCS::MuCSData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MuCS::MuCSData>

namespace ROOT {
   static TClass *vectorlEMuCScLcLMuCSDTOffsetgR_Dictionary();
   static void vectorlEMuCScLcLMuCSDTOffsetgR_TClassManip(TClass*);
   static void *new_vectorlEMuCScLcLMuCSDTOffsetgR(void *p = 0);
   static void *newArray_vectorlEMuCScLcLMuCSDTOffsetgR(Long_t size, void *p);
   static void delete_vectorlEMuCScLcLMuCSDTOffsetgR(void *p);
   static void deleteArray_vectorlEMuCScLcLMuCSDTOffsetgR(void *p);
   static void destruct_vectorlEMuCScLcLMuCSDTOffsetgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MuCS::MuCSDTOffset>*)
   {
      vector<MuCS::MuCSDTOffset> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MuCS::MuCSDTOffset>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MuCS::MuCSDTOffset>", -2, "vector", 214,
                  typeid(vector<MuCS::MuCSDTOffset>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMuCScLcLMuCSDTOffsetgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<MuCS::MuCSDTOffset>) );
      instance.SetNew(&new_vectorlEMuCScLcLMuCSDTOffsetgR);
      instance.SetNewArray(&newArray_vectorlEMuCScLcLMuCSDTOffsetgR);
      instance.SetDelete(&delete_vectorlEMuCScLcLMuCSDTOffsetgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMuCScLcLMuCSDTOffsetgR);
      instance.SetDestructor(&destruct_vectorlEMuCScLcLMuCSDTOffsetgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MuCS::MuCSDTOffset> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<MuCS::MuCSDTOffset>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMuCScLcLMuCSDTOffsetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MuCS::MuCSDTOffset>*)0x0)->GetClass();
      vectorlEMuCScLcLMuCSDTOffsetgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMuCScLcLMuCSDTOffsetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMuCScLcLMuCSDTOffsetgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MuCS::MuCSDTOffset> : new vector<MuCS::MuCSDTOffset>;
   }
   static void *newArray_vectorlEMuCScLcLMuCSDTOffsetgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MuCS::MuCSDTOffset>[nElements] : new vector<MuCS::MuCSDTOffset>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMuCScLcLMuCSDTOffsetgR(void *p) {
      delete ((vector<MuCS::MuCSDTOffset>*)p);
   }
   static void deleteArray_vectorlEMuCScLcLMuCSDTOffsetgR(void *p) {
      delete [] ((vector<MuCS::MuCSDTOffset>*)p);
   }
   static void destruct_vectorlEMuCScLcLMuCSDTOffsetgR(void *p) {
      typedef vector<MuCS::MuCSDTOffset> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MuCS::MuCSDTOffset>

namespace {
  void TriggerDictionaryInitialization_libuboone_MuCS_dict_Impl() {
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
"/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/MuCS",
"/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_10_00_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/cry/v1_7f/Linux64bit+2.6-2.12-e10-prof/cry_v1.7/src",
"/cvmfs/larsoft.opensciencegrid.org/products/ifdhc/v2_0_1/Linux64bit+2.6-2.12-e10-p2711-prof/inc",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/MuCS/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libuboone_MuCS_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace MuCS{class __attribute__((annotate("$clingAutoload$MuCSData.h")))  MuCSData;}
namespace MuCS{class __attribute__((annotate("$clingAutoload$MuCSRecoData.h")))  MuCSRecoData;}
namespace MuCS{class __attribute__((annotate("$clingAutoload$MuCSDTOffset.h")))  MuCSDTOffset;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libuboone_MuCS_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef NDEBUG
  #define NDEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H

#include "canvas/Persistency/Common/Wrapper.h"

#include "MuCSData.h"
#include "MuCSRecoData.h"
#include "MuCSDTOffset.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MuCS::MuCSDTOffset", payloadCode, "@",
"MuCS::MuCSData", payloadCode, "@",
"MuCS::MuCSRecoData", payloadCode, "@",
"art::Wrapper<MuCS::MuCSDTOffset>", payloadCode, "@",
"art::Wrapper<MuCS::MuCSData>", payloadCode, "@",
"art::Wrapper<MuCS::MuCSRecoData>", payloadCode, "@",
"art::Wrapper<std::vector<MuCS::MuCSDTOffset> >", payloadCode, "@",
"art::Wrapper<std::vector<MuCS::MuCSData> >", payloadCode, "@",
"art::Wrapper<std::vector<MuCS::MuCSRecoData> >", payloadCode, "@",
"art::Wrapper<vector<MuCS::MuCSDTOffset> >", payloadCode, "@",
"art::Wrapper<vector<MuCS::MuCSData> >", payloadCode, "@",
"art::Wrapper<vector<MuCS::MuCSRecoData> >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libuboone_MuCS_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libuboone_MuCS_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libuboone_MuCS_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libuboone_MuCS_dict() {
  TriggerDictionaryInitialization_libuboone_MuCS_dict_Impl();
}
