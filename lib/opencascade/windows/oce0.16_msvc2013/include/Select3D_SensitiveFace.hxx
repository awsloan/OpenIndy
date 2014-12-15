// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitiveFace_HeaderFile
#define _Select3D_SensitiveFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Select3D_SensitiveFace_HeaderFile
#include <Handle_Select3D_SensitiveFace.hxx>
#endif

#ifndef _Select3D_TypeOfSensitivity_HeaderFile
#include <Select3D_TypeOfSensitivity.hxx>
#endif
#ifndef _Select3D_SensitivePoly_HeaderFile
#include <Select3D_SensitivePoly.hxx>
#endif
#ifndef _Handle_SelectBasics_EntityOwner_HeaderFile
#include <Handle_SelectBasics_EntityOwner.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfPnt_HeaderFile
#include <Handle_TColgp_HArray1OfPnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _SelectBasics_PickArgs_HeaderFile
#include <SelectBasics_PickArgs.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Handle_Select3D_SensitiveEntity_HeaderFile
#include <Handle_Select3D_SensitiveEntity.hxx>
#endif
class Standard_ConstructionError;
class Standard_OutOfRange;
class SelectBasics_EntityOwner;
class TColgp_Array1OfPnt;
class TColgp_HArray1OfPnt;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;
class gp_Lin;
class Select3D_SensitiveEntity;
class TopLoc_Location;


//! Sensitive Entity to make a face selectable. <br>
//! In some cases this class can raise Standard_ConstructionError and <br>
//! Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly. <br>
class Select3D_SensitiveFace : public Select3D_SensitivePoly {

public:

  //! Constructs a sensitive face object defined by the <br>
//! owner OwnerId, the array of points ThePoints, and <br>
//! the sensitivity type Sensitivity. <br>
//! The array of points is the outer polygon of the geometric face. <br>
  Standard_EXPORT   Select3D_SensitiveFace(const Handle(SelectBasics_EntityOwner)& OwnerId,const TColgp_Array1OfPnt& ThePoints,const Select3D_TypeOfSensitivity Sensitivity = Select3D_TOS_INTERIOR);
  //! Constructs a sensitive face object defined by the <br>
//! owner OwnerId, the array of points ThePoints, and <br>
//! the sensitivity type Sensitivity. <br>
//! The array of points is the outer polygon of the geometric face. <br>
  Standard_EXPORT   Select3D_SensitiveFace(const Handle(SelectBasics_EntityOwner)& OwnerId,const Handle(TColgp_HArray1OfPnt)& ThePoints,const Select3D_TypeOfSensitivity Sensitivity = Select3D_TOS_INTERIOR);
  //! Checks whether the sensitive entity matches the picking <br>
//! detection area (close to the picking line). <br>
//! For details please refer to base class declaration. <br>
  Standard_EXPORT   virtual  Standard_Boolean Matches(const SelectBasics_PickArgs& thePickArgs,Standard_Real& theMatchDMin,Standard_Real& theMatchDepth) ;
  
  Standard_EXPORT   virtual  Standard_Boolean Matches(const Standard_Real XMin,const Standard_Real YMin,const Standard_Real XMax,const Standard_Real YMax,const Standard_Real aTol) ;
  
  Standard_EXPORT   virtual  Standard_Boolean Matches(const TColgp_Array1OfPnt2d& Polyline,const Bnd_Box2d& aBox,const Standard_Real aTol) ;
  //! Computes the depth values for all 3D points defining this face and returns <br>
//! the minimal value among them. <br>
//! If the "minimal depth" approach is not suitable and gives wrong detection results <br>
//! in some particular case, a custom sensitive face class can redefine this method. <br>
  Standard_EXPORT   virtual  Standard_Real ComputeDepth(const gp_Lin& thePickLine,const Standard_Real theDepthMin,const Standard_Real theDepthMax) const;
  
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S,const Standard_Boolean FullDump = Standard_True) const;
  //! Returns the copy of this <br>
  Standard_EXPORT   virtual  Handle_Select3D_SensitiveEntity GetConnected(const TopLoc_Location& theLocation) ;




  DEFINE_STANDARD_RTTI(Select3D_SensitiveFace)

protected:




private: 

  //! Warning: Obsolete. <br>
//! Use newer version of the method with min, max limits passed as arguments. <br>
  Standard_EXPORT     void ComputeDepth(const gp_Lin& EyeLine) const;

Select3D_TypeOfSensitivity mytype;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif