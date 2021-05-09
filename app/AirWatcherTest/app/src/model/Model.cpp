#include <iostream>
#include <list>
#include <set>
#include "Model.h"
#include "Sensor.h"
#include "Cleaner.h"
#include "Provider.h"
#include "PrivateUser.h"
#include "Attribute.h"
#include "Measurement.h"
#include "../factory/Reader.h"

using namespace std;

Model::Model() {
	set<SensorData> sensorData = Reader::readSensors("../../dataset/sensors.csv");
	set<CleanerData> cleanerData = Reader::readCleaners("../../dataset/cleaners.csv");
	set<AttributeData> attributeData = Reader::readAttributes("../../dataset/attributes.csv");
	set<UserData> userData = Reader::readUsers("../../dataset/users.csv");
	set<ProviderData> providerData = Reader::readProviders("../../dataset/providers.csv");
	multiset<MeasurementData> measurementData = Reader::readMeasurements("../../dataset/measurements.csv");

	// for (set<MeasurementData>::const_iterator iter = measurementData.begin(); iter != measurementData.end(); ++iter) {
	// 	cout << *iter << endl;
	// }
	// cout << measurementData.size();

	for (set<CleanerData>::const_iterator iter = cleanerData.begin(); iter != cleanerData.end(); ++iter) {
		CleanerData cd = *iter;
		ProviderData pd = *providerData.find(ProviderData(iter->id));
		cleaners.insert(Cleaner(cd, pd));
	}

	for (set<SensorData>::const_iterator iter = sensorData.begin(); iter != sensorData.end(); ++iter) {
		SensorData sd = *iter;
		bool exist = userData.find(UserData(iter->id)) == userData.end() ? false : true;
		list<MeasurementData> list;
		auto it = measurementData.find(MeasurementData(iter->id));
		while (it != measurementData.end() && it->sensorId == sd.id) {
			list.push_back(*it);
			++it;
		}
		if (exist) sensors.insert(Sensor(sd, *userData.find(UserData(iter->id)), list, attributeData));
		else sensors.insert(Sensor(sd, list, attributeData));
	}
}

ostream& operator<<(std::ostream& os, const Model& m) {
	for (set<Sensor>::const_iterator iter = m.sensors.begin(); iter != m.sensors.end(); ++iter) {
		os << *iter << endl;
	}
	os << endl;
	for (set<Cleaner>::const_iterator iter = m.cleaners.begin(); iter != m.cleaners.end(); ++iter) {
		os << *iter << endl;
	}
	return os;
}
