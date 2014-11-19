// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_Set_HeaderFile
#define _BOPTools_Set_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif
#ifndef _BOPCol_ListOfShape_HeaderFile
#include <BOPCol_ListOfShape.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Shape;



class BOPTools_Set  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BOPTools_Set();
Standard_EXPORT virtual ~BOPTools_Set();
  
  Standard_EXPORT   BOPTools_Set(const BOPCol_BaseAllocator& theAllocator);
  
  Standard_EXPORT     BOPTools_Set& Assign(const BOPTools_Set& Other) ;
    BOPTools_Set& operator =(const BOPTools_Set& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT    const TopoDS_Shape& Shape() const;
  
  Standard_EXPORT     void Add(const TopoDS_Shape& theS,const TopAbs_ShapeEnum theType) ;
  
  Standard_EXPORT     Standard_Integer NbShapes() const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const BOPTools_Set& aOther) const;
  
  Standard_EXPORT     Standard_Integer HashCode(const Standard_Integer Upper) const;





protected:

  
  Standard_EXPORT     void Clear() ;


BOPCol_BaseAllocator myAllocator;
BOPCol_ListOfShape myShapes;
TopoDS_Shape myShape;
Standard_Integer myNbShapes;
Standard_Integer mySum;
Standard_Integer myUpper;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
