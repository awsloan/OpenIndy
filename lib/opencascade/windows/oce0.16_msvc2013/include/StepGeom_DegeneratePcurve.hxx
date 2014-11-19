// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_DegeneratePcurve_HeaderFile
#define _StepGeom_DegeneratePcurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_DegeneratePcurve_HeaderFile
#include <Handle_StepGeom_DegeneratePcurve.hxx>
#endif

#ifndef _Handle_StepGeom_Surface_HeaderFile
#include <Handle_StepGeom_Surface.hxx>
#endif
#ifndef _Handle_StepRepr_DefinitionalRepresentation_HeaderFile
#include <Handle_StepRepr_DefinitionalRepresentation.hxx>
#endif
#ifndef _StepGeom_Point_HeaderFile
#include <StepGeom_Point.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepGeom_Surface;
class StepRepr_DefinitionalRepresentation;
class TCollection_HAsciiString;



class StepGeom_DegeneratePcurve : public StepGeom_Point {

public:

  //! Returns a DegeneratePcurve <br>
  Standard_EXPORT   StepGeom_DegeneratePcurve();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_Surface)& aBasisSurface,const Handle(StepRepr_DefinitionalRepresentation)& aReferenceToCurve) ;
  
  Standard_EXPORT     void SetBasisSurface(const Handle(StepGeom_Surface)& aBasisSurface) ;
  
  Standard_EXPORT     Handle_StepGeom_Surface BasisSurface() const;
  
  Standard_EXPORT     void SetReferenceToCurve(const Handle(StepRepr_DefinitionalRepresentation)& aReferenceToCurve) ;
  
  Standard_EXPORT     Handle_StepRepr_DefinitionalRepresentation ReferenceToCurve() const;




  DEFINE_STANDARD_RTTI(StepGeom_DegeneratePcurve)

protected:




private: 


Handle_StepGeom_Surface basisSurface;
Handle_StepRepr_DefinitionalRepresentation referenceToCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
