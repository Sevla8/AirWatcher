/*************************************************************************
						   Reader  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Reader> (file Reader.h) ----------------
#ifndef Reader_H
#define Reader_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <set>
#include <fstream>
#include "../model/Date.h"

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
// 	Role of <Reader>
//	
//	Read and parse data contained in csv files into the correspondig structures defined above
//
//------------------------------------------------------------------------

class Reader {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		static set<SensorData> readSensors(string filepath);
		// 	How to use : Parse the data contained in the file whose path is given by filepath
		//	into SensorDatas that are inserted in a set. The set is returned.
		// 	Precondition : The document has the following structure :
		//		SensorNumber;latitude;longitude;
		//		Example : Sensor0;44;-1;

		static set<UserData> readUsers(string filepath);
		// 	How to use : Parse the data contained in the file whose path is given by filepath
		//	into UserDatas that are inserted in a set. The set is returned.
		// 	Precondition : The document has the following structure :
		//		UserNumber;SensorTheyHave;
		//		Example : User0;Sensor70;

		static multiset<MeasurementData> readMeasurements(string filepath);
		// 	How to use : Parse the data contained in the file whose path is given by filepath
		//	into MeasurementDatas that are inserted in a multiset. The multiset is returned.
		// 	Precondition : The document has the following structure :
		//		DateofMeasure TimeOfMeasure;SensorNumber;AttributeMeasured;ValueOfMeasure;
		//		Example : 2019-01-01 12:00:00;Sensor0;O3;50.25;

		static set<AttributeData> readAttributes(string filepath);
		// 	How to use : Parse the data contained in the file whose path is given by filepath
		//	into AttributeDatas that are inserted in a set. The set is returned.
		// 	Precondition : The document has the following structure :
		//		AttributeMeasured;UnitsOfMeasure;TextDescriptionInFrench
		//		Example : O3;µg/m3;concentration d'ozone;

		static set<CleanerData> readCleaners(string filepath);
		// 	How to use : Parse the data contained in the file whose path is given by filepath
		//	into CleanerDatas that are inserted in a set. The set is returned.
		// 	Precondition : The document has the following structure :
		//		CleanerNumber;Latitude;Longitude;DateBeginOfOperation TimeBeginOfOperation;DateEndOfOperation TimeEndOfOperation;
		//		Example : Cleaner0;45.333333;1.333333;2019-02-01 12:00:00;2019-03-01 00:00:00;

		static set<ProviderData> readProviders(string filepath);
		// 	How to use : Parse the data contained in the file whose path is given by filepath
		//	into ProviderDatas that are inserted in a set. The set is returned.
		// 	Precondition : The document has the following structure :
		//		ProviderNumber;CleanerTheyHave;
		//		Example : Provider0;Cleaner0;


};

#endif // Reader_H
