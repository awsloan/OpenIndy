// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_TransientProcess_HeaderFile
#define _Transfer_TransientProcess_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Transfer_TransientProcess_HeaderFile
#include <Handle_Transfer_TransientProcess.hxx>
#endif

#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Handle_Interface_HGraph_HeaderFile
#include <Handle_Interface_HGraph.hxx>
#endif
#ifndef _Handle_Dico_DictionaryOfTransient_HeaderFile
#include <Handle_Dico_DictionaryOfTransient.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif
#ifndef _Transfer_ProcessForTransient_HeaderFile
#include <Transfer_ProcessForTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
class Interface_InterfaceModel;
class Interface_HGraph;
class Dico_DictionaryOfTransient;
class TColStd_HSequenceOfTransient;
class Interface_Graph;
class Standard_Transient;
class Standard_Type;
class Message_Messenger;
class Interface_EntityIterator;


//! Adds specific features to the generic definition : <br>
//!           TransientProcess is intended to work from an InterfaceModel <br>
//!           to a set of application objects. <br>
//! <br>
//!           Hence, some informations about starting entities can be gotten <br>
//!           from the model : for Trace, CheckList, Integrity Status <br>
class Transfer_TransientProcess : public Transfer_ProcessForTransient {

public:

  //! Sets TransientProcess at initial state, with an initial size <br>
  Standard_EXPORT   Transfer_TransientProcess(const Standard_Integer nb = 10000);
  //! Sets an InterfaceModel, used by StartTrace, CheckList, queries <br>
//!           on Integrity, to give informations significant for each norm. <br>
  Standard_EXPORT     void SetModel(const Handle(Interface_InterfaceModel)& model) ;
  //! Returns the Model used for StartTrace <br>
  Standard_EXPORT     Handle_Interface_InterfaceModel Model() const;
  //! Sets a Graph : superseedes SetModel if already done <br>
  Standard_EXPORT     void SetGraph(const Handle(Interface_HGraph)& HG) ;
  
  Standard_EXPORT     Standard_Boolean HasGraph() const;
  
  Standard_EXPORT     Handle_Interface_HGraph HGraph() const;
  
  Standard_EXPORT    const Interface_Graph& Graph() const;
  //! Sets a Context : according to receiving appli, to be <br>
//!           interpreted by the Actor <br>
  Standard_EXPORT     void SetContext(const Standard_CString name,const Handle(Standard_Transient)& ctx) ;
  //! Returns the Context attached to a name, if set and if it is <br>
//!           Kind of the type, else a Null Handle <br>
//!           Returns True if OK, False if no Context <br>
  Standard_EXPORT     Standard_Boolean GetContext(const Standard_CString name,const Handle(Standard_Type)& type,Handle(Standard_Transient)& ctx) const;
  //! Returns (modifiable) the whole definition of Context <br>
//!           Rather for internal use (ex.: preparing and setting in once) <br>
  Standard_EXPORT     Handle_Dico_DictionaryOfTransient& Context() ;
  //! Specific printing to trace an entity : prints label and type <br>
//!           (if model is set) <br>
  Standard_EXPORT   virtual  void PrintTrace(const Handle(Standard_Transient)& start,const Handle(Message_Messenger)& S) const;
  //! Specific number of a starting object for check-list : Number <br>
//!           in model <br>
  Standard_EXPORT   virtual  Standard_Integer CheckNum(const Handle(Standard_Transient)& ent) const;
  //! Returns the list of sharings entities, AT ANY LEVEL, which are <br>
//!           kind of a given type. Calls TypedSharings from Graph <br>
//!           Returns an empty list if the Graph has not been aknowledged <br>
  Standard_EXPORT     Interface_EntityIterator TypedSharings(const Handle(Standard_Transient)& start,const Handle(Standard_Type)& type) const;
  //! Tells if an entity is well loaded from file (even if its data <br>
//!           fail on checking, they are present). Mostly often, answers <br>
//!           True. Else, there was a syntactic error in the file. <br>
//!           A non-loaded entity MAY NOT BE transferred, unless its Report <br>
//!           (in the model) is interpreted <br>
  Standard_EXPORT     Standard_Boolean IsDataLoaded(const Handle(Standard_Transient)& ent) const;
  //! Tells if an entity fails on data checking (load time, <br>
//!           syntactic, or semantic check). Normally, should answer False. <br>
//!           It is not prudent to try transferring an entity which fails on <br>
//!           data checking <br>
  Standard_EXPORT     Standard_Boolean IsDataFail(const Handle(Standard_Transient)& ent) const;
  //! Prints statistics on a given output, according mode <br>
  Standard_EXPORT     void PrintStats(const Standard_Integer mode,const Handle(Message_Messenger)& S) const;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfTransient RootsForTransfer() ;




  DEFINE_STANDARD_RTTI(Transfer_TransientProcess)

protected:




private: 


Handle_Interface_InterfaceModel themodel;
Handle_Interface_HGraph thegraph;
Handle_Dico_DictionaryOfTransient thectx;
Handle_TColStd_HSequenceOfTransient thetrroots;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
