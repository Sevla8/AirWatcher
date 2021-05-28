/*************************************************************************
                           Measurement  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <Measurement> (file Measurement.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
#include <sstream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Measurement.h"
#include "Date.h"
#include "../factory/Reader.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Measurement::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method

const Attribute& Measurement::GetAttribute() const {
	return attribute;
}

const Date& Measurement::GetDate() const {
	return date;
}

double Measurement::GetValue() const{
	return value;
}

//------------------------------------------------- Operators overloading

ostream& operator<<(std::ostream& os, const Measurement& m)
// Algorithm :
//
{
	return os << m.value << ";" << m.date << ";" <<
		m.attribute << ";";
} //----- End of operator <<

bool Measurement::operator<(const Measurement& m) const
// Algorithm :
//
{
	return date < m.date;
} //----- End of operator <

//-------------------------------------------- constructors - destructor

Measurement::Measurement(const MeasurementData& md) :
// Algorithm :
//
	value(md.value),
	date(md.date) {
} //----- End of Measurement

Measurement::Measurement(const MeasurementData& md, const AttributeData& ad) :
// Algorithm :
//
	value(md.value),
	date(md.date),
	attribute(ad) {
} //----- End of Measurement

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
