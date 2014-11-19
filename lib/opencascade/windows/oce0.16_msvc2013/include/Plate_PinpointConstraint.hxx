// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_PinpointConstraint_HeaderFile
#define _Plate_PinpointConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _gp_XY_HeaderFile
#include <gp_XY.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class gp_XY;
class gp_XYZ;


//! define a constraint on the Plate <br>
//! <br>
class Plate_PinpointConstraint  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Plate_PinpointConstraint();
  
  Standard_EXPORT   Plate_PinpointConstraint(const gp_XY& point2d,const gp_XYZ& ImposedValue,const Standard_Integer iu = 0,const Standard_Integer iv = 0);
  
       const gp_XY& Pnt2d() const;
  
       const Standard_Integer& Idu() const;
  
       const Standard_Integer& Idv() const;
  
       const gp_XYZ& Value() const;





protected:





private:



gp_XYZ value;
gp_XY pnt2d;
Standard_Integer idu;
Standard_Integer idv;


};


#include <Plate_PinpointConstraint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
