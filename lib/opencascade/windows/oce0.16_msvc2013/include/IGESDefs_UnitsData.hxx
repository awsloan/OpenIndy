// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_UnitsData_HeaderFile
#define _IGESDefs_UnitsData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDefs_UnitsData_HeaderFile
#include <Handle_IGESDefs_UnitsData.hxx>
#endif

#ifndef _Handle_Interface_HArray1OfHAsciiString_HeaderFile
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Interface_HArray1OfHAsciiString;
class TColStd_HArray1OfReal;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class TCollection_HAsciiString;


//! defines IGES UnitsData Entity, Type <316> Form <0> <br>
//!          in package IGESDefs <br>
//!          This class stores data about a model's fundamental units. <br>
class IGESDefs_UnitsData : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDefs_UnitsData();
  //! This method is used to set the fields of the class <br>
//!           UnitsData <br>
//!       - unitTypes  : Types of the units being defined <br>
//!       - unitValues : Unit Values of the units <br>
//!       - unitScales : Multiplicative Scale Factors <br>
//! raises exception if lengths of unitTypes, unitValues and <br>
//! unitScale are not same <br>
  Standard_EXPORT     void Init(const Handle(Interface_HArray1OfHAsciiString)& unitTypes,const Handle(Interface_HArray1OfHAsciiString)& unitValues,const Handle(TColStd_HArray1OfReal)& unitScales) ;
  //! returns the Number of units defined by this entity <br>
  Standard_EXPORT     Standard_Integer NbUnits() const;
  //! returns the Type of the UnitNum'th unit being defined <br>
//! raises exception if UnitNum <= 0 or UnitNum > NbUnits() <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString UnitType(const Standard_Integer UnitNum) const;
  //! returns the Units of the UnitNum'th unit being defined <br>
//! raises exception if UnitNum <= 0 or UnitNum > NbUnits() <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString UnitValue(const Standard_Integer UnitNum) const;
  //! returns the multiplicative scale factor to be apllied to the <br>
//! UnitNum'th unit being defined <br>
//! raises exception if UnitNum <= 0 or UnitNum > NbUnits() <br>
  Standard_EXPORT     Standard_Real ScaleFactor(const Standard_Integer UnitNum) const;




  DEFINE_STANDARD_RTTI(IGESDefs_UnitsData)

protected:




private: 


Handle_Interface_HArray1OfHAsciiString theUnitTypes;
Handle_Interface_HArray1OfHAsciiString theUnitValues;
Handle_TColStd_HArray1OfReal theUnitScales;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
