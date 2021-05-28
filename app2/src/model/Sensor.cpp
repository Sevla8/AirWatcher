/*************************************************************************
                           Sensor  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <Sensor> (file Sensor.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
#include <sstream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Sensor.h"
#include "PrivateUser.h"
#include "../factory/Reader.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Sensor::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method

//------------------------------------------------- Operators overloadinf

ostream& operator<<(std::ostream& os, const Sensor& s)
// Algorithm :
//
{
	os << s.id << ";" << s.latitude << ";" << s.longitude << ";";

	PrivateUser* pu = dynamic_cast<PrivateUser*>(s.user);
	if (pu != nullptr) os << *pu;

	os << endl;

	for (const auto &it : s.measurements) {
		os << "	" << it << endl;
	}

	return os;
} //----- End of operator <<

bool Sensor::operator<(const Sensor& s) const
// Algorithm :
//
{
	return id < s.id;
} //----- End of operator <

//-------------------------------------------- constructors - destructor

Sensor::Sensor(const SensorData& sd, const vector<MeasurementData>& md, const set<AttributeData>& ad) :
// Algorithm :
//
	id(sd.id),
	latitude(sd.latitude),
	longitude(sd.longitude) {

	for (const auto &it: md) {
		AttributeData a = *ad.find(AttributeData(it.attributeId));
		measurements.push_back(Measurement(it, a));
	}

	user = new User();
} //----- End of Sensor

Sensor::Sensor(const SensorData& sd, const UserData& ud, const vector<MeasurementData>& md, const set<AttributeData>& ad) :
// Algorithm :
//
	id(sd.id),
	latitude(sd.latitude),
	longitude(sd.longitude) {

	for (const auto &it: md) {
		bool exist = ad.find(AttributeData(it.attributeId)) == ad.end() ? false : true;
		AttributeData a = *ad.find(AttributeData(it.attributeId));
		measurements.push_back(Measurement(it, a));
	}

	user = new PrivateUser(ud);
} //----- End of Sensor


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
