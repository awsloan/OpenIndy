// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_ShapeDivideAngle_HeaderFile
#define _ShapeUpgrade_ShapeDivideAngle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _ShapeUpgrade_ShapeDivide_HeaderFile
#include <ShapeUpgrade_ShapeDivide.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Shape;


//! Splits all surfaces of revolution, cylindrical, toroidal, <br>
//!          conical, spherical surfaces in the given shape so that <br>
//!          each resulting segment covers not more than defined number <br>
//!          of degrees. <br>
class ShapeUpgrade_ShapeDivideAngle  : public ShapeUpgrade_ShapeDivide {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor. <br>
  Standard_EXPORT   ShapeUpgrade_ShapeDivideAngle(const Standard_Real MaxAngle);
  //! Initialize by a Shape. <br>
  Standard_EXPORT   ShapeUpgrade_ShapeDivideAngle(const Standard_Real MaxAngle,const TopoDS_Shape& S);
  //! Resets tool for splitting face with given angle <br>
  Standard_EXPORT     void InitTool(const Standard_Real MaxAngle) ;
  //! Set maximal angle (calls InitTool) <br>
  Standard_EXPORT     void SetMaxAngle(const Standard_Real MaxAngle) ;
  //! Returns maximal angle <br>
  Standard_EXPORT     Standard_Real MaxAngle() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif