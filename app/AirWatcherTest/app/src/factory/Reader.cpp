#include <iostream>
#include <sstream>
#include <string>

using namespace std;

#include "Reader.h"

istream& operator>>(std::istream& is, SensorData& s) {
	string tmp;
	stringstream ss;
	getline(is, s.id, ';');
	getline(is, tmp, ';');
	ss = stringstream(tmp);
	ss >> s.latitude;
	getline(is, tmp, ';');
	ss = stringstream(tmp);
	ss >> s.longitude;
	getline(is, tmp);
	return is;
}

ostream& operator<<(std::ostream& os, const SensorData& s) {
	return os << s.id << ";" << s.latitude << ";" << s.longitude << ";";
}

bool SensorData::operator<(const SensorData& s) const {
	return id < s.id;
}

istream& operator>>(std::istream& is, UserData& pa) {
	string tmp;
	getline(is, pa.id, ';');
	getline(is, pa.sensorId, ';');
	getline(is, tmp);
	return is;
}

ostream& operator<<(std::ostream& os, const UserData& pa) {
	return os << pa.id << ";" << pa.sensorId << ";";
}

bool UserData::operator<(const UserData& pu) const {
	return sensorId < pu.sensorId;
}

istream& operator>>(std::istream& is, MeasurementData& m) {
	string tmp;
	stringstream ss;
	getline(is, tmp, ';');
	ss = stringstream(tmp);
	ss >> m.date;
	getline(is, m.sensorId, ';');
	getline(is, m.attributeId, ';');
	getline(is, tmp, ';');
	ss = stringstream(tmp);
	ss >> m.value;
	getline(is, tmp);
	return is;
}

ostream& operator<<(std::ostream& os, const MeasurementData& m) {
	return os << m.date << ";" << m.sensorId << ";" <<
		m.attributeId << ";" << m.value << ";";
}

bool MeasurementData::operator<(const MeasurementData& m) const {
	return sensorId < m.sensorId;
}

istream& operator>>(std::istream& is, AttributeData& a) {
	string tmp;
	getline(is, a.id, ';');
	getline(is, a.unit, ';');
	getline(is, a.description, ';');
	getline(is, tmp);
	return is;
}

ostream& operator<<(std::ostream& os, const AttributeData& a) {
	return os << a.id << ";" << a.unit << ";" << a.description << ";";
}

bool AttributeData::operator<(const AttributeData& a) const {
	return id < a.id;
}

istream& operator>>(std::istream& is, CleanerData& c) {
	string tmp;
	stringstream ss;
	getline(is, c.id, ';');
	getline(is, tmp, ';');
	ss = stringstream(tmp);
	ss >> c.latitude;
	getline(is, tmp, ';');
	ss = stringstream(tmp);
	ss >> c.longitude;
	getline(is, tmp, ';');
	ss = stringstream(tmp);
	ss >> c.start;
	getline(is, tmp, ';');
	ss = stringstream(tmp);
	ss >> c.stop;
	getline(is, tmp);
	return is;
}

ostream& operator<<(std::ostream& os, const CleanerData& c) {
	return os << c.id << ";" << c.latitude << ";" << c.longitude <<
		";" << c.start << ";" << c.stop << ";";
}

bool CleanerData::operator<(const CleanerData& c) const {
	return id < c.id;
}

istream& operator>>(std::istream& is, ProviderData& p) {
	string tmp;
	getline(is, p.id, ';');
	getline(is, p.cleanerId, ';');
	getline(is, tmp);
	return is;
}

ostream& operator<<(std::ostream& os, const ProviderData& p) {
	return os << p.id << ";" << p.cleanerId << ";";
}

bool ProviderData::operator<(const ProviderData& p) const {
	return cleanerId < p.cleanerId;
}

set<SensorData> Reader::readSensors(string filename) {
	ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return set<SensorData>();
	}

	set<SensorData> sensors;
	SensorData sensor;
	while (is >> sensor) {
		sensors.insert(sensor);
	}
	return sensors;
}

set<UserData> Reader::readUsers(string filename) {
	ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return set<UserData>();
	}

	set<UserData> users;
	UserData user;
	while (is >> user) {
		users.insert(user);
	}
	return users;
}

multiset<MeasurementData> Reader::readMeasurements(string filename) {
    ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return multiset<MeasurementData>();
	}

	multiset<MeasurementData> measurements;
	MeasurementData measurement;
	while (is >> measurement) {
		measurements.insert(measurement);
	}
	return measurements;
}

set<AttributeData> Reader::readAttributes(string filename) {
    ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return set<AttributeData>();
	}

	set<AttributeData> attributes;
	AttributeData attribute;
	string line;
	getline(is, line);
	while (is >> attribute) {
		attributes.insert(attribute);
	}
	return attributes;
}

set<CleanerData> Reader::readCleaners(string filename) {
    ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return set<CleanerData>();
	}

	set<CleanerData> cleaners;
	CleanerData cleaner;
	while (is >> cleaner) {
		cleaners.insert(cleaner);
	}
	return cleaners;
}

set<ProviderData> Reader::readProviders(string filename) {
    ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return set<ProviderData>();
	}

	set<ProviderData> providers;
	ProviderData provider;
	while (is >> provider) {
		providers.insert(provider);
	}
	return providers;
}
