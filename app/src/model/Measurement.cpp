/*************************************************************************
						   Measurement  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods

const Attribute& Measurement::GetAttribute() const
{
	return attribute;
} //----- End of method GetAttribute

const Date& Measurement::GetDate() const
{
	return date;
} //----- End of method GetDate

float Measurement::GetValue() const
// Algorithm :
//
{
	return value;
} //----- End of method GetValue

//------------------------------------------------- Operators overloading

ostream& operator<<(std::ostream& os, const Measurement& m)
{
	return os << m.value << ";" << m.date << ";" <<
		m.attribute << ";";
} //----- End of operator <<

bool Measurement::operator<(const Measurement& m) const
{
	return date < m.date;
} //----- End of operator <

//-------------------------------------------- constructors - destructor

Measurement::Measurement(const MeasurementData& md) :
	value(md.value),
	date(md.date) {
} //----- End of Measurement

Measurement::Measurement(const MeasurementData& md, const AttributeData& ad) :
	value(md.value),
	date(md.date),
	attribute(ad) {
} //----- End of Measurement

Measurement::Measurement(float value, const Date& date, const Attribute& attribute) :
// Algorithm :
//
	value(value),
	date(date),
	attribute(attribute) {
} //----- End of Measurement

Measurement::Measurement()
// Algorithm :
//
{
} //----- End of Measurement

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
