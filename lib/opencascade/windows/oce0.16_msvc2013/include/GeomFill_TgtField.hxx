// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_TgtField_HeaderFile
#define _GeomFill_TgtField_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_TgtField_HeaderFile
#include <Handle_GeomFill_TgtField.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Law_BSpline_HeaderFile
#include <Handle_Law_BSpline.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Law_BSpline;
class gp_Vec;


//! Root class defining the methods we need to make an <br>
//!          algorithmic tangents field. <br>
class GeomFill_TgtField : public MMgt_TShared {

public:

  
  Standard_EXPORT   virtual  Standard_Boolean IsScalable() const;
  
  Standard_EXPORT   virtual  void Scale(const Handle(Law_BSpline)& Func) ;
  //! Computes  the value  of the    field of tangency    at <br>
//!          parameter W. <br>
  Standard_EXPORT   virtual  gp_Vec Value(const Standard_Real W) const = 0;
  //! Computes the  derivative of  the field of  tangency at <br>
//!          parameter W. <br>
  Standard_EXPORT   virtual  gp_Vec D1(const Standard_Real W) const = 0;
  //! Computes the value and the  derivative of the field of <br>
//!          tangency at parameter W. <br>
  Standard_EXPORT   virtual  void D1(const Standard_Real W,gp_Vec& V,gp_Vec& DV) const = 0;




  DEFINE_STANDARD_RTTI(GeomFill_TgtField)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
