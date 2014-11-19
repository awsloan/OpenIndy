// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ExtrudedAreaSolid_HeaderFile
#define _StepShape_ExtrudedAreaSolid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_ExtrudedAreaSolid_HeaderFile
#include <Handle_StepShape_ExtrudedAreaSolid.hxx>
#endif

#ifndef _Handle_StepGeom_Direction_HeaderFile
#include <Handle_StepGeom_Direction.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepShape_SweptAreaSolid_HeaderFile
#include <StepShape_SweptAreaSolid.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepGeom_CurveBoundedSurface_HeaderFile
#include <Handle_StepGeom_CurveBoundedSurface.hxx>
#endif
class StepGeom_Direction;
class TCollection_HAsciiString;
class StepGeom_CurveBoundedSurface;



class StepShape_ExtrudedAreaSolid : public StepShape_SweptAreaSolid {

public:

  //! Returns a ExtrudedAreaSolid <br>
  Standard_EXPORT   StepShape_ExtrudedAreaSolid();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_CurveBoundedSurface)& aSweptArea) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_CurveBoundedSurface)& aSweptArea,const Handle(StepGeom_Direction)& aExtrudedDirection,const Standard_Real aDepth) ;
  
  Standard_EXPORT     void SetExtrudedDirection(const Handle(StepGeom_Direction)& aExtrudedDirection) ;
  
  Standard_EXPORT     Handle_StepGeom_Direction ExtrudedDirection() const;
  
  Standard_EXPORT     void SetDepth(const Standard_Real aDepth) ;
  
  Standard_EXPORT     Standard_Real Depth() const;




  DEFINE_STANDARD_RTTI(StepShape_ExtrudedAreaSolid)

protected:




private: 


Handle_StepGeom_Direction extrudedDirection;
Standard_Real depth;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
