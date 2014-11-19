// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Poly_Array1OfTriangle_HeaderFile
#define _Poly_Array1OfTriangle_HeaderFile

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
class Poly_Triangle;



class Poly_Array1OfTriangle  {
public:

  DEFINE_STANDARD_ALLOC

  
      Poly_Array1OfTriangle(const Standard_Integer Low,const Standard_Integer Up);
  
      Poly_Array1OfTriangle(const Poly_Triangle& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Poly_Triangle& V) ;
  
        void Destroy() ;
~Poly_Array1OfTriangle()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const Poly_Array1OfTriangle& Assign(const Poly_Array1OfTriangle& Other) ;
   const Poly_Array1OfTriangle& operator =(const Poly_Array1OfTriangle& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Poly_Triangle& Value) ;
  
       const Poly_Triangle& Value(const Standard_Integer Index) const;
     const Poly_Triangle& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Poly_Triangle& ChangeValue(const Standard_Integer Index) ;
      Poly_Triangle& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   Poly_Array1OfTriangle(const Poly_Array1OfTriangle& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Poly_Triangle
#define Array1Item_hxx <Poly_Triangle.hxx>
#define TCollection_Array1 Poly_Array1OfTriangle
#define TCollection_Array1_hxx <Poly_Array1OfTriangle.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
