// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListNodeOfListOfAsciiString_HeaderFile
#define _TColStd_ListNodeOfListOfAsciiString_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColStd_ListNodeOfListOfAsciiString.hxx>

#include <TCollection_AsciiString.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TCollection_AsciiString;
class TColStd_ListOfAsciiString;
class TColStd_ListIteratorOfListOfAsciiString;



class TColStd_ListNodeOfListOfAsciiString : public TCollection_MapNode
{

public:

  
    TColStd_ListNodeOfListOfAsciiString(const TCollection_AsciiString& I, const TCollection_MapNodePtr& n);
  
      TCollection_AsciiString& Value()  const;




  DEFINE_STANDARD_RTTI(TColStd_ListNodeOfListOfAsciiString)

protected:




private: 


  TCollection_AsciiString myValue;


};

#define Item TCollection_AsciiString
#define Item_hxx <TCollection_AsciiString.hxx>
#define TCollection_ListNode TColStd_ListNodeOfListOfAsciiString
#define TCollection_ListNode_hxx <TColStd_ListNodeOfListOfAsciiString.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfListOfAsciiString
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfListOfAsciiString.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfListOfAsciiString
#define TCollection_ListNode_Type_() TColStd_ListNodeOfListOfAsciiString_Type_()
#define TCollection_List TColStd_ListOfAsciiString
#define TCollection_List_hxx <TColStd_ListOfAsciiString.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TColStd_ListNodeOfListOfAsciiString_HeaderFile
