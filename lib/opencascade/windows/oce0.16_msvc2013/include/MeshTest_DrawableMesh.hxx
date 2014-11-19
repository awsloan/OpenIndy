// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshTest_DrawableMesh_HeaderFile
#define _MeshTest_DrawableMesh_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MeshTest_DrawableMesh_HeaderFile
#include <Handle_MeshTest_DrawableMesh.hxx>
#endif

#ifndef _Handle_BRepMesh_FastDiscret_HeaderFile
#include <Handle_BRepMesh_FastDiscret.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Draw_Drawable3D_HeaderFile
#include <Draw_Drawable3D.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class BRepMesh_FastDiscret;
class TopoDS_Shape;
class TColStd_SequenceOfInteger;
class Draw_Display;
class Draw_Drawable3D;
class Draw_Interpretor;


//! A  drawable  mesh.   It  contains  a  sequence  of <br>
//!          highlighted edges and highlighted vertices. <br>
class MeshTest_DrawableMesh : public Draw_Drawable3D {

public:

  
  Standard_EXPORT   MeshTest_DrawableMesh();
  
  Standard_EXPORT   MeshTest_DrawableMesh(const TopoDS_Shape& S,const Standard_Real Deflect,const Standard_Boolean Partage,const Standard_Boolean InShape = Standard_False);
  
  Standard_EXPORT   MeshTest_DrawableMesh(const Handle(BRepMesh_FastDiscret)& Tr);
  
  Standard_EXPORT     void AddInShape(const Standard_Boolean inshape) ;
  
  Standard_EXPORT     void Add(const TopoDS_Shape& S) ;
  
  Standard_EXPORT     TColStd_SequenceOfInteger& Edges() ;
  
  Standard_EXPORT     TColStd_SequenceOfInteger& Vertices() ;
  
  Standard_EXPORT     TColStd_SequenceOfInteger& Triangles() ;
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& S) const;
  
  Standard_EXPORT     Handle_BRepMesh_FastDiscret Mesh() const;




  DEFINE_STANDARD_RTTI(MeshTest_DrawableMesh)

protected:




private: 


Handle_BRepMesh_FastDiscret myMesh;
Standard_Real myDeflection;
TColStd_SequenceOfInteger myEdges;
TColStd_SequenceOfInteger myVertices;
TColStd_SequenceOfInteger myTriangles;
Standard_Boolean myinshape;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
