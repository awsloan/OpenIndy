// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_FaceData_HeaderFile
#define _HLRBRep_FaceData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_HLRAlgo_WiresBlock_HeaderFile
#include <Handle_HLRAlgo_WiresBlock.hxx>
#endif
#ifndef _HLRBRep_Surface_HeaderFile
#include <HLRBRep_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class HLRAlgo_WiresBlock;
class TopoDS_Face;
class HLRBRep_Surface;



class HLRBRep_FaceData  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   HLRBRep_FaceData();
  //! <Or> is the orientation of the face.  <Cl> is true <br>
//!          if the face  belongs to a  closed  volume. <NW> is <br>
//!          the number of wires ( or block  of  edges ) of the <br>
//!          face. <br>
  Standard_EXPORT     void Set(const TopoDS_Face& FG,const TopAbs_Orientation Or,const Standard_Boolean Cl,const Standard_Integer NW) ;
  //! Set <NE> the number  of  edges of the wire  number <br>
//!          <WI>. <br>
  Standard_EXPORT     void SetWire(const Standard_Integer WI,const Standard_Integer NE) ;
  //! Set the edge number <EWI> of the  wire <WI>. <br>
  Standard_EXPORT     void SetWEdge(const Standard_Integer WI,const Standard_Integer EWI,const Standard_Integer EI,const TopAbs_Orientation Or,const Standard_Boolean OutL,const Standard_Boolean Inte,const Standard_Boolean Dble,const Standard_Boolean IsoL) ;
  
        Standard_Boolean Selected() const;
  
        void Selected(const Standard_Boolean B) ;
  
        Standard_Boolean Back() const;
  
        void Back(const Standard_Boolean B) ;
  
        Standard_Boolean Side() const;
  
        void Side(const Standard_Boolean B) ;
  
        Standard_Boolean Closed() const;
  
        void Closed(const Standard_Boolean B) ;
  
        Standard_Boolean Hiding() const;
  
        void Hiding(const Standard_Boolean B) ;
  
        Standard_Boolean Simple() const;
  
        void Simple(const Standard_Boolean B) ;
  
        Standard_Boolean Cut() const;
  
        void Cut(const Standard_Boolean B) ;
  
        Standard_Boolean WithOutL() const;
  
        void WithOutL(const Standard_Boolean B) ;
  
        Standard_Boolean Plane() const;
  
        void Plane(const Standard_Boolean B) ;
  
        Standard_Boolean Cylinder() const;
  
        void Cylinder(const Standard_Boolean B) ;
  
        Standard_Boolean Cone() const;
  
        void Cone(const Standard_Boolean B) ;
  
        Standard_Boolean Sphere() const;
  
        void Sphere(const Standard_Boolean B) ;
  
        Standard_Boolean Torus() const;
  
        void Torus(const Standard_Boolean B) ;
  
        Standard_Real Size() const;
  
        void Size(const Standard_Real S) ;
  
        TopAbs_Orientation Orientation() const;
  
        void Orientation(const TopAbs_Orientation O) ;
  
        Handle_HLRAlgo_WiresBlock& Wires() ;
  
        HLRBRep_Surface& Geometry() ;
  
        Standard_ShortReal Tolerance() const;





protected:





private:



Standard_Integer myFlags;
Handle_HLRAlgo_WiresBlock myWires;
HLRBRep_Surface myGeometry;
Standard_Real mySize;
Standard_ShortReal myTolerance;


};


#include <HLRBRep_FaceData.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
