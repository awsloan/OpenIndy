// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_Volume3dElementRepresentation_HeaderFile
#define _StepFEA_Volume3dElementRepresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_Volume3dElementRepresentation_HeaderFile
#include <Handle_StepFEA_Volume3dElementRepresentation.hxx>
#endif

#ifndef _Handle_StepFEA_FeaModel3d_HeaderFile
#include <Handle_StepFEA_FeaModel3d.hxx>
#endif
#ifndef _Handle_StepElement_Volume3dElementDescriptor_HeaderFile
#include <Handle_StepElement_Volume3dElementDescriptor.hxx>
#endif
#ifndef _Handle_StepElement_ElementMaterial_HeaderFile
#include <Handle_StepElement_ElementMaterial.hxx>
#endif
#ifndef _StepFEA_ElementRepresentation_HeaderFile
#include <StepFEA_ElementRepresentation.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepRepr_HArray1OfRepresentationItem_HeaderFile
#include <Handle_StepRepr_HArray1OfRepresentationItem.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationContext_HeaderFile
#include <Handle_StepRepr_RepresentationContext.hxx>
#endif
#ifndef _Handle_StepFEA_HArray1OfNodeRepresentation_HeaderFile
#include <Handle_StepFEA_HArray1OfNodeRepresentation.hxx>
#endif
class StepFEA_FeaModel3d;
class StepElement_Volume3dElementDescriptor;
class StepElement_ElementMaterial;
class TCollection_HAsciiString;
class StepRepr_HArray1OfRepresentationItem;
class StepRepr_RepresentationContext;
class StepFEA_HArray1OfNodeRepresentation;


//! Representation of STEP entity Volume3dElementRepresentation <br>
class StepFEA_Volume3dElementRepresentation : public StepFEA_ElementRepresentation {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_Volume3dElementRepresentation();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentation_Name,const Handle(StepRepr_HArray1OfRepresentationItem)& aRepresentation_Items,const Handle(StepRepr_RepresentationContext)& aRepresentation_ContextOfItems,const Handle(StepFEA_HArray1OfNodeRepresentation)& aElementRepresentation_NodeList,const Handle(StepFEA_FeaModel3d)& aModelRef,const Handle(StepElement_Volume3dElementDescriptor)& aElementDescriptor,const Handle(StepElement_ElementMaterial)& aMaterial) ;
  //! Returns field ModelRef <br>
  Standard_EXPORT     Handle_StepFEA_FeaModel3d ModelRef() const;
  //! Set field ModelRef <br>
  Standard_EXPORT     void SetModelRef(const Handle(StepFEA_FeaModel3d)& ModelRef) ;
  //! Returns field ElementDescriptor <br>
  Standard_EXPORT     Handle_StepElement_Volume3dElementDescriptor ElementDescriptor() const;
  //! Set field ElementDescriptor <br>
  Standard_EXPORT     void SetElementDescriptor(const Handle(StepElement_Volume3dElementDescriptor)& ElementDescriptor) ;
  //! Returns field Material <br>
  Standard_EXPORT     Handle_StepElement_ElementMaterial Material() const;
  //! Set field Material <br>
  Standard_EXPORT     void SetMaterial(const Handle(StepElement_ElementMaterial)& Material) ;




  DEFINE_STANDARD_RTTI(StepFEA_Volume3dElementRepresentation)

protected:




private: 


Handle_StepFEA_FeaModel3d theModelRef;
Handle_StepElement_Volume3dElementDescriptor theElementDescriptor;
Handle_StepElement_ElementMaterial theMaterial;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
