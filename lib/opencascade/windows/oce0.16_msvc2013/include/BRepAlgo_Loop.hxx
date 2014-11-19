// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_Loop_HeaderFile
#define _BRepAlgo_Loop_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#include <TopTools_DataMapOfShapeShape.hxx>
#endif
class TopoDS_Face;
class TopoDS_Edge;
class TopTools_ListOfShape;
class TopTools_DataMapOfShapeShape;


//! Builds the loops from a set of edges on a face. <br>
class BRepAlgo_Loop  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepAlgo_Loop();
  //! Init with <F> the set of edges must have <br>
//!          pcurves on <F>. <br>
  Standard_EXPORT     void Init(const TopoDS_Face& F) ;
  //! Add E with <LV>. <E> will be copied and trim <br>
//!          by vertices in <LV>. <br>
  Standard_EXPORT     void AddEdge(TopoDS_Edge& E,const TopTools_ListOfShape& LV) ;
  //! Add <E> as const edge, E can be in the result. <br>
  Standard_EXPORT     void AddConstEdge(const TopoDS_Edge& E) ;
  //! Add <LE> as a set of const edges. <br>
  Standard_EXPORT     void AddConstEdges(const TopTools_ListOfShape& LE) ;
  //! Make loops. <br>
  Standard_EXPORT     void Perform() ;
  //!  Cut the  edge <E>  in  several edges  <NE> on the <br>
//!          vertices<VonE>. <br>
  Standard_EXPORT     void CutEdge(const TopoDS_Edge& E,const TopTools_ListOfShape& VonE,TopTools_ListOfShape& NE) const;
  //! Returns the list of wires performed. <br>
//!          can be an empty list. <br>
  Standard_EXPORT    const TopTools_ListOfShape& NewWires() const;
  //!  Build faces from the wires result. <br>
  Standard_EXPORT     void WiresToFaces() ;
  //! Returns the list of faces. <br>
//!  Warning: The method <WiresToFaces> as to be called before. <br>
//!          can be an empty list. <br>
  Standard_EXPORT    const TopTools_ListOfShape& NewFaces() const;
  //! Returns the list of new edges built from an edge <E> <br>
//!          it can be an empty list. <br>
  Standard_EXPORT    const TopTools_ListOfShape& NewEdges(const TopoDS_Edge& E) const;
  //! Returns the datamap of vertices with their substitutes. <br>
  Standard_EXPORT     void GetVerticesForSubstitute(TopTools_DataMapOfShapeShape& VerVerMap) const;
  
  Standard_EXPORT     void VerticesForSubstitute(TopTools_DataMapOfShapeShape& VerVerMap) ;





protected:





private:



TopoDS_Face myFace;
TopTools_ListOfShape myConstEdges;
TopTools_DataMapOfShapeListOfShape myVerOnEdges;
TopTools_ListOfShape myNewWires;
TopTools_ListOfShape myNewFaces;
TopTools_DataMapOfShapeListOfShape myNewEdges;
TopTools_DataMapOfShapeShape myVerticesForSubstitute;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
