// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_HArray1OfFaceBound_HeaderFile
#define _StepShape_HArray1OfFaceBound_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_HArray1OfFaceBound_HeaderFile
#include <Handle_StepShape_HArray1OfFaceBound.hxx>
#endif

#ifndef _StepShape_Array1OfFaceBound_HeaderFile
#include <StepShape_Array1OfFaceBound.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepShape_FaceBound_HeaderFile
#include <Handle_StepShape_FaceBound.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_FaceBound;
class StepShape_Array1OfFaceBound;



class StepShape_HArray1OfFaceBound : public MMgt_TShared {

public:

  
      StepShape_HArray1OfFaceBound(const Standard_Integer Low,const Standard_Integer Up);
  
      StepShape_HArray1OfFaceBound(const Standard_Integer Low,const Standard_Integer Up,const Handle(StepShape_FaceBound)& V);
  
        void Init(const Handle(StepShape_FaceBound)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepShape_FaceBound)& Value) ;
  
       const Handle_StepShape_FaceBound& Value(const Standard_Integer Index) const;
  
        Handle_StepShape_FaceBound& ChangeValue(const Standard_Integer Index) ;
  
       const StepShape_Array1OfFaceBound& Array1() const;
  
        StepShape_Array1OfFaceBound& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepShape_HArray1OfFaceBound)

protected:




private: 


StepShape_Array1OfFaceBound myArray;


};

#define ItemHArray1 Handle_StepShape_FaceBound
#define ItemHArray1_hxx <StepShape_FaceBound.hxx>
#define TheArray1 StepShape_Array1OfFaceBound
#define TheArray1_hxx <StepShape_Array1OfFaceBound.hxx>
#define TCollection_HArray1 StepShape_HArray1OfFaceBound
#define TCollection_HArray1_hxx <StepShape_HArray1OfFaceBound.hxx>
#define Handle_TCollection_HArray1 Handle_StepShape_HArray1OfFaceBound
#define TCollection_HArray1_Type_() StepShape_HArray1OfFaceBound_Type_()

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
