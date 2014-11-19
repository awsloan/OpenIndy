// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_Drawable_HeaderFile
#define _DrawTrSurf_Drawable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawTrSurf_Drawable_HeaderFile
#include <Handle_DrawTrSurf_Drawable.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Draw_Drawable3D_HeaderFile
#include <Draw_Drawable3D.hxx>
#endif
#ifndef _GeomAbs_IsoType_HeaderFile
#include <GeomAbs_IsoType.hxx>
#endif
class Adaptor2d_Curve2d;
class Draw_Display;
class Adaptor3d_Curve;
class Adaptor3d_IsoCurve;


//! this  class adds   to   the Drawable3D methods  to <br>
//!          display Curves and Curves on Surface. <br>
//! <br>
//!          The discretisation,  number  of points on a Curve, <br>
//!          is stored in this class. <br>
class DrawTrSurf_Drawable : public Draw_Drawable3D {

public:

  //! Draw a polygon of the curve on the Display <br>
  Standard_EXPORT     void DrawCurve2dOn(Adaptor2d_Curve2d& C,Draw_Display& D) const;
  //! Draw a polygon of the curve on the Display <br>
  Standard_EXPORT     void DrawCurveOn(Adaptor3d_Curve& C,Draw_Display& D) const;
  //! Load C  with the specified iso  and Draw a polygon <br>
//!          of the curve on the Display <br>
  Standard_EXPORT     void DrawIsoCurveOn(Adaptor3d_IsoCurve& C,const GeomAbs_IsoType T,const Standard_Real P,const Standard_Real F,const Standard_Real L,Draw_Display& D) const;
  //! this is defined only to tell C++ not to complain <br>
//!          about inheriting a pure virtual method. <br>
  Standard_EXPORT   virtual  void DrawOn(Draw_Display& dis) const = 0;
  
        void SetDiscretisation(const Standard_Integer Discret) ;
  
        Standard_Integer GetDiscretisation() const;
  
        void SetDeflection(const Standard_Real Deflection) ;
  
        Standard_Real GetDeflection() const;
  
        void SetDrawMode(const Standard_Integer DrawMode) ;
  
        Standard_Integer GetDrawMode() const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_Drawable)

protected:

  //! set the number of points on a curve at creation. <br>
  Standard_EXPORT   DrawTrSurf_Drawable(const Standard_Integer discret,const Standard_Real deflection = 0.01,const Standard_Integer DrawMode = 0);



private: 


Standard_Integer myDrawMode;
Standard_Integer myDiscret;
Standard_Real myDeflection;


};


#include <DrawTrSurf_Drawable.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
