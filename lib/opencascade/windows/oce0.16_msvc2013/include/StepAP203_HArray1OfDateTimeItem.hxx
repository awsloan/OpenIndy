// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_HArray1OfDateTimeItem_HeaderFile
#define _StepAP203_HArray1OfDateTimeItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP203_HArray1OfDateTimeItem_HeaderFile
#include <Handle_StepAP203_HArray1OfDateTimeItem.hxx>
#endif

#ifndef _StepAP203_Array1OfDateTimeItem_HeaderFile
#include <StepAP203_Array1OfDateTimeItem.hxx>
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
class StepAP203_DateTimeItem;
class StepAP203_Array1OfDateTimeItem;



class StepAP203_HArray1OfDateTimeItem : public MMgt_TShared {

public:

  
      StepAP203_HArray1OfDateTimeItem(const Standard_Integer Low,const Standard_Integer Up);
  
      StepAP203_HArray1OfDateTimeItem(const Standard_Integer Low,const Standard_Integer Up,const StepAP203_DateTimeItem& V);
  
        void Init(const StepAP203_DateTimeItem& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepAP203_DateTimeItem& Value) ;
  
       const StepAP203_DateTimeItem& Value(const Standard_Integer Index) const;
  
        StepAP203_DateTimeItem& ChangeValue(const Standard_Integer Index) ;
  
       const StepAP203_Array1OfDateTimeItem& Array1() const;
  
        StepAP203_Array1OfDateTimeItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepAP203_HArray1OfDateTimeItem)

protected:




private: 


StepAP203_Array1OfDateTimeItem myArray;


};

#define ItemHArray1 StepAP203_DateTimeItem
#define ItemHArray1_hxx <StepAP203_DateTimeItem.hxx>
#define TheArray1 StepAP203_Array1OfDateTimeItem
#define TheArray1_hxx <StepAP203_Array1OfDateTimeItem.hxx>
#define TCollection_HArray1 StepAP203_HArray1OfDateTimeItem
#define TCollection_HArray1_hxx <StepAP203_HArray1OfDateTimeItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepAP203_HArray1OfDateTimeItem
#define TCollection_HArray1_Type_() StepAP203_HArray1OfDateTimeItem_Type_()

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
