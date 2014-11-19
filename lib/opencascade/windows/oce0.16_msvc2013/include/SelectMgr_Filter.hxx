// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_Filter_HeaderFile
#define _SelectMgr_Filter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_SelectMgr_Filter_HeaderFile
#include <Handle_SelectMgr_Filter.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_SelectMgr_EntityOwner_HeaderFile
#include <Handle_SelectMgr_EntityOwner.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class SelectMgr_EntityOwner;


//! The root class to define filter objects for selection. <br>
//! Advance handling of objects requires the services of <br>
//! filters. These only allow dynamic detection and <br>
//! selection of objects which correspond to the criteria defined in each. <br>
//! Eight standard filters inheriting SelectMgr_Filter are <br>
//! defined in Open CASCADE. <br>
//!  You can create your own filters by defining new filter <br>
//! classes inheriting this framework. You use these <br>
//! filters by loading them into an AIS interactive context. <br>
class SelectMgr_Filter : public MMgt_TShared {

public:

  //! Indicates that the selected Interactive Object <br>
//! passes the filter. The owner, anObj, can be either <br>
//! direct or user. A direct owner is the corresponding <br>
//! construction element, whereas a user is the <br>
//! compound shape of which the entity forms a part. <br>
//! When an object is detected by the mouse - in AIS, <br>
//! this is done through a context selector - its owner <br>
//! is passed to the filter as an argument. <br>
//! If the object returns Standard_True, it is kept; if <br>
//! not, it is rejected. <br>
//! If you are creating a filter class inheriting this <br>
//! framework, and the daughter class is to be used in <br>
//! an AIS local context, you will need to implement the <br>
//! virtual function ActsOn. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsOk(const Handle(SelectMgr_EntityOwner)& anObj) const = 0;
  //! Returns true in an AIS local context, if this filter <br>
//! operates on a type of subshape defined in a filter <br>
//! class inheriting this framework. <br>
//! This function completes IsOk in an AIS local context. <br>
  Standard_EXPORT   virtual  Standard_Boolean ActsOn(const TopAbs_ShapeEnum aStandardMode) const;




  DEFINE_STANDARD_RTTI(SelectMgr_Filter)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
