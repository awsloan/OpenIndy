// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_HeaderFile
#define _LocOpe_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Wire;
class TopoDS_Face;
class TopoDS_Edge;
class TopoDS_Shape;
class TColgp_SequenceOfPnt;
class LocOpe_SplitShape;
class LocOpe_ProjectedWires;
class LocOpe_WiresOnShape;
class LocOpe_Spliter;
class LocOpe_Generator;
class LocOpe_GeneratedShape;
class LocOpe_GluedShape;
class LocOpe_Prism;
class LocOpe_Revol;
class LocOpe_Pipe;
class LocOpe_DPrism;
class LocOpe_LinearForm;
class LocOpe_RevolutionForm;
class LocOpe_Gluer;
class LocOpe_FindEdges;
class LocOpe_FindEdgesInFace;
class LocOpe_DataMapOfShapePnt;
class LocOpe_PntFace;
class LocOpe_CurveShapeIntersector;
class LocOpe_CSIntersector;
class LocOpe_BuildShape;
class LocOpe_SplitDrafts;
class LocOpe_SequenceOfPntFace;
class LocOpe_SequenceOfLin;
class LocOpe_SequenceOfCirc;
class LocOpe_HBuilder;
class LocOpe_BuildWires;
class LocOpe_DataMapNodeOfDataMapOfShapePnt;
class LocOpe_DataMapIteratorOfDataMapOfShapePnt;
class LocOpe_SequenceNodeOfSequenceOfPntFace;
class LocOpe_SequenceNodeOfSequenceOfLin;
class LocOpe_SequenceNodeOfSequenceOfCirc;


//! Provides  tools to implement local     topological <br>
//!          operations on a shape. <br>
class LocOpe  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns Standard_True  when the wire <W> is closed <br>
//!          on the face <OnF>. <br>
  Standard_EXPORT   static  Standard_Boolean Closed(const TopoDS_Wire& W,const TopoDS_Face& OnF) ;
  //! Returns Standard_True  when the edge <E> is closed <br>
//!          on the face <OnF>. <br>
  Standard_EXPORT   static  Standard_Boolean Closed(const TopoDS_Edge& E,const TopoDS_Face& OnF) ;
  //! Returns Standard_True  when the faces are tangent <br>
  Standard_EXPORT   static  Standard_Boolean TgtFaces(const TopoDS_Edge& E,const TopoDS_Face& F1,const TopoDS_Face& F2) ;
  
  Standard_EXPORT   static  void SampleEdges(const TopoDS_Shape& S,TColgp_SequenceOfPnt& Pt) ;





protected:





private:




friend class LocOpe_SplitShape;
friend class LocOpe_ProjectedWires;
friend class LocOpe_WiresOnShape;
friend class LocOpe_Spliter;
friend class LocOpe_Generator;
friend class LocOpe_GeneratedShape;
friend class LocOpe_GluedShape;
friend class LocOpe_Prism;
friend class LocOpe_Revol;
friend class LocOpe_Pipe;
friend class LocOpe_DPrism;
friend class LocOpe_LinearForm;
friend class LocOpe_RevolutionForm;
friend class LocOpe_Gluer;
friend class LocOpe_FindEdges;
friend class LocOpe_FindEdgesInFace;
friend class LocOpe_DataMapOfShapePnt;
friend class LocOpe_PntFace;
friend class LocOpe_CurveShapeIntersector;
friend class LocOpe_CSIntersector;
friend class LocOpe_BuildShape;
friend class LocOpe_SplitDrafts;
friend class LocOpe_SequenceOfPntFace;
friend class LocOpe_SequenceOfLin;
friend class LocOpe_SequenceOfCirc;
friend class LocOpe_HBuilder;
friend class LocOpe_BuildWires;
friend class LocOpe_DataMapNodeOfDataMapOfShapePnt;
friend class LocOpe_DataMapIteratorOfDataMapOfShapePnt;
friend class LocOpe_SequenceNodeOfSequenceOfPntFace;
friend class LocOpe_SequenceNodeOfSequenceOfLin;
friend class LocOpe_SequenceNodeOfSequenceOfCirc;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
