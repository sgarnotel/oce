// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_Name_HeaderFile
#define _IGESBasic_Name_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESBasic_Name.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <IGESData_NameEntity.hxx>
class TCollection_HAsciiString;


//! defines Name, Type <406> Form <15>
//! in package IGESBasic
//! Used to specify a user defined name
class IGESBasic_Name : public IGESData_NameEntity
{

public:

  
  Standard_EXPORT IGESBasic_Name();
  
  //! This method is used to set the fields of the class Name
  //! - nbPropVal  : Number of property values, always = 1
  //! - aName      : Stores the Name
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Handle(TCollection_HAsciiString)& aName) ;
  
  //! returns the number of property values, which should be 1
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the user defined Name
  Standard_EXPORT   Handle(TCollection_HAsciiString) Value()  const;




  DEFINE_STANDARD_RTTI(IGESBasic_Name)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Handle(TCollection_HAsciiString) theName;


};







#endif // _IGESBasic_Name_HeaderFile
