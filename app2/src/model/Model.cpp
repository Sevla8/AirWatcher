/*************************************************************************
                           Model  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <Model> (file Model.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
#include <vector>
#include <set>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Model.h"
#include "Sensor.h"
#include "Cleaner.h"
#include "Provider.h"
#include "PrivateUser.h"
#include "Attribute.h"
#include "Measurement.h"
#include "../factory/Reader.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Model::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method
//------------------------------------------------- Operators overloadinf

ostream& operator<<(std::ostream& os, const Model& m)
// Algorithm :
//
{
	for(const auto &iter: m.sensors) {
		os << iter << endl;
	}
	os << endl;
	for(const auto &iter: m.cleaners) {
		os << iter << endl;
	}
	return os;
} //----- End of operator <<

//-------------------------------------------- constructors - destructor

Model::Model()
// Algorithm :
//
{
	set<SensorData> sensorData = Reader::readSensors("../../dataset/sensors.csv");
	set<CleanerData> cleanerData = Reader::readCleaners("../../dataset/cleaners.csv");
	set<AttributeData> attributeData = Reader::readAttributes("../../dataset/attributes.csv");
	set<UserData> userData = Reader::readUsers("../../dataset/users.csv");
	set<ProviderData> providerData = Reader::readProviders("../../dataset/providers.csv");
	multiset<MeasurementData> measurementData = Reader::readMeasurements("../../dataset/measurements.csv");

	for (const auto &iter: cleanerData) {
		CleanerData cd = iter;
		ProviderData pd = *providerData.find(ProviderData(iter.id));
		cleaners.insert(Cleaner(cd, pd));
	}

	for (const auto &iter: sensorData) {
		SensorData sd = iter;
		bool exist = userData.find(UserData(iter.id)) == userData.end() ? false : true;
		vector<MeasurementData> vector;
		auto it = measurementData.find(MeasurementData(iter.id));
		while (it != measurementData.end() && it->sensorId == sd.id) {
			vector.push_back(*it);
			++it;
		}
		if (exist) sensors.insert(Sensor(sd, *userData.find(UserData(iter.id)), vector, attributeData));
		else sensors.insert(Sensor(sd, vector, attributeData));
	}
}  //----- End of Model

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
