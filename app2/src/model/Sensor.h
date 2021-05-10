#ifndef Sensor_H
#define Sensor_H

#include <string>
#include <list>
#include <iostream>
#include "Measurement.h"
#include "PrivateUser.h"
#include "../factory/Reader.h"

using namespace std;

class Sensor {
	public:
		Sensor(const SensorData&, const list<MeasurementData>&, const set<AttributeData>&);
		Sensor(const SensorData&, const UserData&, const list<MeasurementData>&, const set<AttributeData>&);
		bool operator<(const Sensor&) const;
	friend ostream& operator<<(std::ostream&, const Sensor&);
	friend class Controller;
	protected:
	private:
		string id;
		float latitude;
		float longitude;
		bool malfunctioning;
		User* user;
		list<Measurement> measurements;
};

#endif
