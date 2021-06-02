/*************************************************************************
						   Reader  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <Reader> (file Reader.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//------------------------------------------------------ Include of local files
#include "Reader.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods

set<SensorData> Reader::readSensors(string filename)
//Algorithm :
//
{
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
} //----- End of readSensors

set<UserData> Reader::readUsers(string filename)
//Algorithm :
//
{
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
} //----- End of readUsers

multiset<MeasurementData> Reader::readMeasurements(string filename)
//Algorithm :
//
{
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
} //----- End of readMeasurements

set<AttributeData> Reader::readAttributes(string filename)
//Algorithm :
//
{
	ifstream is(filename);

	if (!is) {
		cout << "Error : impossible to open the file" << endl;
		return set<AttributeData>();
	}

	set<AttributeData> attributes;
	AttributeData attribute;
	while (is >> attribute) {
		attributes.insert(attribute);
	}
	return attributes;
} //----- End of readAttributes

set<CleanerData> Reader::readCleaners(string filename)
//Algorithm :
//
{
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
} //----- End of readCleaners

set<ProviderData> Reader::readProviders(string filename)
//Algorithm :
//
{
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
} //----- End of readProviders

//------------------------------------------------- Operators overloading

istream& operator>>(std::istream& is, SensorData& s)
//Algorithm :
//
{
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

ostream& operator<<(std::ostream& os, const SensorData& s)
//Algorithm :
//
{
	return os << s.id << ";" << s.latitude << ";" << s.longitude << ";";
}

bool SensorData::operator<(const SensorData& s) const
//Algorithm :
//
{
	return id < s.id;
}

istream& operator>>(std::istream& is, UserData& pa)
//Algorithm :
//
{
	string tmp;
	getline(is, pa.id, ';');
	getline(is, pa.sensorId, ';');
	getline(is, tmp);
	return is;
}

ostream& operator<<(std::ostream& os, const UserData& pa)
//Algorithm :
//
{
	return os << pa.id << ";" << pa.sensorId << ";";
}

bool UserData::operator<(const UserData& pu) const
//Algorithm :
//
{
	return sensorId < pu.sensorId;
}

istream& operator>>(std::istream& is, MeasurementData& m)
//Algorithm :
//
{
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

ostream& operator<<(std::ostream& os, const MeasurementData& m)
//Algorithm :
//
{
	return os << m.date << ";" << m.sensorId << ";" <<
		m.attributeId << ";" << m.value << ";";
}

bool MeasurementData::operator<(const MeasurementData& m) const
//Algorithm :
//
{
	return sensorId < m.sensorId;
}

istream& operator>>(std::istream& is, AttributeData& a)
//Algorithm :
//
{
	string tmp;
	getline(is, a.id, ';');
	getline(is, a.unit, ';');
	getline(is, a.description, ';');
	getline(is, tmp);
	return is;
}

ostream& operator<<(std::ostream& os, const AttributeData& a)
//Algorithm :
//
{
	return os << a.id << ";" << a.unit << ";" << a.description << ";";
}

bool AttributeData::operator<(const AttributeData& a) const
//Algorithm :
//
{
	return id < a.id;
}

istream& operator>>(std::istream& is, CleanerData& c)
//Algorithm :
//
{
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

ostream& operator<<(std::ostream& os, const CleanerData& c)
//Algorithm :
//
{
	return os << c.id << ";" << c.latitude << ";" << c.longitude <<
		";" << c.start << ";" << c.stop << ";";
}

bool CleanerData::operator<(const CleanerData& c) const
//Algorithm :
//
{
	return id < c.id;
}

istream& operator>>(std::istream& is, ProviderData& p)
//Algorithm :
//
{
	string tmp;
	getline(is, p.id, ';');
	getline(is, p.cleanerId, ';');
	getline(is, tmp);
	return is;
}

ostream& operator<<(std::ostream& os, const ProviderData& p)
//Algorithm :
//
{
	return os << p.id << ";" << p.cleanerId << ";";
}

bool ProviderData::operator<(const ProviderData& p) const
//Algorithm :
//
{
	return cleanerId < p.cleanerId;
}

//-------------------------------------------- constructors - destructor

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
