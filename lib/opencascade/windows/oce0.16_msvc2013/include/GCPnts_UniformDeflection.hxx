// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCPnts_UniformDeflection_HeaderFile
#define _GCPnts_UniformDeflection_HeaderFile

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
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _TColgp_SequenceOfPnt_HeaderFile
#include <TColgp_SequenceOfPnt.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_DomainError;
class Standard_ConstructionError;
class Standard_OutOfRange;
class StdFail_NotDone;
class Adaptor3d_Curve;
class Adaptor2d_Curve2d;
class gp_Pnt;


//! Provides an algorithm to compute a distribution of <br>
//! points on a 'C2' continuous curve. The algorithm <br>
//! respects a criterion of maximum deflection between <br>
//! the curve and the polygon that results from the computed points. <br>
//! Note: This algorithm is relatively time consuming. A <br>
//! GCPnts_QuasiUniformDeflection algorithm is <br>
//! quicker; it can also work with non-'C2' continuous <br>
//! curves, but it generates more points in the distribution. <br>
class GCPnts_UniformDeflection  {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs an empty algorithm. To define the problem <br>
//! to be solved, use the function Initialize. <br>
  Standard_EXPORT   GCPnts_UniformDeflection();
  //! Computes a uniform Deflection distribution of points on <br>
//!  the Curve <C>. <br>
//!  if <WithControl> is True,the algorithm controls the estimate <br>
//!  deflection <br>
  Standard_EXPORT   GCPnts_UniformDeflection(Adaptor3d_Curve& C,const Standard_Real Deflection,const Standard_Boolean WithControl = Standard_True);
  //! Computes a uniform Deflection distribution of points on <br>
//!  the Curve <C>. <br>
//!  if <WithControl> is True,the algorithm controls the estimate <br>
//!  deflection <br>
  Standard_EXPORT   GCPnts_UniformDeflection(Adaptor2d_Curve2d& C,const Standard_Real Deflection,const Standard_Boolean WithControl = Standard_True);
  //! Computes a Uniform Deflection distribution of points <br>
//!  on a part of the Curve <C>. <br>
//!  if <WithControl> is True,the algorithm controls the estimate <br>
//!  deflection <br>
  Standard_EXPORT   GCPnts_UniformDeflection(Adaptor3d_Curve& C,const Standard_Real Deflection,const Standard_Real U1,const Standard_Real U2,const Standard_Boolean WithControl = Standard_True);
  //! Computes a Uniform Deflection distribution of points <br>
//!  on a part of the Curve <C>. <br>
//!  if <WithControl> is True,the algorithm controls the estimate <br>
//!  deflection <br>
  Standard_EXPORT   GCPnts_UniformDeflection(Adaptor2d_Curve2d& C,const Standard_Real Deflection,const Standard_Real U1,const Standard_Real U2,const Standard_Boolean WithControl = Standard_True);
  //! Initialize the algoritms with <C>, <Deflection> <br>
  Standard_EXPORT     void Initialize(Adaptor3d_Curve& C,const Standard_Real Deflection,const Standard_Boolean WithControl = Standard_True) ;
  //! Initialize the algoritms with <C>, <Deflection> <br>
  Standard_EXPORT     void Initialize(Adaptor2d_Curve2d& C,const Standard_Real Deflection,const Standard_Boolean WithControl = Standard_True) ;
  //! Initialize the algoritms with <C>, <Deflection>, <br>
//!          <U1>,<U2> <br>
  Standard_EXPORT     void Initialize(Adaptor3d_Curve& C,const Standard_Real Deflection,const Standard_Real U1,const Standard_Real U2,const Standard_Boolean WithControl = Standard_True) ;
  //! Initialize the algoritms with <C>, <Deflection>, <br>
//!          <U1>,<U2> <br>
//! This and the above methods initialize (or reinitialize) this algorithm and <br>
//! compute a distribution of points: <br>
//! -   on the curve C, or <br>
//! -   on the part of curve C limited by the two <br>
//!   parameter values U1 and U2, <br>
//! where the maximum distance between C and the <br>
//! polygon that results from the points of the <br>
//! distribution is not greater than Deflection. <br>
//! The first point of the distribution is either the origin <br>
//! of curve C or the point of parameter U1. The last <br>
//! point of the distribution is either the end point of <br>
//! curve C or the point of parameter U2. Intermediate <br>
//! points of the distribution are built using <br>
//! interpolations of segments of the curve limited at <br>
//! the 2nd degree. The construction ensures, in a first <br>
//! step, that the chordal deviation for this <br>
//! interpolation of the curve is less than or equal to <br>
//! Deflection. However, it does not ensure that the <br>
//! chordal deviation for the curve itself is less than or <br>
//! equal to Deflection. To do this a check is <br>
//! necessary, which may generate (second step) <br>
//! additional intermediate points. This check is time <br>
//! consuming, and can be avoided by setting <br>
//! WithControl to false. Note that by default <br>
//! WithControl is true and check is performed. <br>
//! Use the function IsDone to verify that the <br>
//! computation was successful, the function NbPoints <br>
//! to obtain the number of points of the computed <br>
//! distribution, and the function Parameter to read <br>
//! the parameter of each point. <br>
//! Warning <br>
//! -   C is necessary, 'C2' continuous. This property is <br>
//!   not checked at construction time. <br>
//! -   The roles of U1 and U2 are inverted if U1 > U2. <br>
//!   Warning <br>
//! C is an adapted curve, i.e. an object which is an interface between: <br>
//! -   the services provided by either a 2D curve from <br>
//!   the package Geom2d (in the case of an <br>
//!   Adaptor2d_Curve2d curve) or a 3D curve from <br>
//!   the package Geom (in the case of an Adaptor3d_Curve curve), <br>
//! -   and those required on the curve by the computation algorithm. <br>
  Standard_EXPORT     void Initialize(Adaptor2d_Curve2d& C,const Standard_Real Deflection,const Standard_Real U1,const Standard_Real U2,const Standard_Boolean WithControl = Standard_True) ;
  //! Returns true if the computation was successful. <br>
//! IsDone is a protection against: <br>
//! -   non-convergence of the algorithm <br>
//! -   querying the results before computation. <br>
        Standard_Boolean IsDone() const;
  //! Returns the number of points of the distribution <br>
//! computed by this algorithm. <br>
//! Exceptions <br>
//! StdFail_NotDone if this algorithm has not been <br>
//! initialized, or if the computation was not successful. <br>
        Standard_Integer NbPoints() const;
  //! Returns the parameter of the point of index Index in <br>
//! the distribution computed by this algorithm. <br>
//! Warning <br>
//! Index must be greater than or equal to 1, and less <br>
//! than or equal to the number of points of the <br>
//! distribution. However, pay particular attention as this <br>
//! condition is not checked by this function. <br>
//! Exceptions <br>
//! StdFail_NotDone if this algorithm has not been <br>
//! initialized, or if the computation was not successful. <br>
        Standard_Real Parameter(const Standard_Integer Index) const;
  //! Returns the point of index Index in the distribution <br>
//! computed by this algorithm. <br>
//! Warning <br>
//! Index must be greater than or equal to 1, and less <br>
//! than or equal to the number of points of the <br>
//! distribution. However, pay particular attention as this <br>
//! condition is not checked by this function. <br>
//! Exceptions <br>
//! StdFAil_NotDone if this algorithm has not been <br>
//! initialized, or if the computation was not successful. <br>
  Standard_EXPORT     gp_Pnt Value(const Standard_Integer Index) const;
  //! Returns the deflection between the curve and the <br>
//! polygon resulting from the points of the distribution <br>
//! computed by this algorithm. <br>
//! This value is the one given to the algorithm at the <br>
//! time of construction (or initialization). <br>
//! Exceptions <br>
//! StdFail_NotDone if this algorithm has not been <br>
//! initialized, or if the computation was not successful. <br>
        Standard_Real Deflection() const;





protected:





private:



Standard_Boolean myDone;
Standard_Real myDeflection;
TColStd_SequenceOfReal myParams;
TColgp_SequenceOfPnt myPoints;


};


#include <GCPnts_UniformDeflection.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
