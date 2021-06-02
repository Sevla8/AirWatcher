/*************************************************************************
						   Reader  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Reader> (file Reader.h) ----------------
#if ! defined ( Reader_H )
#define Reader_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <set>
#include <fstream>
#include "../model/Date.h"

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

struct SensorData {
	string id;
	float latitude;
	float longitude;

	bool operator<(const SensorData&) const;
	friend std::istream& operator>>(std::istream&, SensorData&);
	friend ostream& operator<<(std::ostream&, const SensorData&);
};

struct UserData {
	string id;
	string sensorId;

	UserData() {}
	UserData(const string& s) : id(""), sensorId(s) {}
	bool operator<(const UserData&) const;
	friend istream& operator>>(std::istream&, UserData&);
	friend ostream& operator<<(std::ostream&, const UserData&);
};

struct MeasurementData {
	float value;
	Date date;
	string sensorId;
	string attributeId;

	MeasurementData() {}
	MeasurementData(const string& s) : sensorId(s) {}
	bool operator<(const MeasurementData&) const;
	friend std::istream& operator>>(std::istream&, MeasurementData&);
	friend ostream& operator<<(std::ostream&, const MeasurementData&);
};

struct AttributeData {
	string id;
	string unit;
	string description;

	AttributeData() {}
	AttributeData(const string& s) : id(s) {}
	bool operator<(const AttributeData&) const;
	friend istream& operator>>(std::istream&, AttributeData&);
	friend ostream& operator<<(std::ostream&, const AttributeData&);
};

struct CleanerData {
	string id;
	float latitude;
	float longitude;
	Date start;
	Date stop;

	bool operator<(const CleanerData&) const;
	friend istream& operator>>(std::istream&, CleanerData&);
	friend ostream& operator<<(std::ostream&, const CleanerData&);
};

struct ProviderData {
	string id;
	string cleanerId;

	ProviderData(const string& s) : id(""), cleanerId(s) {}
	ProviderData() {}
	bool operator<(const ProviderData&) const;
	friend istream& operator>>(std::istream&, ProviderData&);
	friend ostream& operator<<(std::ostream&, const ProviderData&);
};

//------------------------------------------------------------------------
// Role of <Reader>
//	Read and parse data in csv files
//
//------------------------------------------------------------------------

class Reader {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		static set<SensorData> readSensors(string filename);
		// How to use :
		//
		// Precondition :
		//

		static set<UserData> readUsers(string filename);
		// How to use :
		//
		// Precondition :
		//

		static multiset<MeasurementData> readMeasurements(string filename);
		// How to use :
		//
		// Precondition :
		//

		static set<AttributeData> readAttributes(string filename);
		// How to use :
		//
		// Precondition :
		//

		static set<CleanerData> readCleaners(string filename);
		// How to use :
		//
		// Precondition :
		//

		static set<ProviderData> readProviders(string filename);
		// How to use :
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading

		//-------------------------------------------- Constructors - destructor

	//------------------------------------------------------------------ PROTECTED
	protected:
		//----------------------------------------------------- Protected Methods

		//----------------------------------------------------- Protected Attributes

	//------------------------------------------------------------------ PRIVATE
	private:
		//----------------------------------------------------- Private Methods

		//----------------------------------------------------- Private Attributes

};

//-------------------------------- Other definitions depending on <Reader>

#endif // Reader_H
