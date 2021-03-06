// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger_HeaderFile
#define _TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger.hxx>

#include <TCollection_ExtendedString.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TColStd_HArray1OfInteger;
class TCollection_ExtendedString;
class TDataStd_DataMapOfStringHArray1OfInteger;
class TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger;



class TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger : public TCollection_MapNode
{

public:

  
    TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger(const TCollection_ExtendedString& K, const Handle(TColStd_HArray1OfInteger)& I, const TCollection_MapNodePtr& n);
  
      TCollection_ExtendedString& Key()  const;
  
      Handle(TColStd_HArray1OfInteger)& Value()  const;




  DEFINE_STANDARD_RTTI(TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger)

protected:




private: 


  TCollection_ExtendedString myKey;
  Handle(TColStd_HArray1OfInteger) myValue;


};

#define TheKey TCollection_ExtendedString
#define TheKey_hxx <TCollection_ExtendedString.hxx>
#define TheItem Handle(TColStd_HArray1OfInteger)
#define TheItem_hxx <TColStd_HArray1OfInteger.hxx>
#define Hasher TCollection_ExtendedString
#define Hasher_hxx <TCollection_ExtendedString.hxx>
#define TCollection_DataMapNode TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger
#define TCollection_DataMapNode_hxx <TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger.hxx>
#define TCollection_DataMapIterator TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger
#define TCollection_DataMapIterator_hxx <TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger.hxx>
#define Handle_TCollection_DataMapNode Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger
#define TCollection_DataMapNode_Type_() TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger_Type_()
#define TCollection_DataMap TDataStd_DataMapOfStringHArray1OfInteger
#define TCollection_DataMap_hxx <TDataStd_DataMapOfStringHArray1OfInteger.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger_HeaderFile
