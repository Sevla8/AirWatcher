/*************************************************************************
						   Attribute  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods

const string& Attribute::GetId() const
{
	return id;
} //----- End of GetId

//------------------------------------------------- Operators overloading

ostream& operator<<(std::ostream& os, const Attribute& anAttribute)
{
	return os << anAttribute.id << ";" << anAttribute.unit << ";" << anAttribute.description << ";";
} //----- End of operator <<

bool Attribute::operator<(const Attribute& toCompareWith) const
{
	return id < toCompareWith.id;
} //----- End of operator <

//-------------------------------------------- constructors - destructor

Attribute::Attribute()
{

}

Attribute::Attribute(const AttributeData& ad) :

	id(ad.id),
	unit(ad.unit),
	description(ad.description) {
}  //----- End of Attribute(AttributeData&)

