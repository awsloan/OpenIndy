// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_BlockBuilder_HeaderFile
#define _TopOpeBRepBuild_BlockBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_DataMapOfIntegerInteger_HeaderFile
#include <TColStd_DataMapOfIntegerInteger.hxx>
#endif
#ifndef _TopTools_IndexedMapOfOrientedShape_HeaderFile
#include <TopTools_IndexedMapOfOrientedShape.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopOpeBRepBuild_ShapeSet;
class TopOpeBRepBuild_BlockIterator;
class TopoDS_Shape;



class TopOpeBRepBuild_BlockBuilder  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepBuild_BlockBuilder();
  
  Standard_EXPORT   TopOpeBRepBuild_BlockBuilder(TopOpeBRepBuild_ShapeSet& SS);
  
  Standard_EXPORT     void MakeBlock(TopOpeBRepBuild_ShapeSet& SS) ;
  
  Standard_EXPORT     void InitBlock() ;
  
  Standard_EXPORT     Standard_Boolean MoreBlock() const;
  
  Standard_EXPORT     void NextBlock() ;
  
  Standard_EXPORT     TopOpeBRepBuild_BlockIterator BlockIterator() const;
  //! Returns the current element of <BI>. <br>
  Standard_EXPORT    const TopoDS_Shape& Element(const TopOpeBRepBuild_BlockIterator& BI) const;
  
  Standard_EXPORT    const TopoDS_Shape& Element(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Integer Element(const TopoDS_Shape& S) const;
  
  Standard_EXPORT     Standard_Boolean ElementIsValid(const TopOpeBRepBuild_BlockIterator& BI) const;
  
  Standard_EXPORT     Standard_Boolean ElementIsValid(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Integer AddElement(const TopoDS_Shape& S) ;
  
  Standard_EXPORT     void SetValid(const TopOpeBRepBuild_BlockIterator& BI,const Standard_Boolean isvalid) ;
  
  Standard_EXPORT     void SetValid(const Standard_Integer I,const Standard_Boolean isvalid) ;
  
  Standard_EXPORT     Standard_Boolean CurrentBlockIsRegular() ;





protected:





private:



TColStd_DataMapOfIntegerInteger myOrientedShapeMapIsValid;
TopTools_IndexedMapOfOrientedShape myOrientedShapeMap;
TColStd_SequenceOfInteger myBlocks;
Standard_Integer myBlockIndex;
Standard_Boolean myIsDone;
TColStd_SequenceOfInteger myBlocksIsRegular;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif