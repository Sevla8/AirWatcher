/*************************************************************************
						   Sensor  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

float Sensor::GetLatitude() const
// How to use :
//
{
	return latitude;
} //----- End of GetLatitude

float Sensor::GetLongitude() const
// How to use :
//
{
	return longitude;
} //----- End of GetLongitude

string Sensor::GetId() const
// How to use :
//
{
	return id;
} //----- End of GetId

vector<Measurement> Sensor::GetMeasurements() const
// Algorithm :
//
{
	return measurements;
}

vector<double> Sensor::CalculateMean(const Date& begin, const Date& end) const
// Algorithm :
//
{
	double sumO3 = 0;
	double sumSO2 = 0;
	double sumNO2 = 0;
	double sumPM10 = 0;
	int numberO3 = 0;
	int numberSO2 = 0;
	int numberNO2 = 0;
	int numberPM10 = 0;
	for (const auto& measurement : measurements) {
		if (measurement.GetAttribute().GetId() == "O3" &&
			measurement.GetDate() >= begin &&
			measurement.GetDate() <= end) {
			sumO3 += measurement.GetValue();
			numberO3++;
		}
		else if (measurement.GetAttribute().GetId() == "SO2" &&
			measurement.GetDate() >= begin &&
			measurement.GetDate() <= end) {
			sumSO2 += measurement.GetValue();
			numberSO2++;
		}
		else if (measurement.GetAttribute().GetId() == "NO2" &&
			measurement.GetDate() >= begin &&
			measurement.GetDate() <= end) {
			sumNO2 += measurement.GetValue();
			numberNO2++;
		}
		else if (measurement.GetAttribute().GetId() == "PM10" &&
			measurement.GetDate() >= begin &&
			measurement.GetDate() <= end) {
			sumPM10 += measurement.GetValue();
			numberPM10++;
		}
	}
	vector<double> result;
	result.push_back(sumO3 / numberO3);
	result.push_back(sumSO2 / numberSO2);
	result.push_back(sumNO2 / numberNO2);
	result.push_back(sumPM10 / numberPM10);
	return result;
} //----- End of CalculateMean

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

Sensor::Sensor(const string& id) :
	id(id) {
} //----- End of Sensor

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
