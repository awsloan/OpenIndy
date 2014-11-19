// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinLDrivers_DocumentStorageDriver_HeaderFile
#define _BinLDrivers_DocumentStorageDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BinLDrivers_DocumentStorageDriver_HeaderFile
#include <Handle_BinLDrivers_DocumentStorageDriver.hxx>
#endif

#ifndef _BinObjMgt_Persistent_HeaderFile
#include <BinObjMgt_Persistent.hxx>
#endif
#ifndef _Handle_BinMDF_ADriverTable_HeaderFile
#include <Handle_BinMDF_ADriverTable.hxx>
#endif
#ifndef _BinObjMgt_SRelocationTable_HeaderFile
#include <BinObjMgt_SRelocationTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _TDF_LabelList_HeaderFile
#include <TDF_LabelList.hxx>
#endif
#ifndef _TColStd_MapOfTransient_HeaderFile
#include <TColStd_MapOfTransient.hxx>
#endif
#ifndef _TColStd_IndexedMapOfTransient_HeaderFile
#include <TColStd_IndexedMapOfTransient.hxx>
#endif
#ifndef _BinLDrivers_VectorOfDocumentSection_HeaderFile
#include <BinLDrivers_VectorOfDocumentSection.hxx>
#endif
#ifndef _PCDM_StorageDriver_HeaderFile
#include <PCDM_StorageDriver.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class TCollection_ExtendedString;
class CDM_Document;
class TDF_Label;
class TCollection_AsciiString;
class BinLDrivers_DocumentSection;
class TDF_LabelList;
class Standard_Type;


//! persistent implemention of storage a document in a binary file <br>
class BinLDrivers_DocumentStorageDriver : public PCDM_StorageDriver {

public:

  //! Constructor <br>
  Standard_EXPORT   BinLDrivers_DocumentStorageDriver();
  //! pure virtual method definition <br>
  Standard_EXPORT   virtual  TCollection_ExtendedString SchemaName() const;
  //! Write <theDocument> to the binary file <theFileName> <br>
  Standard_EXPORT   virtual  void Write(const Handle(CDM_Document)& theDocument,const TCollection_ExtendedString& theFileName) ;
  
  Standard_EXPORT   virtual  Handle_BinMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) ;
  //! Create a section that should be written after the OCAF data <br>
  Standard_EXPORT     void AddSection(const TCollection_AsciiString& theName,const Standard_Boolean isPostRead = Standard_True) ;




  DEFINE_STANDARD_RTTI(BinLDrivers_DocumentStorageDriver)

protected:

  //! Write the tree under <theLabel> to the stream <theOS> <br>
  Standard_EXPORT     void WriteSubTree(const TDF_Label& theData,Standard_OStream& theOS) ;
  //! define the procedure of writing a section to file. <br>
  Standard_EXPORT   virtual  void WriteSection(const TCollection_AsciiString& theName,const Handle(CDM_Document)& theDoc,Standard_OStream& theOS) ;
  //! defines the procedure of writing a shape  section to file <br>
  Standard_EXPORT   virtual  void WriteShapeSection(BinLDrivers_DocumentSection& theDocSection,Standard_OStream& theOS) ;
  //! write  theMessage  to  the  MessageDriver  of  the <br>
//!          Application <br>
  Standard_EXPORT     void WriteMessage(const TCollection_ExtendedString& theMessage) ;

Handle_BinMDF_ADriverTable myDrivers;
BinObjMgt_SRelocationTable myRelocTable;


private: 

  
  Standard_EXPORT     void FirstPass(const TDF_Label& theRoot) ;
  //! Returns true if <L> and its sub-labels do not contain <br>
//!          attributes to store <br>
  Standard_EXPORT     Standard_Boolean FirstPassSubTree(const TDF_Label& L,TDF_LabelList& ListOfEmptyL) ;
  //! Write info secton using FSD_BinaryFile driver <br>
  Standard_EXPORT     void WriteInfoSection(const Handle(CDM_Document)& theDocument,const TCollection_AsciiString& theFile) ;
  
  Standard_EXPORT     void UnsupportedAttrMsg(const Handle(Standard_Type)& theType) ;

BinObjMgt_Persistent myPAtt;
Handle_CDM_MessageDriver myMsgDriver;
TDF_LabelList myEmptyLabels;
TColStd_MapOfTransient myMapUnsupported;
TColStd_IndexedMapOfTransient myTypesMap;
BinLDrivers_VectorOfDocumentSection mySections;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
