// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_TopolTool_HeaderFile
#define _Adaptor3d_TopolTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Adaptor3d_TopolTool_HeaderFile
#include <Handle_Adaptor3d_TopolTool.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Adaptor2d_HLine2d_HeaderFile
#include <Handle_Adaptor2d_HLine2d.hxx>
#endif
#ifndef _Handle_Adaptor3d_HVertex_HeaderFile
#include <Handle_Adaptor3d_HVertex.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Adaptor2d_HLine2d;
class Adaptor3d_HVertex;
class Adaptor3d_HSurface;
class TColStd_HArray1OfReal;
class Standard_DomainError;
class Adaptor2d_HCurve2d;
class gp_Pnt2d;
class gp_Pnt;
class TColStd_Array1OfReal;


//! This class provides a default topological tool, <br>
//!          based on the Umin,Vmin,Umax,Vmax of an HSurface <br>
//!          from Adaptor3d. <br>
//!          All methods and fields may be redefined when <br>
//!          inheriting from this class. <br>
//!          This class is used to instantiate algorithmes <br>
//!          as Intersection, outlines,... <br>
class Adaptor3d_TopolTool : public MMgt_TShared {

public:

  
  Standard_EXPORT   Adaptor3d_TopolTool();
  
  Standard_EXPORT   Adaptor3d_TopolTool(const Handle(Adaptor3d_HSurface)& Surface);
  
  Standard_EXPORT   virtual  void Initialize() ;
  
  Standard_EXPORT   virtual  void Initialize(const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT   virtual  void Initialize(const Handle(Adaptor2d_HCurve2d)& Curve) ;
  
  Standard_EXPORT   virtual  void Init() ;
  
  Standard_EXPORT   virtual  Standard_Boolean More() ;
  
  Standard_EXPORT   virtual  Handle_Adaptor2d_HCurve2d Value() ;
  
  Standard_EXPORT   virtual  void Next() ;
  
  Standard_EXPORT   virtual  void InitVertexIterator() ;
  
  Standard_EXPORT   virtual  Standard_Boolean MoreVertex() ;
  
  Standard_EXPORT   virtual  Handle_Adaptor3d_HVertex Vertex() ;
  
  Standard_EXPORT   virtual  void NextVertex() ;
  
  Standard_EXPORT   virtual  TopAbs_State Classify(const gp_Pnt2d& P,const Standard_Real Tol,const Standard_Boolean ReacdreOnPeriodic = Standard_True) ;
  
  Standard_EXPORT   virtual  Standard_Boolean IsThePointOn(const gp_Pnt2d& P,const Standard_Real Tol,const Standard_Boolean ReacdreOnPeriodic = Standard_True) ;
  //! If the function returns the orientation of the arc. <br>
//!          If the orientation is FORWARD or REVERSED, the arc is <br>
//!          a "real" limit of the surface. <br>
//!          If the orientation is INTERNAL or EXTERNAL, the arc is <br>
//!          considered as an arc on the surface. <br>
  Standard_EXPORT   virtual  TopAbs_Orientation Orientation(const Handle(Adaptor2d_HCurve2d)& C) ;
  //! Returns the orientation of the vertex V. <br>
//!          The vertex has been found with an exploration on <br>
//!          a given arc. The orientation is the orientation <br>
//!          of the vertex on this arc. <br>
  Standard_EXPORT   virtual  TopAbs_Orientation Orientation(const Handle(Adaptor3d_HVertex)& V) ;
  //! Returns True if the vertices V1 and V2 are identical. <br>
//!          This method does not take the orientation of the <br>
//!          vertices in account. <br>
  Standard_EXPORT   virtual  Standard_Boolean Identical(const Handle(Adaptor3d_HVertex)& V1,const Handle(Adaptor3d_HVertex)& V2) ;
  //! answers if arcs and vertices may have 3d representations, <br>
//!          so that we could use Tol3d and Pnt methods. <br>
  Standard_EXPORT   virtual  Standard_Boolean Has3d() const;
  //! returns 3d tolerance of the arc C <br>
  Standard_EXPORT   virtual  Standard_Real Tol3d(const Handle(Adaptor2d_HCurve2d)& C) const;
  //! returns 3d tolerance of the vertex V <br>
  Standard_EXPORT   virtual  Standard_Real Tol3d(const Handle(Adaptor3d_HVertex)& V) const;
  //! returns 3d point of the vertex V <br>
  Standard_EXPORT   virtual  gp_Pnt Pnt(const Handle(Adaptor3d_HVertex)& V) const;
  
  Standard_EXPORT   virtual  void ComputeSamplePoints() ;
  //! compute the sample-points for the intersections algorithms <br>
  Standard_EXPORT   virtual  Standard_Integer NbSamplesU() ;
  //! compute the sample-points for the intersections algorithms <br>
  Standard_EXPORT   virtual  Standard_Integer NbSamplesV() ;
  //! compute the sample-points for the intersections algorithms <br>
  Standard_EXPORT   virtual  Standard_Integer NbSamples() ;
  //! return the set of U parameters on the surface <br>
//!  obtained by the method SamplePnts <br>
  Standard_EXPORT     void UParameters(TColStd_Array1OfReal& theArray) const;
  //! return the set of V parameters on the surface <br>
//!  obtained by the method SamplePnts <br>
  Standard_EXPORT     void VParameters(TColStd_Array1OfReal& theArray) const;
  
  Standard_EXPORT   virtual  void SamplePoint(const Standard_Integer Index,gp_Pnt2d& P2d,gp_Pnt& P3d) ;
  
  Standard_EXPORT   virtual  Standard_Boolean DomainIsInfinite() ;
  
  Standard_EXPORT   virtual  Standard_Address Edge() const;
  //! compute the sample-points for the intersections algorithms <br>
//! by adaptive algorithm for BSpline surfaces. For other surfaces algorithm <br>
//! is the same as in method ComputeSamplePoints(), but only fill arrays of U <br>
//! and V sample parameters; <br>
//! theDefl is a requred deflection <br>
//! theNUmin, theNVmin are minimal nb points for U and V. <br>
  Standard_EXPORT   virtual  void SamplePnts(const Standard_Real theDefl,const Standard_Integer theNUmin,const Standard_Integer theNVmin) ;
  //! compute the sample-points for the intersections algorithms <br>
//! by adaptive algorithm for BSpline surfaces  -  is  used  in  SamplePnts <br>
//! theDefl is a requred deflection <br>
//! theNUmin, theNVmin are minimal nb points for U and V. <br>
  Standard_EXPORT   virtual  void BSplSamplePnts(const Standard_Real theDefl,const Standard_Integer theNUmin,const Standard_Integer theNVmin) ;
  //! Returns true if provide uniform sampling of points. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsUniformSampling() const;




  DEFINE_STANDARD_RTTI(Adaptor3d_TopolTool)

protected:


Handle_Adaptor3d_HSurface myS;
Standard_Integer myNbSamplesU;
Standard_Integer myNbSamplesV;
Handle_TColStd_HArray1OfReal myUPars;
Handle_TColStd_HArray1OfReal myVPars;


private: 


Standard_Integer nbRestr;
Standard_Integer idRestr;
Standard_Real Uinf;
Standard_Real Usup;
Standard_Real Vinf;
Standard_Real Vsup;
Handle_Adaptor2d_HLine2d myRestr[4];
Standard_Integer nbVtx;
Standard_Integer idVtx;
Handle_Adaptor3d_HVertex myVtx[2];


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
