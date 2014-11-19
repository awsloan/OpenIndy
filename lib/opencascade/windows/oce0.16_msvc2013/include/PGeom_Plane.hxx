// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_Plane_HeaderFile
#define _PGeom_Plane_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_Plane_HeaderFile
#include <Handle_PGeom_Plane.hxx>
#endif

#ifndef _PGeom_ElementarySurface_HeaderFile
#include <PGeom_ElementarySurface.hxx>
#endif
class gp_Ax3;


class PGeom_Plane : public PGeom_ElementarySurface {

public:

  //! Create a plane with default values. <br>
  Standard_EXPORT   PGeom_Plane();
  //! Creates a Plane with these field values. <br>
  Standard_EXPORT   PGeom_Plane(const gp_Ax3& aPosition);

PGeom_Plane(const Storage_stCONSTclCOM& a) : PGeom_ElementarySurface(a)
{
  
}



  DEFINE_STANDARD_RTTI(PGeom_Plane)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
