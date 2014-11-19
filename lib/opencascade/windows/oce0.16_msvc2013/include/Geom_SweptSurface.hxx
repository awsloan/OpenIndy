// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_SweptSurface_HeaderFile
#define _Geom_SweptSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_SweptSurface_HeaderFile
#include <Handle_Geom_SweptSurface.hxx>
#endif

#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Geom_Surface_HeaderFile
#include <Geom_Surface.hxx>
#endif
class Geom_Curve;
class gp_Dir;


//! Describes the common behavior for surfaces <br>
//! constructed by sweeping a curve with another curve. <br>
//! The Geom package provides two concrete derived <br>
//! surfaces: surface of revolution (a revolved surface), <br>
//! and surface of linear extrusion (an extruded surface). <br>
class Geom_SweptSurface : public Geom_Surface {

public:

  
//!  returns the continuity of the surface : <br>
//!  C0 : only geometric continuity, <br>
//!  C1 : continuity of the first derivative all along the surface, <br>
//!  C2 : continuity of the second derivative all along the surface, <br>
//!  C3 : continuity of the third derivative all along the surface, <br>
//!  G1 : tangency continuity all along the surface, <br>
//!  G2 : curvature continuity all along the surface, <br>
//!  CN : the order of continuity is infinite. <br>
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  
//!  Returns the reference direction of the swept surface. <br>
//!  For a surface of revolution it is the direction of the <br>
//!  revolution axis, for a surface of linear extrusion it is <br>
//!  the direction of extrusion. <br>
  Standard_EXPORT    const gp_Dir& Direction() const;
  
//!  Returns the referenced curve of the surface. <br>
//!  For a surface of revolution it is the revolution curve, <br>
//!  for a surface of linear extrusion it is the extruded curve. <br>
  Standard_EXPORT     Handle_Geom_Curve BasisCurve() const;




  DEFINE_STANDARD_RTTI(Geom_SweptSurface)

protected:


Handle_Geom_Curve basisCurve;
gp_Dir direction;
GeomAbs_Shape smooth;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
