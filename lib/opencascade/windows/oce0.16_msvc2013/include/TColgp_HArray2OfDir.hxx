// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HArray2OfDir_HeaderFile
#define _TColgp_HArray2OfDir_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColgp_HArray2OfDir_HeaderFile
#include <Handle_TColgp_HArray2OfDir.hxx>
#endif

#ifndef _TColgp_Array2OfDir_HeaderFile
#include <TColgp_Array2OfDir.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class gp_Dir;
class TColgp_Array2OfDir;



class TColgp_HArray2OfDir : public MMgt_TShared {

public:

  
      TColgp_HArray2OfDir(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
      TColgp_HArray2OfDir(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const gp_Dir& V);
  
        void Init(const gp_Dir& V) ;
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const gp_Dir& Value) ;
  
       const gp_Dir& Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
        gp_Dir& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
  
       const TColgp_Array2OfDir& Array2() const;
  
        TColgp_Array2OfDir& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColgp_HArray2OfDir)

protected:




private: 


TColgp_Array2OfDir myArray;


};

#define ItemHArray2 gp_Dir
#define ItemHArray2_hxx <gp_Dir.hxx>
#define TheArray2 TColgp_Array2OfDir
#define TheArray2_hxx <TColgp_Array2OfDir.hxx>
#define TCollection_HArray2 TColgp_HArray2OfDir
#define TCollection_HArray2_hxx <TColgp_HArray2OfDir.hxx>
#define Handle_TCollection_HArray2 Handle_TColgp_HArray2OfDir
#define TCollection_HArray2_Type_() TColgp_HArray2OfDir_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
