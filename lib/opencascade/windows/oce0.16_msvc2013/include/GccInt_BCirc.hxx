// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccInt_BCirc_HeaderFile
#define _GccInt_BCirc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GccInt_BCirc_HeaderFile
#include <Handle_GccInt_BCirc.hxx>
#endif

#ifndef _gp_Circ2d_HeaderFile
#include <gp_Circ2d.hxx>
#endif
#ifndef _GccInt_Bisec_HeaderFile
#include <GccInt_Bisec.hxx>
#endif
#ifndef _GccInt_IType_HeaderFile
#include <GccInt_IType.hxx>
#endif
class gp_Circ2d;


//! Describes a circle as a bisecting curve between two 2D <br>
//! geometric objects (such as circles or points). <br>
class GccInt_BCirc : public GccInt_Bisec {

public:

  //! Constructs a bisecting curve whose geometry is the 2D circle Circ. <br>
  Standard_EXPORT   GccInt_BCirc(const gp_Circ2d& Circ);
  //! Returns a 2D circle which is the geometry of this bisecting curve. <br>
  Standard_EXPORT   virtual  gp_Circ2d Circle() const;
  //! Returns GccInt_Cir, which is the type of any GccInt_BCirc bisecting curve. <br>
  Standard_EXPORT     GccInt_IType ArcType() const;




  DEFINE_STANDARD_RTTI(GccInt_BCirc)

protected:




private: 


gp_Circ2d cir;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
