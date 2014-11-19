// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_HArray1OfAutoDesignGeneralOrgItem_HeaderFile
#define _StepAP214_HArray1OfAutoDesignGeneralOrgItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem_HeaderFile
#include <Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx>
#endif

#ifndef _StepAP214_Array1OfAutoDesignGeneralOrgItem_HeaderFile
#include <StepAP214_Array1OfAutoDesignGeneralOrgItem.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP214_AutoDesignGeneralOrgItem;
class StepAP214_Array1OfAutoDesignGeneralOrgItem;



class StepAP214_HArray1OfAutoDesignGeneralOrgItem : public MMgt_TShared {

public:

  
      StepAP214_HArray1OfAutoDesignGeneralOrgItem(const Standard_Integer Low,const Standard_Integer Up);
  
      StepAP214_HArray1OfAutoDesignGeneralOrgItem(const Standard_Integer Low,const Standard_Integer Up,const StepAP214_AutoDesignGeneralOrgItem& V);
  
        void Init(const StepAP214_AutoDesignGeneralOrgItem& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepAP214_AutoDesignGeneralOrgItem& Value) ;
  
       const StepAP214_AutoDesignGeneralOrgItem& Value(const Standard_Integer Index) const;
  
        StepAP214_AutoDesignGeneralOrgItem& ChangeValue(const Standard_Integer Index) ;
  
       const StepAP214_Array1OfAutoDesignGeneralOrgItem& Array1() const;
  
        StepAP214_Array1OfAutoDesignGeneralOrgItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepAP214_HArray1OfAutoDesignGeneralOrgItem)

protected:




private: 


StepAP214_Array1OfAutoDesignGeneralOrgItem myArray;


};

#define ItemHArray1 StepAP214_AutoDesignGeneralOrgItem
#define ItemHArray1_hxx <StepAP214_AutoDesignGeneralOrgItem.hxx>
#define TheArray1 StepAP214_Array1OfAutoDesignGeneralOrgItem
#define TheArray1_hxx <StepAP214_Array1OfAutoDesignGeneralOrgItem.hxx>
#define TCollection_HArray1 StepAP214_HArray1OfAutoDesignGeneralOrgItem
#define TCollection_HArray1_hxx <StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem
#define TCollection_HArray1_Type_() StepAP214_HArray1OfAutoDesignGeneralOrgItem_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
