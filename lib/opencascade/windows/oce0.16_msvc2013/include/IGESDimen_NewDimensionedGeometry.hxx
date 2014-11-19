// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_NewDimensionedGeometry_HeaderFile
#define _IGESDimen_NewDimensionedGeometry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_NewDimensionedGeometry_HeaderFile
#include <Handle_IGESDimen_NewDimensionedGeometry.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfXYZ_HeaderFile
#include <Handle_TColgp_HArray1OfXYZ.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class IGESData_IGESEntity;
class IGESData_HArray1OfIGESEntity;
class TColStd_HArray1OfInteger;
class TColgp_HArray1OfXYZ;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class gp_Pnt;


//! defines New Dimensioned Geometry, Type <402>, Form <21> <br>
//!           in package IGESDimen <br>
//!           Links a dimension entity with the geometry entities it <br>
//!           is dimensioning, so that later, in the receiving <br>
//!           database, the dimension can be automatically recalculated <br>
//!           and redrawn should the geometry be changed. <br>
class IGESDimen_NewDimensionedGeometry : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_NewDimensionedGeometry();
  //! This method is used to set the fields of the class <br>
//!           NewDimensionedGeometry <br>
//!       - nbDimen       : Number of Dimensions, default = 1 <br>
//!       - aDimen        : Dimension Entity <br>
//!       - anOrientation : Dimension Orientation Flag <br>
//!       - anAngle       : Angle Value <br>
//!       - allEntities   : Geometric Entities <br>
//!       - allLocations  : Dimension Location Flags <br>
//!       - allPoints     : Points on the Geometry Entities <br>
//! exception raised if lengths of entities, locations, points <br>
//! are not the same <br>
  Standard_EXPORT     void Init(const Standard_Integer nbDimens,const Handle(IGESData_IGESEntity)& aDimen,const Standard_Integer anOrientation,const Standard_Real anAngle,const Handle(IGESData_HArray1OfIGESEntity)& allEntities,const Handle(TColStd_HArray1OfInteger)& allLocations,const Handle(TColgp_HArray1OfXYZ)& allPoints) ;
  //! returns the number of dimensions <br>
  Standard_EXPORT     Standard_Integer NbDimensions() const;
  //! returns the number of associated geometry entities <br>
  Standard_EXPORT     Standard_Integer NbGeometries() const;
  //! returns the dimension entity <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity DimensionEntity() const;
  //! returns the dimension orientation flag <br>
  Standard_EXPORT     Standard_Integer DimensionOrientationFlag() const;
  //! returns the angle value <br>
  Standard_EXPORT     Standard_Real AngleValue() const;
  //! returns the Index'th geometry entity <br>
//! raises exception if Index <= 0 or Index > NbGeometries() <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity GeometryEntity(const Standard_Integer Index) const;
  //! returns the Index'th geometry entity's dimension location flag <br>
//! raises exception if Index <= 0 or Index > NbGeometries() <br>
  Standard_EXPORT     Standard_Integer DimensionLocationFlag(const Standard_Integer Index) const;
  //! coordinate of point on Index'th geometry entity <br>
//! raises exception if Index <= 0 or Index > NbGeometries() <br>
  Standard_EXPORT     gp_Pnt Point(const Standard_Integer Index) const;
  //! coordinate of point on Index'th geometry entity after Transformation <br>
//! raises exception if Index <= 0 or Index > NbGeometries() <br>
  Standard_EXPORT     gp_Pnt TransformedPoint(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(IGESDimen_NewDimensionedGeometry)

protected:




private: 


Standard_Integer theNbDimensions;
Handle_IGESData_IGESEntity theDimensionEntity;
Standard_Integer theDimensionOrientationFlag;
Standard_Real theAngleValue;
Handle_IGESData_HArray1OfIGESEntity theGeometryEntities;
Handle_TColStd_HArray1OfInteger theDimensionLocationFlags;
Handle_TColgp_HArray1OfXYZ thePoints;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
