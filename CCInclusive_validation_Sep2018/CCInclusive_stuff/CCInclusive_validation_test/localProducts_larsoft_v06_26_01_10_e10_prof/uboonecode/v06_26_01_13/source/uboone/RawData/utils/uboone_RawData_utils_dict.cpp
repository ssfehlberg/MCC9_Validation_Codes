// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME uboone_RawData_utils_dict

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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"

#include <uboone/RawData/utils/ubdaqSoftwareTriggerData.h>
#include <vector>

// Header files passed as explicit arguments
#include "/uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/RawData/utils/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *rawcLcLubdaqSoftwareTriggerData_Dictionary();
   static void rawcLcLubdaqSoftwareTriggerData_TClassManip(TClass*);
   static void *new_rawcLcLubdaqSoftwareTriggerData(void *p = 0);
   static void *newArray_rawcLcLubdaqSoftwareTriggerData(Long_t size, void *p);
   static void delete_rawcLcLubdaqSoftwareTriggerData(void *p);
   static void deleteArray_rawcLcLubdaqSoftwareTriggerData(void *p);
   static void destruct_rawcLcLubdaqSoftwareTriggerData(void *p);

   // Schema evolution read functions
   static void read_rawcLcLubdaqSoftwareTriggerData_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_PHMAX = oldObj->GetId("PHMAX");
#endif
      struct rawcLcLubdaqSoftwareTriggerData_Onfile {
         unsigned int &PHMAX;
         rawcLcLubdaqSoftwareTriggerData_Onfile(unsigned int &onfile_PHMAX ): PHMAX(onfile_PHMAX) {}
      };
      static Long_t offset_Onfile_rawcLcLubdaqSoftwareTriggerData_PHMAX = oldObj->GetClass()->GetDataMemberOffset("PHMAX");
      char *onfile_add = (char*)oldObj->GetObject();
      rawcLcLubdaqSoftwareTriggerData_Onfile onfile(
         *(unsigned int*)(onfile_add+offset_Onfile_rawcLcLubdaqSoftwareTriggerData_PHMAX) );

      static TClassRef cls("raw::ubdaqSoftwareTriggerData");
      static Long_t offset_PHMAX = cls->GetDataMemberOffset("PHMAX");
      vector<uint32_t>& PHMAX = *(vector<uint32_t>*)(target+offset_PHMAX);
      raw::ubdaqSoftwareTriggerData* newObj = (raw::ubdaqSoftwareTriggerData*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
     PHMAX.push_back(onfile.PHMAX);
   
   }
   static void read_rawcLcLubdaqSoftwareTriggerData_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_multiplicity = oldObj->GetId("multiplicity");
#endif
      struct rawcLcLubdaqSoftwareTriggerData_Onfile {
         unsigned int &multiplicity;
         rawcLcLubdaqSoftwareTriggerData_Onfile(unsigned int &onfile_multiplicity ): multiplicity(onfile_multiplicity) {}
      };
      static Long_t offset_Onfile_rawcLcLubdaqSoftwareTriggerData_multiplicity = oldObj->GetClass()->GetDataMemberOffset("multiplicity");
      char *onfile_add = (char*)oldObj->GetObject();
      rawcLcLubdaqSoftwareTriggerData_Onfile onfile(
         *(unsigned int*)(onfile_add+offset_Onfile_rawcLcLubdaqSoftwareTriggerData_multiplicity) );

      static TClassRef cls("raw::ubdaqSoftwareTriggerData");
      static Long_t offset_multiplicity = cls->GetDataMemberOffset("multiplicity");
      vector<uint32_t>& multiplicity = *(vector<uint32_t>*)(target+offset_multiplicity);
      raw::ubdaqSoftwareTriggerData* newObj = (raw::ubdaqSoftwareTriggerData*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
     multiplicity.push_back(onfile.multiplicity);
   
   }
   static void read_rawcLcLubdaqSoftwareTriggerData_2( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_triggerTick = oldObj->GetId("triggerTick");
#endif
      struct rawcLcLubdaqSoftwareTriggerData_Onfile {
         unsigned int &triggerTick;
         rawcLcLubdaqSoftwareTriggerData_Onfile(unsigned int &onfile_triggerTick ): triggerTick(onfile_triggerTick) {}
      };
      static Long_t offset_Onfile_rawcLcLubdaqSoftwareTriggerData_triggerTick = oldObj->GetClass()->GetDataMemberOffset("triggerTick");
      char *onfile_add = (char*)oldObj->GetObject();
      rawcLcLubdaqSoftwareTriggerData_Onfile onfile(
         *(unsigned int*)(onfile_add+offset_Onfile_rawcLcLubdaqSoftwareTriggerData_triggerTick) );

      static TClassRef cls("raw::ubdaqSoftwareTriggerData");
      static Long_t offset_triggerTick = cls->GetDataMemberOffset("triggerTick");
      vector<uint32_t>& triggerTick = *(vector<uint32_t>*)(target+offset_triggerTick);
      raw::ubdaqSoftwareTriggerData* newObj = (raw::ubdaqSoftwareTriggerData*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
     triggerTick.push_back(onfile.triggerTick);
   
   }
   static void read_rawcLcLubdaqSoftwareTriggerData_3( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_triggerTime = oldObj->GetId("triggerTime");
#endif
      struct rawcLcLubdaqSoftwareTriggerData_Onfile {
         double &triggerTime;
         rawcLcLubdaqSoftwareTriggerData_Onfile(double &onfile_triggerTime ): triggerTime(onfile_triggerTime) {}
      };
      static Long_t offset_Onfile_rawcLcLubdaqSoftwareTriggerData_triggerTime = oldObj->GetClass()->GetDataMemberOffset("triggerTime");
      char *onfile_add = (char*)oldObj->GetObject();
      rawcLcLubdaqSoftwareTriggerData_Onfile onfile(
         *(double*)(onfile_add+offset_Onfile_rawcLcLubdaqSoftwareTriggerData_triggerTime) );

      static TClassRef cls("raw::ubdaqSoftwareTriggerData");
      static Long_t offset_triggerTime = cls->GetDataMemberOffset("triggerTime");
      vector<double>& triggerTime = *(vector<double>*)(target+offset_triggerTime);
      raw::ubdaqSoftwareTriggerData* newObj = (raw::ubdaqSoftwareTriggerData*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
     triggerTime.push_back(onfile.triggerTime);
   
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::raw::ubdaqSoftwareTriggerData*)
   {
      ::raw::ubdaqSoftwareTriggerData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::raw::ubdaqSoftwareTriggerData));
      static ::ROOT::TGenericClassInfo 
         instance("raw::ubdaqSoftwareTriggerData", "uboone/RawData/utils/ubdaqSoftwareTriggerData.h", 13,
                  typeid(::raw::ubdaqSoftwareTriggerData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &rawcLcLubdaqSoftwareTriggerData_Dictionary, isa_proxy, 0,
                  sizeof(::raw::ubdaqSoftwareTriggerData) );
      instance.SetNew(&new_rawcLcLubdaqSoftwareTriggerData);
      instance.SetNewArray(&newArray_rawcLcLubdaqSoftwareTriggerData);
      instance.SetDelete(&delete_rawcLcLubdaqSoftwareTriggerData);
      instance.SetDeleteArray(&deleteArray_rawcLcLubdaqSoftwareTriggerData);
      instance.SetDestructor(&destruct_rawcLcLubdaqSoftwareTriggerData);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(4);
      rule = &readrules[0];
      rule->fSourceClass = "raw::ubdaqSoftwareTriggerData";
      rule->fTarget      = "PHMAX";
      rule->fSource      = "unsigned int PHMAX";
      rule->fFunctionPtr = (void *)TFunc2void( read_rawcLcLubdaqSoftwareTriggerData_0);
      rule->fCode        = "\n     PHMAX.push_back(onfile.PHMAX);\n   ";
      rule->fChecksum    = "[2334756667]";
      rule->fInclude     = "vector,uboone/RawData/utils/ubdaqSoftwareTriggerData.h";
      rule = &readrules[1];
      rule->fSourceClass = "raw::ubdaqSoftwareTriggerData";
      rule->fTarget      = "multiplicity";
      rule->fSource      = "unsigned int multiplicity";
      rule->fFunctionPtr = (void *)TFunc2void( read_rawcLcLubdaqSoftwareTriggerData_1);
      rule->fCode        = "\n     multiplicity.push_back(onfile.multiplicity);\n   ";
      rule->fChecksum    = "[2334756667]";
      rule->fInclude     = "vector,uboone/RawData/utils/ubdaqSoftwareTriggerData.h";
      rule = &readrules[2];
      rule->fSourceClass = "raw::ubdaqSoftwareTriggerData";
      rule->fTarget      = "triggerTick";
      rule->fSource      = "unsigned int triggerTick";
      rule->fFunctionPtr = (void *)TFunc2void( read_rawcLcLubdaqSoftwareTriggerData_2);
      rule->fCode        = "\n     triggerTick.push_back(onfile.triggerTick);\n   ";
      rule->fChecksum    = "[2334756667]";
      rule->fInclude     = "vector,uboone/RawData/utils/ubdaqSoftwareTriggerData.h";
      rule = &readrules[3];
      rule->fSourceClass = "raw::ubdaqSoftwareTriggerData";
      rule->fTarget      = "triggerTime";
      rule->fSource      = "double triggerTime";
      rule->fFunctionPtr = (void *)TFunc2void( read_rawcLcLubdaqSoftwareTriggerData_3);
      rule->fCode        = "\n     triggerTime.push_back(onfile.triggerTime);\n   ";
      rule->fChecksum    = "[2334756667]";
      rule->fInclude     = "vector,uboone/RawData/utils/ubdaqSoftwareTriggerData.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::raw::ubdaqSoftwareTriggerData*)
   {
      return GenerateInitInstanceLocal((::raw::ubdaqSoftwareTriggerData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::raw::ubdaqSoftwareTriggerData*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *rawcLcLubdaqSoftwareTriggerData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::raw::ubdaqSoftwareTriggerData*)0x0)->GetClass();
      rawcLcLubdaqSoftwareTriggerData_TClassManip(theClass);
   return theClass;
   }

   static void rawcLcLubdaqSoftwareTriggerData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR_Dictionary();
   static void artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(void *p = 0);
   static void *newArray_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(Long_t size, void *p);
   static void delete_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(void *p);
   static void deleteArray_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(void *p);
   static void destruct_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<raw::ubdaqSoftwareTriggerData>*)
   {
      ::art::Wrapper<raw::ubdaqSoftwareTriggerData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<raw::ubdaqSoftwareTriggerData>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<raw::ubdaqSoftwareTriggerData>", ::art::Wrapper<raw::ubdaqSoftwareTriggerData>::Class_Version(), "invalid", 14,
                  typeid(::art::Wrapper<raw::ubdaqSoftwareTriggerData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<raw::ubdaqSoftwareTriggerData>) );
      instance.SetNew(&new_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR);
      instance.SetNewArray(&newArray_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR);
      instance.SetDelete(&delete_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR);
      instance.SetDestructor(&destruct_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<raw::ubdaqSoftwareTriggerData>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<raw::ubdaqSoftwareTriggerData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<raw::ubdaqSoftwareTriggerData>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<raw::ubdaqSoftwareTriggerData>*)0x0)->GetClass();
      artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcOboolgR_Dictionary();
   static void pairlEstringcOboolgR_TClassManip(TClass*);
   static void *new_pairlEstringcOboolgR(void *p = 0);
   static void *newArray_pairlEstringcOboolgR(Long_t size, void *p);
   static void delete_pairlEstringcOboolgR(void *p);
   static void deleteArray_pairlEstringcOboolgR(void *p);
   static void destruct_pairlEstringcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,bool>*)
   {
      pair<string,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,bool>", "invalid", 16,
                  typeid(pair<string,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEstringcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<string,bool>) );
      instance.SetNew(&new_pairlEstringcOboolgR);
      instance.SetNewArray(&newArray_pairlEstringcOboolgR);
      instance.SetDelete(&delete_pairlEstringcOboolgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOboolgR);
      instance.SetDestructor(&destruct_pairlEstringcOboolgR);

      ::ROOT::AddClassAlternate("pair<string,bool>","pair<std::string,bool>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,bool>*)0x0)->GetClass();
      pairlEstringcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *rawcLcLDAQHeaderTimeUBooNE_Dictionary();
   static void rawcLcLDAQHeaderTimeUBooNE_TClassManip(TClass*);
   static void *new_rawcLcLDAQHeaderTimeUBooNE(void *p = 0);
   static void *newArray_rawcLcLDAQHeaderTimeUBooNE(Long_t size, void *p);
   static void delete_rawcLcLDAQHeaderTimeUBooNE(void *p);
   static void deleteArray_rawcLcLDAQHeaderTimeUBooNE(void *p);
   static void destruct_rawcLcLDAQHeaderTimeUBooNE(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::raw::DAQHeaderTimeUBooNE*)
   {
      ::raw::DAQHeaderTimeUBooNE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::raw::DAQHeaderTimeUBooNE));
      static ::ROOT::TGenericClassInfo 
         instance("raw::DAQHeaderTimeUBooNE", "uboone/RawData/utils/DAQHeaderTimeUBooNE.h", 18,
                  typeid(::raw::DAQHeaderTimeUBooNE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &rawcLcLDAQHeaderTimeUBooNE_Dictionary, isa_proxy, 0,
                  sizeof(::raw::DAQHeaderTimeUBooNE) );
      instance.SetNew(&new_rawcLcLDAQHeaderTimeUBooNE);
      instance.SetNewArray(&newArray_rawcLcLDAQHeaderTimeUBooNE);
      instance.SetDelete(&delete_rawcLcLDAQHeaderTimeUBooNE);
      instance.SetDeleteArray(&deleteArray_rawcLcLDAQHeaderTimeUBooNE);
      instance.SetDestructor(&destruct_rawcLcLDAQHeaderTimeUBooNE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::raw::DAQHeaderTimeUBooNE*)
   {
      return GenerateInitInstanceLocal((::raw::DAQHeaderTimeUBooNE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::raw::DAQHeaderTimeUBooNE*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *rawcLcLDAQHeaderTimeUBooNE_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::raw::DAQHeaderTimeUBooNE*)0x0)->GetClass();
      rawcLcLDAQHeaderTimeUBooNE_TClassManip(theClass);
   return theClass;
   }

   static void rawcLcLDAQHeaderTimeUBooNE_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR_Dictionary();
   static void artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR_TClassManip(TClass*);
   static void *new_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(void *p = 0);
   static void *newArray_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(Long_t size, void *p);
   static void delete_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(void *p);
   static void deleteArray_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(void *p);
   static void destruct_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::Wrapper<raw::DAQHeaderTimeUBooNE>*)
   {
      ::art::Wrapper<raw::DAQHeaderTimeUBooNE> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::art::Wrapper<raw::DAQHeaderTimeUBooNE>));
      static ::ROOT::TGenericClassInfo 
         instance("art::Wrapper<raw::DAQHeaderTimeUBooNE>", ::art::Wrapper<raw::DAQHeaderTimeUBooNE>::Class_Version(), "invalid", 15,
                  typeid(::art::Wrapper<raw::DAQHeaderTimeUBooNE>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR_Dictionary, isa_proxy, 0,
                  sizeof(::art::Wrapper<raw::DAQHeaderTimeUBooNE>) );
      instance.SetNew(&new_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR);
      instance.SetNewArray(&newArray_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR);
      instance.SetDelete(&delete_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR);
      instance.SetDeleteArray(&deleteArray_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR);
      instance.SetDestructor(&destruct_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::Wrapper<raw::DAQHeaderTimeUBooNE>*)
   {
      return GenerateInitInstanceLocal((::art::Wrapper<raw::DAQHeaderTimeUBooNE>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::art::Wrapper<raw::DAQHeaderTimeUBooNE>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::art::Wrapper<raw::DAQHeaderTimeUBooNE>*)0x0)->GetClass();
      artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR_TClassManip(theClass);
   return theClass;
   }

   static void artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_rawcLcLubdaqSoftwareTriggerData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::raw::ubdaqSoftwareTriggerData : new ::raw::ubdaqSoftwareTriggerData;
   }
   static void *newArray_rawcLcLubdaqSoftwareTriggerData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::raw::ubdaqSoftwareTriggerData[nElements] : new ::raw::ubdaqSoftwareTriggerData[nElements];
   }
   // Wrapper around operator delete
   static void delete_rawcLcLubdaqSoftwareTriggerData(void *p) {
      delete ((::raw::ubdaqSoftwareTriggerData*)p);
   }
   static void deleteArray_rawcLcLubdaqSoftwareTriggerData(void *p) {
      delete [] ((::raw::ubdaqSoftwareTriggerData*)p);
   }
   static void destruct_rawcLcLubdaqSoftwareTriggerData(void *p) {
      typedef ::raw::ubdaqSoftwareTriggerData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::raw::ubdaqSoftwareTriggerData

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<raw::ubdaqSoftwareTriggerData> : new ::art::Wrapper<raw::ubdaqSoftwareTriggerData>;
   }
   static void *newArray_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<raw::ubdaqSoftwareTriggerData>[nElements] : new ::art::Wrapper<raw::ubdaqSoftwareTriggerData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(void *p) {
      delete ((::art::Wrapper<raw::ubdaqSoftwareTriggerData>*)p);
   }
   static void deleteArray_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(void *p) {
      delete [] ((::art::Wrapper<raw::ubdaqSoftwareTriggerData>*)p);
   }
   static void destruct_artcLcLWrapperlErawcLcLubdaqSoftwareTriggerDatagR(void *p) {
      typedef ::art::Wrapper<raw::ubdaqSoftwareTriggerData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<raw::ubdaqSoftwareTriggerData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,bool> : new pair<string,bool>;
   }
   static void *newArray_pairlEstringcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,bool>[nElements] : new pair<string,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOboolgR(void *p) {
      delete ((pair<string,bool>*)p);
   }
   static void deleteArray_pairlEstringcOboolgR(void *p) {
      delete [] ((pair<string,bool>*)p);
   }
   static void destruct_pairlEstringcOboolgR(void *p) {
      typedef pair<string,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_rawcLcLDAQHeaderTimeUBooNE(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::raw::DAQHeaderTimeUBooNE : new ::raw::DAQHeaderTimeUBooNE;
   }
   static void *newArray_rawcLcLDAQHeaderTimeUBooNE(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::raw::DAQHeaderTimeUBooNE[nElements] : new ::raw::DAQHeaderTimeUBooNE[nElements];
   }
   // Wrapper around operator delete
   static void delete_rawcLcLDAQHeaderTimeUBooNE(void *p) {
      delete ((::raw::DAQHeaderTimeUBooNE*)p);
   }
   static void deleteArray_rawcLcLDAQHeaderTimeUBooNE(void *p) {
      delete [] ((::raw::DAQHeaderTimeUBooNE*)p);
   }
   static void destruct_rawcLcLDAQHeaderTimeUBooNE(void *p) {
      typedef ::raw::DAQHeaderTimeUBooNE current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::raw::DAQHeaderTimeUBooNE

namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<raw::DAQHeaderTimeUBooNE> : new ::art::Wrapper<raw::DAQHeaderTimeUBooNE>;
   }
   static void *newArray_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::art::Wrapper<raw::DAQHeaderTimeUBooNE>[nElements] : new ::art::Wrapper<raw::DAQHeaderTimeUBooNE>[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(void *p) {
      delete ((::art::Wrapper<raw::DAQHeaderTimeUBooNE>*)p);
   }
   static void deleteArray_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(void *p) {
      delete [] ((::art::Wrapper<raw::DAQHeaderTimeUBooNE>*)p);
   }
   static void destruct_artcLcLWrapperlErawcLcLDAQHeaderTimeUBooNEgR(void *p) {
      typedef ::art::Wrapper<raw::DAQHeaderTimeUBooNE> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::Wrapper<raw::DAQHeaderTimeUBooNE>

namespace ROOT {
   static TClass *vectorlEpairlEstringcOboolgRsPgR_Dictionary();
   static void vectorlEpairlEstringcOboolgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEstringcOboolgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEstringcOboolgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEstringcOboolgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEstringcOboolgRsPgR(void *p);
   static void destruct_vectorlEpairlEstringcOboolgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<string,bool> >*)
   {
      vector<pair<string,bool> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<string,bool> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<string,bool> >", -2, "invalid", 17,
                  typeid(vector<pair<string,bool> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEstringcOboolgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<string,bool> >) );
      instance.SetNew(&new_vectorlEpairlEstringcOboolgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEstringcOboolgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEstringcOboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEstringcOboolgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEstringcOboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<string,bool> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<string,bool> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEstringcOboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<string,bool> >*)0x0)->GetClass();
      vectorlEpairlEstringcOboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEstringcOboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEstringcOboolgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<string,bool> > : new vector<pair<string,bool> >;
   }
   static void *newArray_vectorlEpairlEstringcOboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<string,bool> >[nElements] : new vector<pair<string,bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEstringcOboolgRsPgR(void *p) {
      delete ((vector<pair<string,bool> >*)p);
   }
   static void deleteArray_vectorlEpairlEstringcOboolgRsPgR(void *p) {
      delete [] ((vector<pair<string,bool> >*)p);
   }
   static void destruct_vectorlEpairlEstringcOboolgRsPgR(void *p) {
      typedef vector<pair<string,bool> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<string,bool> >

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = 0);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "invalid", 13,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)0x0)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace {
  void TriggerDictionaryInitialization_libuboone_RawData_utils_dict_Impl() {
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
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/RawData/utils/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libuboone_RawData_utils_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace raw{class __attribute__((annotate("$clingAutoload$uboone/RawData/utils/ubdaqSoftwareTriggerData.h")))  ubdaqSoftwareTriggerData;}
namespace art{template <typename T> class __attribute__((annotate("$clingAutoload$canvas/Persistency/Common/Wrapper.h")))  Wrapper;
}
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
namespace std{template <typename > class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace raw{class __attribute__((annotate("$clingAutoload$uboone/RawData/utils/DAQHeaderTimeUBooNE.h")))  DAQHeaderTimeUBooNE;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libuboone_RawData_utils_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef NDEBUG
  #define NDEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "canvas/Persistency/Common/Wrapper.h"
#include "uboone/RawData/utils/DAQHeaderTimeUBooNE.h"
#include "uboone/RawData/utils/ubdaqSoftwareTriggerData.h"

template class std::vector< bool >;
template class art::Wrapper< raw::ubdaqSoftwareTriggerData >;
template class art::Wrapper< raw::DAQHeaderTimeUBooNE >;
template class std::pair< std::string, bool >;
template class std::vector< std::pair< std::string, bool > >;

//#include "canvas/Persistency/Common/Wrapper.h"
//#include "uboone/RawData/utils/ubdaqSoftwareTriggerData.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"art::Wrapper<raw::DAQHeaderTimeUBooNE>", payloadCode, "@",
"art::Wrapper<raw::ubdaqSoftwareTriggerData>", payloadCode, "@",
"raw::DAQHeaderTimeUBooNE", payloadCode, "@",
"raw::ubdaqSoftwareTriggerData", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libuboone_RawData_utils_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libuboone_RawData_utils_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libuboone_RawData_utils_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libuboone_RawData_utils_dict() {
  TriggerDictionaryInitialization_libuboone_RawData_utils_dict_Impl();
}
