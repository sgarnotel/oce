// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakeArcOfHyperbola_HeaderFile
#define _GC_MakeArcOfHyperbola_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_TrimmedCurve.hxx>
#include <GC_Root.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class Geom_TrimmedCurve;
class StdFail_NotDone;
class gp_Hypr;
class gp_Pnt;


//! Implements construction algorithms for an arc
//! of hyperbola in 3D space. The result is a Geom_TrimmedCurve curve.
//! A MakeArcOfHyperbola object provides a framework for:
//! -   defining the construction of the arc of hyperbola,
//! -   implementing the construction algorithm, and
//! -   consulting the results. In particular, the
//! Value function returns the constructed arc of hyperbola.
class GC_MakeArcOfHyperbola  : public GC_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an arc of Hyperbola (TrimmedCurve from Geom) from
  //! a Hyperbola between two parameters Alpha1 and Alpha2
  //! (given in radians).
  Standard_EXPORT GC_MakeArcOfHyperbola(const gp_Hypr& Hypr, const Standard_Real Alpha1, const Standard_Real Alpha2, const Standard_Boolean Sense);
  
  //! Creates an arc of Hyperbola (TrimmedCurve from Geom) from
  //! a Hyperbola between point <P> and the parameter
  //! Alpha (given in radians).
  Standard_EXPORT GC_MakeArcOfHyperbola(const gp_Hypr& Hypr, const gp_Pnt& P, const Standard_Real Alpha, const Standard_Boolean Sense);
  
  //! Creates an arc of Hyperbola (TrimmedCurve from Geom) from
  //! a Hyperbola between two points P1 and P2.
  //! The orientation of the arc of hyperbola is:
  //! -   the sense of Hypr if Sense is true, or
  //! -   the opposite sense if Sense is false.
  Standard_EXPORT GC_MakeArcOfHyperbola(const gp_Hypr& Hypr, const gp_Pnt& P1, const gp_Pnt& P2, const Standard_Boolean Sense);
  
  //! Returns the constructed arc of hyperbola.
  Standard_EXPORT  const  Handle(Geom_TrimmedCurve)& Value()  const;
  
  Standard_EXPORT  const  Handle(Geom_TrimmedCurve)& Operator()  const;
Standard_EXPORT operator Handle_Geom_TrimmedCurve() const;




protected:





private:



  Handle(Geom_TrimmedCurve) TheArc;


};







#endif // _GC_MakeArcOfHyperbola_HeaderFile
