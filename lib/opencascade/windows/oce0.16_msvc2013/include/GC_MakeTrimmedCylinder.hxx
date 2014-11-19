// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakeTrimmedCylinder_HeaderFile
#define _GC_MakeTrimmedCylinder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_RectangularTrimmedSurface_HeaderFile
#include <Handle_Geom_RectangularTrimmedSurface.hxx>
#endif
#ifndef _GC_Root_HeaderFile
#include <GC_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom_RectangularTrimmedSurface;
class StdFail_NotDone;
class gp_Pnt;
class gp_Circ;
class gp_Ax1;
class gp_Cylinder;


//! Implements construction algorithms for a trimmed <br>
//! cylinder limited by two planes orthogonal to its axis. <br>
//! The result is a Geom_RectangularTrimmedSurface surface. <br>
//! A MakeTrimmedCylinder provides a framework for: <br>
//! -   defining the construction of the trimmed cylinder, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. In particular, the Value <br>
//!   function returns the constructed trimmed cylinder. <br>
class GC_MakeTrimmedCylinder  : public GC_Root {
public:

  DEFINE_STANDARD_ALLOC

  //! Make a cylindricalSurface <Cyl> from Geom <br>
//!          Its axis is is <P1P2> and its radius is the distance <br>
//!          between <P3> and <P1P2>. <br>
//!          The height is the distance between P1 and P2. <br>
  Standard_EXPORT   GC_MakeTrimmedCylinder(const gp_Pnt& P1,const gp_Pnt& P2,const gp_Pnt& P3);
  //! Make a cylindricalSurface <Cyl> from gp by its base <Circ>. <br>
//!          Its axis is the normal to the plane defined bi <Circ>. <br>
//!          <Height> can be greater than zero or lower than zero. <br>
//!          In the first case the V parametric direction of the <br>
//!          result has the same orientation as the normal to <Circ>. <br>
//!          In the other case it has the opposite orientation. <br>
  Standard_EXPORT   GC_MakeTrimmedCylinder(const gp_Circ& Circ,const Standard_Real Height);
  //! Make a cylindricalSurface <Cyl> from gp by its <br>
//!          axis <A1> and its radius <Radius>. <br>
//!          It returns NullObject if <Radius> is lower than zero. <br>
//!          <Height> can be greater than zero or lower than zero. <br>
//!          In the first case the V parametric direction of the <br>
//!          result has the same orientation as <A1>. <br>
//!          In the other case it has the opposite orientation. <br>
  Standard_EXPORT   GC_MakeTrimmedCylinder(const gp_Ax1& A1,const Standard_Real Radius,const Standard_Real Height);
  //! Make a RectangularTrimmedSurface <Cylinder> from gp by <br>
//!          a cylinder from gp. <br>
//!          It is trimmed by the point <P> and the heigh <Heigh>. <br>
//!          <Height> can be greater than zero or lower than zero. <br>
//!          in the first case the limit section is in the side of <br>
//!          the positives V paramters of <Cyl> and in the other <br>
//!          side if <Heigh> is lower than zero. <br>
  Standard_EXPORT   GC_MakeTrimmedCylinder(const gp_Cylinder& Cyl,const gp_Pnt& P,const Standard_Real Height);
  //! Make a RectangularTrimmedSurface <Cylinder> from gp by <br>
//!          a cylinder from gp. <br>
//!          It is trimmed by the two points <P1> and <P2>. <br>
//! Warning <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_NegativeRadius if Radius is less than 0.0, or <br>
//! -   gce_ConfusedPoints if the points P1 and P2 are coincident. <br>
//! -   gce_ColinearPoints if the points P1, P2 and P3 are collinear. <br>
  Standard_EXPORT   GC_MakeTrimmedCylinder(const gp_Cylinder& Cyl,const gp_Pnt& P1,const gp_Pnt& P2);
  //! Returns the constructed trimmed cylinder. <br>
//! Exceptions <br>
//! StdFail_NotDone if no trimmed cylinder is constructed. <br>
  Standard_EXPORT    const Handle_Geom_RectangularTrimmedSurface& Value() const;
  
  Standard_EXPORT    const Handle_Geom_RectangularTrimmedSurface& Operator() const;
Standard_EXPORT operator Handle_Geom_RectangularTrimmedSurface() const;





protected:





private:



Handle_Geom_RectangularTrimmedSurface TheCyl;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
