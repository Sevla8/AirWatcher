/*************************************************************************
                           Reader  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
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
// type Reader::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method


list<Sensor>* Reader::readSensors(string filename) {
	ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return nullptr;
	}

	list<Sensor>* sensors = new list<Sensor>();
	string line;
	while (getline(is, line)) {
		istringstream iss(line);
		Sensor sensor;
		is >> sensor;
		sensors->push_back(sensor);
	}
	return sensors;
}

list<PrivateUser>* Reader::readPrivateUsers(string filename) {
	ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return nullptr;
	}

	list<PrivateUser>* privateUsers = new list<PrivateUser>();
	string line;
	while (getline(is, line)) {
		istringstream iss(line);
		PrivateUser privateUser;
		is >> privateUser;
		privateUsers->push_back(privateUser);
	}
	return privateUsers;
}

list<Measurement>* Reader::readMeasurements(string filename) {
    ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return nullptr;
	}

	list<Measurement>* measurements = new list<Measurement>();
	string line;
	while (getline(is, line)) {
		istringstream iss(line);
		Measurement measurement;
		is >> measurement;
		measurements->push_back(measurement);
	}
	return measurements;
}

list<Attribute>* Reader::readAttributes(string filename) {
    ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return nullptr;
	}

	list<Attribute>* attributes = new list<Attribute>();
	string line;
	while (getline(is, line)) {
		istringstream iss(line);
		Attribute attribute;
		is >> attribute;
		attributes->push_back(attribute);
	}
	return attributes;
}

list<Cleaner>* Reader::readCleaners(string filename) {
    ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return nullptr;
	}

	list<Cleaner>* cleaners = new list<Cleaner>();
	string line;
	while (getline(is, line)) {
		istringstream iss(line);
		Cleaner cleaner;
		is >> cleaner;
		cleaners->push_back(cleaner);
	}
	return cleaners;
}

list<Provider>* Reader::readProviders(string filename) {
    ifstream is(filename);

	if (!is) {
        cout << "Error : impossible to open the file" << endl;
		return nullptr;
	}

	list<Provider>* providers = new list<Provider>();
	string line;
	while (getline(is, line)) {
		istringstream iss(line);
		Provider provider;
		is >> provider;
		providers->push_back(provider);
	}
	return providers;
}



//------------------------------------------------- Operators overloadinf
Reader & Reader::operator = ( const Reader & aReader )
// Algorithm :
//
{
} //----- End of operator =


//-------------------------------------------- constructors - destructor
Reader::Reader ( const Reader & aReader )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Reader>" << endl;
#endif
} //----- End of Reader (copy constructor)


Reader::Reader ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <Reader>" << endl;
#endif
} //----- End of Reader


Reader::~Reader ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <Reader>" << endl;
#endif
} //----- End of ~Reader


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
