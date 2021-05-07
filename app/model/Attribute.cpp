/*************************************************************************
                           Attribute  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <Attribute> (file Attribute.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Attribute.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Attribute::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method


//------------------------------------------------- Operators overloadinf
Attribute & Attribute::operator = ( const Attribute & aAttribute )
// Algorithm :
//
{
} //----- End of operator =


istream& operator>>(std::istream& is, Attribute& a) {
	return is >> a.id >> a.unit >> a.description;
}


//-------------------------------------------- constructors - destructor
Attribute::Attribute ( const Attribute & aAttribute )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Attribute>" << endl;
#endif
} //----- End of Attribute (copy constructor)


Attribute::Attribute ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <Attribute>" << endl;
#endif
} //----- End of Attribute

Attribute::Attribute ( string & aId, string & aUnit, string & aDescription  )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <Attribute> with parameters" << endl;
#endif
    id = aId;
    unit = aUnit;
    description = aDescription;
} //----- End of Attribute


Attribute::~Attribute ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <Attribute>" << endl;
#endif
} //----- End of ~Attribute


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
