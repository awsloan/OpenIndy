// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_TheSurfFunctionOfContour_HeaderFile
#define _Contap_TheSurfFunctionOfContour_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Contap_TFunction_HeaderFile
#include <Contap_TFunction.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#include <math_FunctionSetWithDerivatives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Adaptor3d_HSurface;
class StdFail_UndefinedDerivative;
class Adaptor3d_HSurfaceTool;
class Contap_TheSurfPropsOfContour;
class Contap_HContTool;
class gp_Pnt;
class gp_Dir;
class math_Vector;
class math_Matrix;
class gp_Vec;
class gp_Dir2d;



class Contap_TheSurfFunctionOfContour  : public math_FunctionSetWithDerivatives {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Contap_TheSurfFunctionOfContour();
  
  Standard_EXPORT     void Set(const Handle(Adaptor3d_HSurface)& S) ;
  
        void Set(const gp_Pnt& Eye) ;
  
        void Set(const gp_Dir& Dir) ;
  
        void Set(const gp_Dir& Dir,const Standard_Real Angle) ;
  
        void Set(const gp_Pnt& Eye,const Standard_Real Angle) ;
  
        void Set(const Standard_Real Tolerance) ;
  
  Standard_EXPORT     Standard_Integer NbVariables() const;
  
  Standard_EXPORT     Standard_Integer NbEquations() const;
  
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D) ;
  
        Standard_Real Root() const;
  
        Standard_Real Tolerance() const;
  
       const gp_Pnt& Point() const;
  
  Standard_EXPORT     Standard_Boolean IsTangent() ;
  
       const gp_Vec& Direction3d() ;
  
       const gp_Dir2d& Direction2d() ;
  
        Contap_TFunction FunctionType() const;
  
       const gp_Pnt& Eye() const;
  
       const gp_Dir& Direction() const;
  
        Standard_Real Angle() const;
  
       const Handle_Adaptor3d_HSurface& Surface() const;





protected:





private:



Handle_Adaptor3d_HSurface mySurf;
Standard_Real myMean;
Contap_TFunction myType;
gp_Dir myDir;
gp_Pnt myEye;
Standard_Real myAng;
Standard_Real myCosAng;
Standard_Real tol;
gp_Pnt solpt;
Standard_Real valf;
Standard_Real Usol;
Standard_Real Vsol;
Standard_Real Fpu;
Standard_Real Fpv;
gp_Dir2d d2d;
gp_Vec d3d;
Standard_Boolean tangent;
Standard_Boolean computed;
Standard_Boolean derived;


};

#define TheSurface Handle_Adaptor3d_HSurface
#define TheSurface_hxx <Adaptor3d_HSurface.hxx>
#define TheSurfaceTool Adaptor3d_HSurfaceTool
#define TheSurfaceTool_hxx <Adaptor3d_HSurfaceTool.hxx>
#define TheSurfProps Contap_TheSurfPropsOfContour
#define TheSurfProps_hxx <Contap_TheSurfPropsOfContour.hxx>
#define TheContTool Contap_HContTool
#define TheContTool_hxx <Contap_HContTool.hxx>
#define Contap_SurfFunction Contap_TheSurfFunctionOfContour
#define Contap_SurfFunction_hxx <Contap_TheSurfFunctionOfContour.hxx>

#include <Contap_SurfFunction.lxx>

#undef TheSurface
#undef TheSurface_hxx
#undef TheSurfaceTool
#undef TheSurfaceTool_hxx
#undef TheSurfProps
#undef TheSurfProps_hxx
#undef TheContTool
#undef TheContTool_hxx
#undef Contap_SurfFunction
#undef Contap_SurfFunction_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif