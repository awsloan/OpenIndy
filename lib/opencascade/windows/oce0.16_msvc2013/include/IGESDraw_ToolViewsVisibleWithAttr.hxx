// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_ToolViewsVisibleWithAttr_HeaderFile
#define _IGESDraw_ToolViewsVisibleWithAttr_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_IGESDraw_ViewsVisibleWithAttr_HeaderFile
#include <Handle_IGESDraw_ViewsVisibleWithAttr.hxx>
#endif
#ifndef _Handle_IGESData_IGESReaderData_HeaderFile
#include <Handle_IGESData_IGESReaderData.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class IGESDraw_ViewsVisibleWithAttr;
class IGESData_IGESReaderData;
class IGESData_ParamReader;
class IGESData_IGESWriter;
class Interface_EntityIterator;
class IGESData_DirChecker;
class Interface_ShareTool;
class Interface_Check;
class Interface_CopyTool;
class IGESData_IGESDumper;
class Message_Messenger;


//! Tool to work on a ViewsVisibleWithAttr. Called by various Modules <br>
//!           (ReadWriteModule, GeneralModule, SpecificModule) <br>
class IGESDraw_ToolViewsVisibleWithAttr  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a ToolViewsVisibleWithAttr, ready to work <br>
  Standard_EXPORT   IGESDraw_ToolViewsVisibleWithAttr();
  //! Reads own parameters from file. <PR> gives access to them, <br>
//!           <IR> detains parameter types and values <br>
  Standard_EXPORT     void ReadOwnParams(const Handle(IGESDraw_ViewsVisibleWithAttr)& ent,const Handle(IGESData_IGESReaderData)& IR,IGESData_ParamReader& PR) const;
  //! Writes own parameters to IGESWriter <br>
  Standard_EXPORT     void WriteOwnParams(const Handle(IGESDraw_ViewsVisibleWithAttr)& ent,IGESData_IGESWriter& IW) const;
  //! Lists the Entities shared by a ViewsVisibleWithAttr <ent>, from <br>
//!           its specific (own) parameters shared not implied, i.e. all but <br>
//!           the Displayed Entities <br>
  Standard_EXPORT     void OwnShared(const Handle(IGESDraw_ViewsVisibleWithAttr)& ent,Interface_EntityIterator& iter) const;
  //! Lists the Entities shared by a ViewsVisible <ent>, from <br>
//!           its specific (own) implied parameters : the Displayed Entities <br>
  Standard_EXPORT     void OwnImplied(const Handle(IGESDraw_ViewsVisibleWithAttr)& ent,Interface_EntityIterator& iter) const;
  //! Returns specific DirChecker <br>
  Standard_EXPORT     IGESData_DirChecker DirChecker(const Handle(IGESDraw_ViewsVisibleWithAttr)& ent) const;
  //! Performs Specific Semantic Check <br>
  Standard_EXPORT     void OwnCheck(const Handle(IGESDraw_ViewsVisibleWithAttr)& ent,const Interface_ShareTool& shares,Handle(Interface_Check)& ach) const;
  //! Copies Specific Parameters shared not implied, i.e. all but <br>
//!           the Displayed Entities <br>
  Standard_EXPORT     void OwnCopy(const Handle(IGESDraw_ViewsVisibleWithAttr)& entfrom,const Handle(IGESDraw_ViewsVisibleWithAttr)& entto,Interface_CopyTool& TC) const;
  //! Copies Specific implied Parameters : the Displayed Entities <br>
//!           which have already been copied <br>
  Standard_EXPORT     void OwnRenew(const Handle(IGESDraw_ViewsVisibleWithAttr)& entfrom,const Handle(IGESDraw_ViewsVisibleWithAttr)& entto,const Interface_CopyTool& TC) const;
  //! Clears specific implied parameters, which cause looping <br>
//!           structures; required for deletion <br>
  Standard_EXPORT     void OwnWhenDelete(const Handle(IGESDraw_ViewsVisibleWithAttr)& ent) const;
  //! Dump of Specific Parameters <br>
  Standard_EXPORT     void OwnDump(const Handle(IGESDraw_ViewsVisibleWithAttr)& ent,const IGESData_IGESDumper& dumper,const Handle(Message_Messenger)& S,const Standard_Integer own) const;
  //! Sets automatic unambiguous Correction on a ViewsVisibleWithAttr <br>
//!           (all displayed entities must refer to <ent> in directory part, <br>
//!           else the list is cleared) <br>
  Standard_EXPORT     Standard_Boolean OwnCorrect(const Handle(IGESDraw_ViewsVisibleWithAttr)& ent) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
