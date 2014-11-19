// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_ESDescr_HeaderFile
#define _StepData_ESDescr_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepData_ESDescr_HeaderFile
#include <Handle_StepData_ESDescr.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfTransient_HeaderFile
#include <Handle_TColStd_HArray1OfTransient.hxx>
#endif
#ifndef _Handle_Dico_DictionaryOfInteger_HeaderFile
#include <Handle_Dico_DictionaryOfInteger.hxx>
#endif
#ifndef _Handle_StepData_ESDescr_HeaderFile
#include <Handle_StepData_ESDescr.hxx>
#endif
#ifndef _StepData_EDescr_HeaderFile
#include <StepData_EDescr.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_StepData_PDescr_HeaderFile
#include <Handle_StepData_PDescr.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepData_Described_HeaderFile
#include <Handle_StepData_Described.hxx>
#endif
class TColStd_HArray1OfTransient;
class Dico_DictionaryOfInteger;
class StepData_PDescr;
class TCollection_AsciiString;
class StepData_Described;


//! This class is intended to describe the authorized form for a <br>
//!           Simple (not Plex) Entity, as a list of fields <br>
class StepData_ESDescr : public StepData_EDescr {

public:

  //! Creates an ESDescr with a type name <br>
  Standard_EXPORT   StepData_ESDescr(const Standard_CString name);
  //! Sets a new count of fields <br>
//!           Each one is described by a PDescr <br>
  Standard_EXPORT     void SetNbFields(const Standard_Integer nb) ;
  //! Sets a PDescr to describe a field <br>
//!           A Field is designated by its rank and name <br>
  Standard_EXPORT     void SetField(const Standard_Integer num,const Standard_CString name,const Handle(StepData_PDescr)& descr) ;
  //! Sets an ESDescr as based on another one <br>
//!           Hence, if there are inherited fields, the derived ESDescr <br>
//!           cumulates all them, while the base just records its own ones <br>
  Standard_EXPORT     void SetBase(const Handle(StepData_ESDescr)& base) ;
  //! Sets an ESDescr as "super-type". Applies an a base (non <br>
//!           derived) ESDescr <br>
  Standard_EXPORT     void SetSuper(const Handle(StepData_ESDescr)& super) ;
  //! Returns the type name given at creation time <br>
  Standard_EXPORT     Standard_CString TypeName() const;
  //! Returns the type name as an AsciiString <br>
  Standard_EXPORT    const TCollection_AsciiString& StepType() const;
  //! Returns the basic ESDescr, null if <me> is not derived <br>
  Standard_EXPORT     Handle_StepData_ESDescr Base() const;
  //! Returns the super-type ESDescr, null if <me> is root <br>
  Standard_EXPORT     Handle_StepData_ESDescr Super() const;
  //! Tells if <me> is sub-type of (or equal to) another one <br>
  Standard_EXPORT     Standard_Boolean IsSub(const Handle(StepData_ESDescr)& other) const;
  //! Returns the count of fields <br>
  Standard_EXPORT     Standard_Integer NbFields() const;
  //! Returns the rank of a field from its name. 0 if unknown <br>
  Standard_EXPORT     Standard_Integer Rank(const Standard_CString name) const;
  //! Returns the name of a field from its rank. empty if outofrange <br>
  Standard_EXPORT     Standard_CString Name(const Standard_Integer num) const;
  //! Returns the PDescr for the field <num> (or Null) <br>
  Standard_EXPORT     Handle_StepData_PDescr Field(const Standard_Integer num) const;
  //! Returns the PDescr for the field named <name> (or Null) <br>
  Standard_EXPORT     Handle_StepData_PDescr NamedField(const Standard_CString name) const;
  //! Tells if a ESDescr matches a step type : exact or super type <br>
  Standard_EXPORT     Standard_Boolean Matches(const Standard_CString steptype) const;
  //! Returns False <br>
  Standard_EXPORT     Standard_Boolean IsComplex() const;
  //! Creates a described entity (i.e. a simple one) <br>
  Standard_EXPORT     Handle_StepData_Described NewEntity() const;




  DEFINE_STANDARD_RTTI(StepData_ESDescr)

protected:




private: 


TCollection_AsciiString thenom;
Handle_TColStd_HArray1OfTransient thedescr;
Handle_Dico_DictionaryOfInteger thenames;
Handle_StepData_ESDescr thebase;
Handle_StepData_ESDescr thesuper;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
