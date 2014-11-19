// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_Array1OfVolumeElementPurpose_HeaderFile
#define _StepElement_Array1OfVolumeElementPurpose_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepElement_VolumeElementPurpose;



class StepElement_Array1OfVolumeElementPurpose  {
public:

  DEFINE_STANDARD_ALLOC

  
      StepElement_Array1OfVolumeElementPurpose(const Standard_Integer Low,const Standard_Integer Up);
  
      StepElement_Array1OfVolumeElementPurpose(const StepElement_VolumeElementPurpose& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const StepElement_VolumeElementPurpose& V) ;
  
        void Destroy() ;
~StepElement_Array1OfVolumeElementPurpose()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepElement_Array1OfVolumeElementPurpose& Assign(const StepElement_Array1OfVolumeElementPurpose& Other) ;
   const StepElement_Array1OfVolumeElementPurpose& operator =(const StepElement_Array1OfVolumeElementPurpose& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepElement_VolumeElementPurpose& Value) ;
  
       const StepElement_VolumeElementPurpose& Value(const Standard_Integer Index) const;
     const StepElement_VolumeElementPurpose& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        StepElement_VolumeElementPurpose& ChangeValue(const Standard_Integer Index) ;
      StepElement_VolumeElementPurpose& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepElement_Array1OfVolumeElementPurpose(const StepElement_Array1OfVolumeElementPurpose& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item StepElement_VolumeElementPurpose
#define Array1Item_hxx <StepElement_VolumeElementPurpose.hxx>
#define TCollection_Array1 StepElement_Array1OfVolumeElementPurpose
#define TCollection_Array1_hxx <StepElement_Array1OfVolumeElementPurpose.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
