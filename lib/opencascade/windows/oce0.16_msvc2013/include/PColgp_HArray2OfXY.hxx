// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HArray2OfXY_HeaderFile
#define _PColgp_HArray2OfXY_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColgp_HArray2OfXY_HeaderFile
#include <Handle_PColgp_HArray2OfXY.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_XY_HeaderFile
#include <gp_XY.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _PColgp_FieldOfHArray2OfXY_HeaderFile
#include <PColgp_FieldOfHArray2OfXY.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
#ifndef _Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXY_HeaderFile
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXY.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_Persistent;
class Standard_RangeError;
class Standard_OutOfRange;
class gp_XY;
class PColgp_FieldOfHArray2OfXY;
class PColgp_VArrayNodeOfFieldOfHArray2OfXY;
class PColgp_VArrayTNodeOfFieldOfHArray2OfXY;


class PColgp_HArray2OfXY : public Standard_Persistent {

public:

  
  Standard_EXPORT   PColgp_HArray2OfXY(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   PColgp_HArray2OfXY(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const gp_XY& V);
  
  Standard_EXPORT     Standard_Integer ColLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
  Standard_EXPORT     Standard_Integer RowLength() const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Row,const Standard_Integer Col,const gp_XY& Value) ;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
  Standard_EXPORT     gp_XY Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;

  PColgp_HArray2OfXY( )
{
  
}
PColgp_HArray2OfXY(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColgp_HArray2OfXYmyLowerRow() const { return myLowerRow; }
    void _CSFDB_SetPColgp_HArray2OfXYmyLowerRow(const Standard_Integer p) { myLowerRow = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfXYmyLowerCol() const { return myLowerCol; }
    void _CSFDB_SetPColgp_HArray2OfXYmyLowerCol(const Standard_Integer p) { myLowerCol = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfXYmyUpperRow() const { return myUpperRow; }
    void _CSFDB_SetPColgp_HArray2OfXYmyUpperRow(const Standard_Integer p) { myUpperRow = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfXYmyUpperCol() const { return myUpperCol; }
    void _CSFDB_SetPColgp_HArray2OfXYmyUpperCol(const Standard_Integer p) { myUpperCol = p; }
    const PColgp_FieldOfHArray2OfXY& _CSFDB_GetPColgp_HArray2OfXYData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColgp_HArray2OfXY)

protected:




private: 

  
  Standard_EXPORT     PColgp_FieldOfHArray2OfXY Field() const;
  
  Standard_EXPORT     Standard_Address Datas() const;

Standard_Integer myLowerRow;
Standard_Integer myLowerCol;
Standard_Integer myUpperRow;
Standard_Integer myUpperCol;
PColgp_FieldOfHArray2OfXY Data;


};

#define Item gp_XY
#define Item_hxx <gp_XY.hxx>
#define PCollection_FieldOfHArray2 PColgp_FieldOfHArray2OfXY
#define PCollection_FieldOfHArray2_hxx <PColgp_FieldOfHArray2OfXY.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColgp_VArrayNodeOfFieldOfHArray2OfXY
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColgp_VArrayNodeOfFieldOfHArray2OfXY.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColgp_VArrayTNodeOfFieldOfHArray2OfXY
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColgp_VArrayTNodeOfFieldOfHArray2OfXY.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColgp_VArrayNodeOfFieldOfHArray2OfXY
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColgp_VArrayNodeOfFieldOfHArray2OfXY.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColgp_VArrayTNodeOfFieldOfHArray2OfXY
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColgp_VArrayTNodeOfFieldOfHArray2OfXY.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXY
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfXY_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXY
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfXY_Type_()
#define PCollection_HArray2 PColgp_HArray2OfXY
#define PCollection_HArray2_hxx <PColgp_HArray2OfXY.hxx>
#define Handle_PCollection_HArray2 Handle_PColgp_HArray2OfXY
#define PCollection_HArray2_Type_() PColgp_HArray2OfXY_Type_()

#include <PCollection_HArray2.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray2
#undef PCollection_FieldOfHArray2_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray2
#undef PCollection_VArrayTNodeOfFieldOfHArray2_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray2
#undef PCollection_VArrayTNodeOfFieldOfHArray2_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_Type_
#undef PCollection_HArray2
#undef PCollection_HArray2_hxx
#undef Handle_PCollection_HArray2
#undef PCollection_HArray2_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline void ShallowDump(const Handle_PColgp_HArray2OfXY& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
