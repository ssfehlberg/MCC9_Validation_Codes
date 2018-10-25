// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME ubooneobj_dict

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
#include "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/ubooneobj/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *uboonecLcLUbooneOpticalFilter_Dictionary();
   static void uboonecLcLUbooneOpticalFilter_TClassManip(TClass*);
   static void *new_uboonecLcLUbooneOpticalFilter(void *p = 0);
   static void *newArray_uboonecLcLUbooneOpticalFilter(Long_t size, void *p);
   static void delete_uboonecLcLUbooneOpticalFilter(void *p);
   static void deleteArray_uboonecLcLUbooneOpticalFilter(void *p);
   static void destruct_uboonecLcLUbooneOpticalFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::uboone::UbooneOpticalFilter*)
   {
      ::uboone::UbooneOpticalFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::uboone::UbooneOpticalFilter));
      static ::ROOT::TGenericClassInfo 
         instance("uboone::UbooneOpticalFilter", 10, "UbooneOpticalFilter.h", 15,
                  typeid(::uboone::UbooneOpticalFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &uboonecLcLUbooneOpticalFilter_Dictionary, isa_proxy, 8,
                  sizeof(::uboone::UbooneOpticalFilter) );
      instance.SetNew(&new_uboonecLcLUbooneOpticalFilter);
      instance.SetNewArray(&newArray_uboonecLcLUbooneOpticalFilter);
      instance.SetDelete(&delete_uboonecLcLUbooneOpticalFilter);
      instance.SetDeleteArray(&deleteArray_uboonecLcLUbooneOpticalFilter);
      instance.SetDestructor(&destruct_uboonecLcLUbooneOpticalFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::uboone::UbooneOpticalFilter*)
   {
      return GenerateInitInstanceLocal((::uboone::UbooneOpticalFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::uboone::UbooneOpticalFilter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *uboonecLcLUbooneOpticalFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::uboone::UbooneOpticalFilter*)0x0)->GetClass();
      uboonecLcLUbooneOpticalFilter_TClassManip(theClass);
   return theClass;
   }

   static void uboonecLcLUbooneOpticalFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR_Dictionary();
   static void artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(void *p = 0);
   static void *newArray_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(void *p);
   static void deleteArray_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(void *p);
   static void destruct_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<uboone::UbooneOpticalFilter>*)
   {
      ::art::Wrapper<uboone::UbooneOpticalFilter> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<uboone::UbooneOpticalFilter>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<uboone::UbooneOpticalFilter>", ::art::Wrapper<uboone::UbooneOpticalFilter>::Class_Version(), "invalid", 30,
                  typeid(::art::Wrapper<uboone::UbooneOpticalFilter>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<uboone::UbooneOpticalFilter>) );
      instance.SetNew(&new_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR);
      instance.SetDelete(&delete_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<uboone::UbooneOpticalFilter>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<uboone::UbooneOpticalFilter>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<uboone::UbooneOpticalFilter>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<uboone::UbooneOpticalFilter>*)0x0)->GetClass();
      artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *rawcLcLSparseRawDigit_Dictionary();
   static void rawcLcLSparseRawDigit_TClassManip(TClass*);
   static void *new_rawcLcLSparseRawDigit(void *p = 0);
   static void *newArray_rawcLcLSparseRawDigit(Long_t size, void *p);
   static void delete_rawcLcLSparseRawDigit(void *p);
   static void deleteArray_rawcLcLSparseRawDigit(void *p);
   static void destruct_rawcLcLSparseRawDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::raw::SparseRawDigit*)
   {
      ::raw::SparseRawDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::raw::SparseRawDigit));
      static ::ROOT::TGenericClassInfo 
         instance("raw::SparseRawDigit", 10, "SparseRawDigit.h", 24,
                  typeid(::raw::SparseRawDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &rawcLcLSparseRawDigit_Dictionary, isa_proxy, 8,
                  sizeof(::raw::SparseRawDigit) );
      instance.SetNew(&new_rawcLcLSparseRawDigit);
      instance.SetNewArray(&newArray_rawcLcLSparseRawDigit);
      instance.SetDelete(&delete_rawcLcLSparseRawDigit);
      instance.SetDeleteArray(&deleteArray_rawcLcLSparseRawDigit);
      instance.SetDestructor(&destruct_rawcLcLSparseRawDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::raw::SparseRawDigit*)
   {
      return GenerateInitInstanceLocal((::raw::SparseRawDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::raw::SparseRawDigit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *rawcLcLSparseRawDigit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::raw::SparseRawDigit*)0x0)->GetClass();
      rawcLcLSparseRawDigit_TClassManip(theClass);
   return theClass;
   }

   static void rawcLcLSparseRawDigit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larcLcLsparse_vectorlEshortgR_Dictionary();
   static void larcLcLsparse_vectorlEshortgR_TClassManip(TClass*);
   static void *new_larcLcLsparse_vectorlEshortgR(void *p = 0);
   static void *newArray_larcLcLsparse_vectorlEshortgR(Long_t size, void *p);
   static void delete_larcLcLsparse_vectorlEshortgR(void *p);
   static void deleteArray_larcLcLsparse_vectorlEshortgR(void *p);
   static void destruct_larcLcLsparse_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lar::sparse_vector<short>*)
   {
      ::lar::sparse_vector<short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::lar::sparse_vector<short>));
      static ::ROOT::TGenericClassInfo 
         instance("lar::sparse_vector<short>", "lardataobj/Utilities/sparse_vector.h", 465,
                  typeid(::lar::sparse_vector<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larcLcLsparse_vectorlEshortgR_Dictionary, isa_proxy, 0,
                  sizeof(::lar::sparse_vector<short>) );
      instance.SetNew(&new_larcLcLsparse_vectorlEshortgR);
      instance.SetNewArray(&newArray_larcLcLsparse_vectorlEshortgR);
      instance.SetDelete(&delete_larcLcLsparse_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_larcLcLsparse_vectorlEshortgR);
      instance.SetDestructor(&destruct_larcLcLsparse_vectorlEshortgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lar::sparse_vector<short>*)
   {
      return GenerateInitInstanceLocal((::lar::sparse_vector<short>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::lar::sparse_vector<short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larcLcLsparse_vectorlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::lar::sparse_vector<short>*)0x0)->GetClass();
      larcLcLsparse_vectorlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void larcLcLsparse_vectorlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larcLcLsparse_vectorlEshortgRcLcLdatarange_t_Dictionary();
   static void larcLcLsparse_vectorlEshortgRcLcLdatarange_t_TClassManip(TClass*);
   static void *new_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(void *p = 0);
   static void *newArray_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(Long_t size, void *p);
   static void delete_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(void *p);
   static void deleteArray_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(void *p);
   static void destruct_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lar::sparse_vector<short>::datarange_t*)
   {
      ::lar::sparse_vector<short>::datarange_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::lar::sparse_vector<short>::datarange_t));
      static ::ROOT::TGenericClassInfo 
         instance("lar::sparse_vector<short>::datarange_t", "lardataobj/Utilities/sparse_vector.h", 982,
                  typeid(::lar::sparse_vector<short>::datarange_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larcLcLsparse_vectorlEshortgRcLcLdatarange_t_Dictionary, isa_proxy, 0,
                  sizeof(::lar::sparse_vector<short>::datarange_t) );
      instance.SetNew(&new_larcLcLsparse_vectorlEshortgRcLcLdatarange_t);
      instance.SetNewArray(&newArray_larcLcLsparse_vectorlEshortgRcLcLdatarange_t);
      instance.SetDelete(&delete_larcLcLsparse_vectorlEshortgRcLcLdatarange_t);
      instance.SetDeleteArray(&deleteArray_larcLcLsparse_vectorlEshortgRcLcLdatarange_t);
      instance.SetDestructor(&destruct_larcLcLsparse_vectorlEshortgRcLcLdatarange_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lar::sparse_vector<short>::datarange_t*)
   {
      return GenerateInitInstanceLocal((::lar::sparse_vector<short>::datarange_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::lar::sparse_vector<short>::datarange_t*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larcLcLsparse_vectorlEshortgRcLcLdatarange_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::lar::sparse_vector<short>::datarange_t*)0x0)->GetClass();
      larcLcLsparse_vectorlEshortgRcLcLdatarange_t_TClassManip(theClass);
   return theClass;
   }

   static void larcLcLsparse_vectorlEshortgRcLcLdatarange_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR_Dictionary();
   static void artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<vector<raw::SparseRawDigit> >*)
   {
      ::art::Wrapper<vector<raw::SparseRawDigit> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<vector<raw::SparseRawDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<vector<raw::SparseRawDigit> >", ::art::Wrapper<vector<raw::SparseRawDigit> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<vector<raw::SparseRawDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<vector<raw::SparseRawDigit> >) );
      instance.SetNew(&new_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR);

      ::ROOT::AddClassAlternate("art::Wrapper<vector<raw::SparseRawDigit> >","art::Wrapper<std::vector<raw::SparseRawDigit> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<vector<raw::SparseRawDigit> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<vector<raw::SparseRawDigit> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<vector<raw::SparseRawDigit> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<vector<raw::SparseRawDigit> >*)0x0)->GetClass();
      artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR_Dictionary();
   static void artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(void *p);
   static void destruct_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<recob::Wire,raw::SparseRawDigit,void>*)
   {
      ::art::Assns<recob::Wire,raw::SparseRawDigit,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<recob::Wire,raw::SparseRawDigit,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<recob::Wire,raw::SparseRawDigit,void>", ::art::Assns<recob::Wire,raw::SparseRawDigit,void>::Class_Version(), "canvas/Persistency/Common/Assns.h", 139,
                  typeid(::art::Assns<recob::Wire,raw::SparseRawDigit,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<recob::Wire,raw::SparseRawDigit,void>) );
      instance.SetNew(&new_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<recob::Wire,raw::SparseRawDigit,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<recob::Wire,raw::SparseRawDigit,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<recob::Wire,raw::SparseRawDigit,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<recob::Wire,raw::SparseRawDigit,void>*)0x0)->GetClass();
      artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR_Dictionary();
   static void artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR_TClassManip(TClass*);
   static void *new_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(void *p = 0);
   static void *newArray_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(Long_t size, void *p);
   static void delete_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(void *p);
   static void deleteArray_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(void *p);
   static void destruct_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Assns<raw::SparseRawDigit,recob::Wire,void>*)
   {
      ::art::Assns<raw::SparseRawDigit,recob::Wire,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Assns<raw::SparseRawDigit,recob::Wire,void>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Assns<raw::SparseRawDigit,recob::Wire,void>", ::art::Assns<raw::SparseRawDigit,recob::Wire,void>::Class_Version(), "canvas/Persistency/Common/Assns.h", 139,
                  typeid(::art::Assns<raw::SparseRawDigit,recob::Wire,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Assns<raw::SparseRawDigit,recob::Wire,void>) );
      instance.SetNew(&new_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR);
      instance.SetNewArray(&newArray_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR);
      instance.SetDelete(&delete_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR);
      instance.SetDeleteArray(&deleteArray_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR);
      instance.SetDestructor(&destruct_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Assns<raw::SparseRawDigit,recob::Wire,void>*)
   {
      return GenerateInitInstanceLocal((::art::Assns<raw::SparseRawDigit,recob::Wire,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Assns<raw::SparseRawDigit,recob::Wire,void>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Assns<raw::SparseRawDigit,recob::Wire,void>*)0x0)->GetClass();
      artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >*)
   {
      ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >", ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR_Dictionary();
   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(void *p = 0);
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(void *p);
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(void *p);
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >*)
   {
      ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >", ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >::Class_Version(), "canvas/Persistency/Common/Wrapper.h", 64,
                  typeid(::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >) );
      instance.SetNew(&new_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR);
      instance.SetDelete(&delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >*)0x0)->GetClass();
      artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_uboonecLcLUbooneOpticalFilter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::uboone::UbooneOpticalFilter : new ::uboone::UbooneOpticalFilter;
   }
   static void *newArray_uboonecLcLUbooneOpticalFilter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::uboone::UbooneOpticalFilter[nElements] : new ::uboone::UbooneOpticalFilter[nElements];
   }
   // Wrapper around operator delete
   static void delete_uboonecLcLUbooneOpticalFilter(void *p) {
      delete ((::uboone::UbooneOpticalFilter*)p);
   }
   static void deleteArray_uboonecLcLUbooneOpticalFilter(void *p) {
      delete [] ((::uboone::UbooneOpticalFilter*)p);
   }
   static void destruct_uboonecLcLUbooneOpticalFilter(void *p) {
      typedef ::uboone::UbooneOpticalFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::uboone::UbooneOpticalFilter

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<uboone::UbooneOpticalFilter> : new ::art::Wrapper<uboone::UbooneOpticalFilter>;
   }
   static void *newArray_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<uboone::UbooneOpticalFilter>[nElements] : new ::art::Wrapper<uboone::UbooneOpticalFilter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(void *p) {
      delete ((::art::Wrapper<uboone::UbooneOpticalFilter>*)p);
   }
   static void deleteArray_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(void *p) {
      delete [] ((::art::Wrapper<uboone::UbooneOpticalFilter>*)p);
   }
   static void destruct_artcLcLWrapperlEuboonecLcLUbooneOpticalFiltergR(void *p) {
      typedef ::art::Wrapper<uboone::UbooneOpticalFilter> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<uboone::UbooneOpticalFilter>

namespace ROOT {
   // Wrappers around operator new
   static void *new_rawcLcLSparseRawDigit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::raw::SparseRawDigit : new ::raw::SparseRawDigit;
   }
   static void *newArray_rawcLcLSparseRawDigit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::raw::SparseRawDigit[nElements] : new ::raw::SparseRawDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_rawcLcLSparseRawDigit(void *p) {
      delete ((::raw::SparseRawDigit*)p);
   }
   static void deleteArray_rawcLcLSparseRawDigit(void *p) {
      delete [] ((::raw::SparseRawDigit*)p);
   }
   static void destruct_rawcLcLSparseRawDigit(void *p) {
      typedef ::raw::SparseRawDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::raw::SparseRawDigit

namespace ROOT {
   // Wrappers around operator new
   static void *new_larcLcLsparse_vectorlEshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lar::sparse_vector<short> : new ::lar::sparse_vector<short>;
   }
   static void *newArray_larcLcLsparse_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lar::sparse_vector<short>[nElements] : new ::lar::sparse_vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_larcLcLsparse_vectorlEshortgR(void *p) {
      delete ((::lar::sparse_vector<short>*)p);
   }
   static void deleteArray_larcLcLsparse_vectorlEshortgR(void *p) {
      delete [] ((::lar::sparse_vector<short>*)p);
   }
   static void destruct_larcLcLsparse_vectorlEshortgR(void *p) {
      typedef ::lar::sparse_vector<short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lar::sparse_vector<short>

namespace ROOT {
   // Wrappers around operator new
   static void *new_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lar::sparse_vector<short>::datarange_t : new ::lar::sparse_vector<short>::datarange_t;
   }
   static void *newArray_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lar::sparse_vector<short>::datarange_t[nElements] : new ::lar::sparse_vector<short>::datarange_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(void *p) {
      delete ((::lar::sparse_vector<short>::datarange_t*)p);
   }
   static void deleteArray_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(void *p) {
      delete [] ((::lar::sparse_vector<short>::datarange_t*)p);
   }
   static void destruct_larcLcLsparse_vectorlEshortgRcLcLdatarange_t(void *p) {
      typedef ::lar::sparse_vector<short>::datarange_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lar::sparse_vector<short>::datarange_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<raw::SparseRawDigit> > : new ::art::Wrapper<vector<raw::SparseRawDigit> >;
   }
   static void *newArray_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<vector<raw::SparseRawDigit> >[nElements] : new ::art::Wrapper<vector<raw::SparseRawDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(void *p) {
      delete ((::art::Wrapper<vector<raw::SparseRawDigit> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(void *p) {
      delete [] ((::art::Wrapper<vector<raw::SparseRawDigit> >*)p);
   }
   static void destruct_artcLcLWrapperlEvectorlErawcLcLSparseRawDigitgRsPgR(void *p) {
      typedef ::art::Wrapper<vector<raw::SparseRawDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<vector<raw::SparseRawDigit> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Wire,raw::SparseRawDigit,void> : new ::art::Assns<recob::Wire,raw::SparseRawDigit,void>;
   }
   static void *newArray_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<recob::Wire,raw::SparseRawDigit,void>[nElements] : new ::art::Assns<recob::Wire,raw::SparseRawDigit,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(void *p) {
      delete ((::art::Assns<recob::Wire,raw::SparseRawDigit,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(void *p) {
      delete [] ((::art::Assns<recob::Wire,raw::SparseRawDigit,void>*)p);
   }
   static void destruct_artcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgR(void *p) {
      typedef ::art::Assns<recob::Wire,raw::SparseRawDigit,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<recob::Wire,raw::SparseRawDigit,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<raw::SparseRawDigit,recob::Wire,void> : new ::art::Assns<raw::SparseRawDigit,recob::Wire,void>;
   }
   static void *newArray_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Assns<raw::SparseRawDigit,recob::Wire,void>[nElements] : new ::art::Assns<raw::SparseRawDigit,recob::Wire,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(void *p) {
      delete ((::art::Assns<raw::SparseRawDigit,recob::Wire,void>*)p);
   }
   static void deleteArray_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(void *p) {
      delete [] ((::art::Assns<raw::SparseRawDigit,recob::Wire,void>*)p);
   }
   static void destruct_artcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgR(void *p) {
      typedef ::art::Assns<raw::SparseRawDigit,recob::Wire,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Assns<raw::SparseRawDigit,recob::Wire,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> > : new ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >[nElements] : new ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErawcLcLSparseRawDigitcOrecobcLcLWirecOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> > : new ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >;
   }
   static void *newArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >[nElements] : new ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(void *p) {
      delete ((::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >*)p);
   }
   static void deleteArray_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(void *p) {
      delete [] ((::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >*)p);
   }
   static void destruct_artcLcLWrapperlEartcLcLAssnslErecobcLcLWirecOrawcLcLSparseRawDigitcOvoidgRsPgR(void *p) {
      typedef ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >

namespace ROOT {
   static TClass *vectorlErawcLcLSparseRawDigitgR_Dictionary();
   static void vectorlErawcLcLSparseRawDigitgR_TClassManip(TClass*);
   static void *new_vectorlErawcLcLSparseRawDigitgR(void *p = 0);
   static void *newArray_vectorlErawcLcLSparseRawDigitgR(Long_t size, void *p);
   static void delete_vectorlErawcLcLSparseRawDigitgR(void *p);
   static void deleteArray_vectorlErawcLcLSparseRawDigitgR(void *p);
   static void destruct_vectorlErawcLcLSparseRawDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<raw::SparseRawDigit>*)
   {
      vector<raw::SparseRawDigit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<raw::SparseRawDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<raw::SparseRawDigit>", -2, "vector", 214,
                  typeid(vector<raw::SparseRawDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErawcLcLSparseRawDigitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<raw::SparseRawDigit>) );
      instance.SetNew(&new_vectorlErawcLcLSparseRawDigitgR);
      instance.SetNewArray(&newArray_vectorlErawcLcLSparseRawDigitgR);
      instance.SetDelete(&delete_vectorlErawcLcLSparseRawDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlErawcLcLSparseRawDigitgR);
      instance.SetDestructor(&destruct_vectorlErawcLcLSparseRawDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<raw::SparseRawDigit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<raw::SparseRawDigit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErawcLcLSparseRawDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<raw::SparseRawDigit>*)0x0)->GetClass();
      vectorlErawcLcLSparseRawDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErawcLcLSparseRawDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErawcLcLSparseRawDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<raw::SparseRawDigit> : new vector<raw::SparseRawDigit>;
   }
   static void *newArray_vectorlErawcLcLSparseRawDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<raw::SparseRawDigit>[nElements] : new vector<raw::SparseRawDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErawcLcLSparseRawDigitgR(void *p) {
      delete ((vector<raw::SparseRawDigit>*)p);
   }
   static void deleteArray_vectorlErawcLcLSparseRawDigitgR(void *p) {
      delete [] ((vector<raw::SparseRawDigit>*)p);
   }
   static void destruct_vectorlErawcLcLSparseRawDigitgR(void *p) {
      typedef vector<raw::SparseRawDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<raw::SparseRawDigit>

namespace ROOT {
   static TClass *vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR_Dictionary();
   static void vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR_TClassManip(TClass*);
   static void *new_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(void *p = 0);
   static void *newArray_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(Long_t size, void *p);
   static void delete_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(void *p);
   static void deleteArray_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(void *p);
   static void destruct_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lar::sparse_vector<short>::datarange_t>*)
   {
      vector<lar::sparse_vector<short>::datarange_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lar::sparse_vector<short>::datarange_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lar::sparse_vector<short>::datarange_t>", -2, "vector", 214,
                  typeid(vector<lar::sparse_vector<short>::datarange_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<lar::sparse_vector<short>::datarange_t>) );
      instance.SetNew(&new_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR);
      instance.SetNewArray(&newArray_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR);
      instance.SetDelete(&delete_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR);
      instance.SetDestructor(&destruct_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lar::sparse_vector<short>::datarange_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<lar::sparse_vector<short>::datarange_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lar::sparse_vector<short>::datarange_t>*)0x0)->GetClass();
      vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lar::sparse_vector<short>::datarange_t> : new vector<lar::sparse_vector<short>::datarange_t>;
   }
   static void *newArray_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lar::sparse_vector<short>::datarange_t>[nElements] : new vector<lar::sparse_vector<short>::datarange_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(void *p) {
      delete ((vector<lar::sparse_vector<short>::datarange_t>*)p);
   }
   static void deleteArray_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(void *p) {
      delete [] ((vector<lar::sparse_vector<short>::datarange_t>*)p);
   }
   static void destruct_vectorlElarcLcLsparse_vectorlEshortgRcLcLdatarange_tgR(void *p) {
      typedef vector<lar::sparse_vector<short>::datarange_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lar::sparse_vector<short>::datarange_t>

namespace {
  void TriggerDictionaryInitialization_libubooneobj_dict_Impl() {
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
"/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/ubooneobj",
"/cvmfs/larsoft.opensciencegrid.org/products/nutools/v2_10_00_01/include",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/ubooneobj/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libubooneobj_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace uboone{class __attribute__((annotate("$clingAutoload$UbooneOpticalFilter.h")))  UbooneOpticalFilter;}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
namespace raw{class __attribute__((annotate("$clingAutoload$SparseRawDigit.h")))  SparseRawDigit;}
namespace lar{template <typename T> class __attribute__((annotate("$clingAutoload$SparseRawDigit.h")))  sparse_vector;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace recob{class __attribute__((annotate("$clingAutoload$lardataobj/RecoBase/Wire.h")))  Wire;}
namespace art{template <typename L, typename R, typename D = void> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Assns.h")))  Assns;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libubooneobj_dict dictionary payload"

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
#include "canvas/Persistency/Common/Assns.h"
#include "UbooneOpticalFilter.h"
#include "SparseRawDigit.h"
#include "lardataobj/RecoBase/Wire.h"

//
// Only include objects that we would like to be able to put into the event.
// Do not include the objects they contain internally.
//

template class art::Wrapper< uboone::UbooneOpticalFilter >;

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"art::Assns<raw::SparseRawDigit,recob::Wire,void>", payloadCode, "@",
"art::Assns<recob::Wire,raw::SparseRawDigit,void>", payloadCode, "@",
"art::Wrapper<art::Assns<raw::SparseRawDigit,recob::Wire,void> >", payloadCode, "@",
"art::Wrapper<art::Assns<recob::Wire,raw::SparseRawDigit,void> >", payloadCode, "@",
"art::Wrapper<std::vector<raw::SparseRawDigit> >", payloadCode, "@",
"art::Wrapper<uboone::UbooneOpticalFilter>", payloadCode, "@",
"art::Wrapper<vector<raw::SparseRawDigit> >", payloadCode, "@",
"lar::sparse_vector<short>", payloadCode, "@",
"lar::sparse_vector<short>::datarange_t", payloadCode, "@",
"raw::SparseRawDigit", payloadCode, "@",
"uboone::UbooneOpticalFilter", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libubooneobj_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libubooneobj_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libubooneobj_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libubooneobj_dict() {
  TriggerDictionaryInitialization_libubooneobj_dict_Impl();
}
