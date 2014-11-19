// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_DataMapIteratorOfLabelIDMapDataMap_HeaderFile
#define _TDocStd_DataMapIteratorOfLabelIDMapDataMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TDocStd_DataMapNodeOfLabelIDMapDataMap_HeaderFile
#include <Handle_TDocStd_DataMapNodeOfLabelIDMapDataMap.hxx>
#endif
class Standard_NoSuchObject;
class TDF_Label;
class TDF_IDMap;
class TDF_LabelMapHasher;
class TDocStd_LabelIDMapDataMap;
class TDocStd_DataMapNodeOfLabelIDMapDataMap;



class TDocStd_DataMapIteratorOfLabelIDMapDataMap  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TDocStd_DataMapIteratorOfLabelIDMapDataMap();
  
  Standard_EXPORT   TDocStd_DataMapIteratorOfLabelIDMapDataMap(const TDocStd_LabelIDMapDataMap& aMap);
  
  Standard_EXPORT     void Initialize(const TDocStd_LabelIDMapDataMap& aMap) ;
  
  Standard_EXPORT    const TDF_Label& Key() const;
  
  Standard_EXPORT    const TDF_IDMap& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
