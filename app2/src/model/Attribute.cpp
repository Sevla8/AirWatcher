/*************************************************************************
                           Attribute  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <Attribute> (file Attribute.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
#include <sstream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Attribute.h"
#include "../factory/Reader.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Attribute::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method


//------------------------------------------------- Operators overloadinf
ostream& operator<<(std::ostream& os, const Attribute& a) 
// Algorithm :
//
{
	return os << a.id << ";" << a.unit << ";" << a.description << ";";
} //----- End of operator <<

bool Attribute::operator<(const Attribute& a) const 
// Algorithm :
//
{
	return id < a.id;
} //----- End of operator <

//-------------------------------------------- constructors - destructor
Attribute::Attribute(const AttributeData& ad) :
// Algorithm :
//
	id(ad.id),
	unit(ad.unit),
	description(ad.description) {
}  //----- End of Attribute

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
