#include <iostream>
#include <sstream>
using namespace std;

#include "Sensor.h"
#include "PrivateUser.h"
#include "../factory/Reader.h"

ostream& operator<<(std::ostream& os, const Sensor& s) {
	os << s.id << ";" << s.latitude << ";" << s.longitude << ";";

	PrivateUser* pu = dynamic_cast<PrivateUser*>(s.user);
	if (pu != nullptr) os << *pu;

	os << endl;

	for (auto it = s.measurements.begin(); it != s.measurements.end(); ++it) {
		os << "	" << *it << endl;
	}

	return os;
}

bool Sensor::operator<(const Sensor& s) const {
	return id < s.id;
}

Sensor::Sensor(const SensorData& sd, const list<MeasurementData>& md, const set<AttributeData>& ad) :
	id(sd.id),
	latitude(sd.latitude),
	longitude(sd.longitude) {

	for (list<MeasurementData>::const_iterator it = md.begin(); it != md.end(); ++it) {
		AttributeData a = *ad.find(AttributeData(it->attributeId));
		measurements.push_back(Measurement(*it, a));
	}

	user = new User();
}

Sensor::Sensor(const SensorData& sd, const UserData& ud, const list<MeasurementData>& md, const set<AttributeData>& ad) :
	id(sd.id),
	latitude(sd.latitude),
	longitude(sd.longitude) {

	for (list<MeasurementData>::const_iterator it = md.begin(); it != md.end(); ++it) {
		bool exist = ad.find(AttributeData(it->attributeId)) == ad.end() ? false : true;
		AttributeData a = *ad.find(AttributeData(it->attributeId));
		measurements.push_back(Measurement(*it, a));
	}

	user = new PrivateUser(ud);
}