// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PNaming_Name_2_HeaderFile
#define _PNaming_Name_2_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PNaming_Name_2_HeaderFile
#include <Handle_PNaming_Name_2.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PNaming_HArray1OfNamedShape_HeaderFile
#include <Handle_PNaming_HArray1OfNamedShape.hxx>
#endif
#ifndef _Handle_PNaming_NamedShape_HeaderFile
#include <Handle_PNaming_NamedShape.hxx>
#endif
#ifndef _Handle_PCollection_HAsciiString_HeaderFile
#include <Handle_PCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
class PNaming_HArray1OfNamedShape;
class PNaming_NamedShape;
class PCollection_HAsciiString;


class PNaming_Name_2 : public Standard_Persistent {

public:

  
  Standard_EXPORT   PNaming_Name_2();
  
        void Type(const Standard_Integer T) ;
  
        void ShapeType(const Standard_Integer T) ;
  
        void Arguments(const Handle(PNaming_HArray1OfNamedShape)& Args) ;
  
        void StopNamedShape(const Handle(PNaming_NamedShape)& arg) ;
  
        void Orientation(const Standard_Integer Or) ;
  
        Standard_Integer Type() const;
  
        Standard_Integer ShapeType() const;
  
        Handle_PNaming_HArray1OfNamedShape Arguments() const;
  
        Handle_PNaming_NamedShape StopNamedShape() const;
  
        void Index(const Standard_Integer I) ;
  
        Standard_Integer Index() const;
  
       const Handle_PCollection_HAsciiString& ContextLabel() const;
  
        void ContextLabel(const Handle(PCollection_HAsciiString)& theLab) ;
  
        Standard_Integer Orientation() const;

PNaming_Name_2(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPNaming_Name_2myType() const { return myType; }
    void _CSFDB_SetPNaming_Name_2myType(const Standard_Integer p) { myType = p; }
    Standard_Integer _CSFDB_GetPNaming_Name_2myShapeType() const { return myShapeType; }
    void _CSFDB_SetPNaming_Name_2myShapeType(const Standard_Integer p) { myShapeType = p; }
    Handle(PNaming_HArray1OfNamedShape) _CSFDB_GetPNaming_Name_2myArgs() const { return myArgs; }
    void _CSFDB_SetPNaming_Name_2myArgs(const Handle(PNaming_HArray1OfNamedShape)& p) { myArgs = p; }
    Handle(PNaming_NamedShape) _CSFDB_GetPNaming_Name_2myStop() const { return myStop; }
    void _CSFDB_SetPNaming_Name_2myStop(const Handle(PNaming_NamedShape)& p) { myStop = p; }
    Standard_Integer _CSFDB_GetPNaming_Name_2myIndex() const { return myIndex; }
    void _CSFDB_SetPNaming_Name_2myIndex(const Standard_Integer p) { myIndex = p; }
    Handle(PCollection_HAsciiString) _CSFDB_GetPNaming_Name_2myContextLabel() const { return myContextLabel; }
    void _CSFDB_SetPNaming_Name_2myContextLabel(const Handle(PCollection_HAsciiString)& p) { myContextLabel = p; }
    Standard_Integer _CSFDB_GetPNaming_Name_2myOrientation() const { return myOrientation; }
    void _CSFDB_SetPNaming_Name_2myOrientation(const Standard_Integer p) { myOrientation = p; }



  DEFINE_STANDARD_RTTI(PNaming_Name_2)

protected:




private: 


Standard_Integer myType;
Standard_Integer myShapeType;
Handle_PNaming_HArray1OfNamedShape myArgs;
Handle_PNaming_NamedShape myStop;
Standard_Integer myIndex;
Handle_PCollection_HAsciiString myContextLabel;
Standard_Integer myOrientation;


};


#include <PNaming_Name_2.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif