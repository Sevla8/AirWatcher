/*************************************************************************
						   Attribute  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

const string& Attribute::GetId() const
// Algorithm :
//
{
	return id;
} //----- End of GetId

const string& Attribute::GetUnit() const
// Algorithm :
//
{
	return unit;
} //----- End of GetUnit

const string& Attribute::GetDescription() const
// Algorithm :
//
{
	return description;
} //----- End of GetDescription

//------------------------------------------------- Operators overloading

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

Attribute::Attribute()
// Algorithm :
//
{
}

Attribute::Attribute(const string& id, const string& unit, const string& description) :
// Algorithm :
//
	id(id),
	unit(unit),
	description(description) {
}  //----- End of Attribute


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
