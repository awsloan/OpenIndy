// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESControl_IGESBoundary_HeaderFile
#define _IGESControl_IGESBoundary_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESControl_IGESBoundary_HeaderFile
#include <Handle_IGESControl_IGESBoundary.hxx>
#endif

#ifndef _IGESToBRep_IGESBoundary_HeaderFile
#include <IGESToBRep_IGESBoundary.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_ShapeExtend_WireData_HeaderFile
#include <Handle_ShapeExtend_WireData.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class IGESToBRep_CurveAndSurface;
class IGESData_IGESEntity;
class ShapeExtend_WireData;
class IGESData_HArray1OfIGESEntity;


//! Translates IGES boundary entity (types 141, 142 and 508) <br>
//!          in Advanced Data Exchange. <br>
//!          Redefines translation and treatment methods from inherited <br>
//!          open class IGESToBRep_IGESBoundary. <br>
class IGESControl_IGESBoundary : public IGESToBRep_IGESBoundary {

public:

  //! Creates an object and calls inherited constuctor. <br>
  Standard_EXPORT   IGESControl_IGESBoundary();
  //! Creates an object and calls inherited constuctor. <br>
  Standard_EXPORT   IGESControl_IGESBoundary(const IGESToBRep_CurveAndSurface& CS);
  //! Checks result of translation of IGES boundary entities <br>
//!          (types 141, 142 or 508). <br>
//!          Checks consistency of 2D and 3D representations and keeps <br>
//!          only one if they are inconsistent. <br>
//!          Checks the closure of resulting wire and if it is not closed, <br>
//!          checks 2D and 3D representation and updates the resulting <br>
//!          wire to contain only closed representation. <br>
  Standard_EXPORT   virtual  void Check(const Standard_Boolean result,const Standard_Boolean checkclosure,const Standard_Boolean okCurve3d,const Standard_Boolean okCurve2d) ;




  DEFINE_STANDARD_RTTI(IGESControl_IGESBoundary)

protected:

  
  Standard_EXPORT   virtual  Standard_Boolean Transfer(Standard_Boolean& okCurve,Standard_Boolean& okCurve3d,Standard_Boolean& okCurve2d,const Handle(IGESData_IGESEntity)& icurve3d,const Handle(ShapeExtend_WireData)& scurve3d,const Standard_Boolean usescurve,const Standard_Boolean toreverse3d,const Handle(IGESData_HArray1OfIGESEntity)& curves2d,const Standard_Boolean toreverse2d,const Standard_Integer number,Handle(ShapeExtend_WireData)& lsewd) ;



private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
