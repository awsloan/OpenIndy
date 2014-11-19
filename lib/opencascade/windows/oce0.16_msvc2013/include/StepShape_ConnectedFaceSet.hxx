// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ConnectedFaceSet_HeaderFile
#define _StepShape_ConnectedFaceSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_ConnectedFaceSet_HeaderFile
#include <Handle_StepShape_ConnectedFaceSet.hxx>
#endif

#ifndef _Handle_StepShape_HArray1OfFace_HeaderFile
#include <Handle_StepShape_HArray1OfFace.hxx>
#endif
#ifndef _StepShape_TopologicalRepresentationItem_HeaderFile
#include <StepShape_TopologicalRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepShape_Face_HeaderFile
#include <Handle_StepShape_Face.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepShape_HArray1OfFace;
class TCollection_HAsciiString;
class StepShape_Face;



class StepShape_ConnectedFaceSet : public StepShape_TopologicalRepresentationItem {

public:

  //! Returns a ConnectedFaceSet <br>
  Standard_EXPORT   StepShape_ConnectedFaceSet();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepShape_HArray1OfFace)& aCfsFaces) ;
  
  Standard_EXPORT   virtual  void SetCfsFaces(const Handle(StepShape_HArray1OfFace)& aCfsFaces) ;
  
  Standard_EXPORT   virtual  Handle_StepShape_HArray1OfFace CfsFaces() const;
  
  Standard_EXPORT   virtual  Handle_StepShape_Face CfsFacesValue(const Standard_Integer num) const;
  
  Standard_EXPORT   virtual  Standard_Integer NbCfsFaces() const;




  DEFINE_STANDARD_RTTI(StepShape_ConnectedFaceSet)

protected:




private: 


Handle_StepShape_HArray1OfFace cfsFaces;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
