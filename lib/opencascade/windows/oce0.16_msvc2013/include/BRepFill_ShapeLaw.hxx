// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_ShapeLaw_HeaderFile
#define _BRepFill_ShapeLaw_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepFill_ShapeLaw_HeaderFile
#include <Handle_BRepFill_ShapeLaw.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Handle_TopTools_HArray1OfShape_HeaderFile
#include <Handle_TopTools_HArray1OfShape.hxx>
#endif
#ifndef _Handle_Law_Function_HeaderFile
#include <Handle_Law_Function.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepFill_SectionLaw_HeaderFile
#include <BRepFill_SectionLaw.hxx>
#endif
#ifndef _Handle_GeomFill_SectionLaw_HeaderFile
#include <Handle_GeomFill_SectionLaw.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopTools_HArray1OfShape;
class Law_Function;
class TopoDS_Vertex;
class TopoDS_Wire;
class GeomFill_SectionLaw;
class TopoDS_Shape;
class TopoDS_Edge;


//! Build Section Law, with an Vertex, or an Wire <br>
class BRepFill_ShapeLaw : public BRepFill_SectionLaw {

public:

  //! Construct an constant Law <br>
  Standard_EXPORT   BRepFill_ShapeLaw(const TopoDS_Vertex& V,const Standard_Boolean Build = Standard_True);
  //! Construct an constant Law <br>
  Standard_EXPORT   BRepFill_ShapeLaw(const TopoDS_Wire& W,const Standard_Boolean Build = Standard_True);
  //! Construct an evolutive Law <br>
  Standard_EXPORT   BRepFill_ShapeLaw(const TopoDS_Wire& W,const Handle(Law_Function)& L,const Standard_Boolean Build = Standard_True);
  //! Say if the input shape is a  vertex. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsVertex() const;
  //! Say if the Law is  Constant. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsConstant() const;
  //! Give the law build on a concaneted section <br>
  Standard_EXPORT   virtual  Handle_GeomFill_SectionLaw ConcatenedLaw() const;
  
  Standard_EXPORT   virtual  GeomAbs_Shape Continuity(const Standard_Integer Index,const Standard_Real TolAngular) const;
  
  Standard_EXPORT   virtual  Standard_Real VertexTol(const Standard_Integer Index,const Standard_Real Param) const;
  
  Standard_EXPORT   virtual  TopoDS_Vertex Vertex(const Standard_Integer Index,const Standard_Real Param) const;
  
  Standard_EXPORT   virtual  void D0(const Standard_Real Param,TopoDS_Shape& S) ;
  
       const TopoDS_Edge& Edge(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(BRepFill_ShapeLaw)

protected:


Standard_Boolean vertex;


private: 

  
  Standard_EXPORT     void Init(const Standard_Boolean B) ;

TopoDS_Shape myShape;
Handle_TopTools_HArray1OfShape myEdges;
Handle_Law_Function TheLaw;


};


#include <BRepFill_ShapeLaw.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
