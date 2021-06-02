/*************************************************************************
						   Sensor  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Sensor> (file Sensor.h) ----------------
#ifndef Sensor_H
#define Sensor_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <vector>
#include <iostream>
#include "Measurement.h"
#include "PrivateUser.h"
#include "../factory/Reader.h"

using namespace std;

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Sensor>
//
//
//------------------------------------------------------------------------

class Sensor {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		vector<double> CalculateMean(const Date& date1, const Date& date2) const;
		// How to use :
		//
		// Precondition :
		//

		vector<Measurement> GetMeasurements() const;
		// How to use :
		//
		// Precondition :
		//

		User* GetUser() const;
		// How to use :
		//
		// Precondition :
		//

		bool GetMalfunctioning() const;
		// How to use :
		//
		// Precondition :
		//

		float GetLatitude() const;
		// How to use :
		//
		// Precondition :
		//

		float GetLongitude() const;
		// How to use :
		//
		// Precondition :
		//

		const string& GetId() const;
		// How to use :
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading
		bool operator<(const Sensor&) const;
		// How to use :
		//
		// Precondition :
		//

		friend ostream& operator<<(std::ostream&, const Sensor&);
		// How to use :
		//
		// Precondition :
		//

		//-------------------------------------------- Constructors - destructor
		Sensor(const SensorData&, const vector<MeasurementData>&, const set<AttributeData>&);
		// How to use :
		//
		// Precondition :
		//

		Sensor(const SensorData&, const UserData&, const vector<MeasurementData>&, const set<AttributeData>&);
		// How to use :
		//
		// Precondition :
		//

		Sensor(const string&);
		// How to use :
		//
		// Precondition :
		//

		Sensor(const string&, float, float, bool, User*, const vector<Measurement>&);
		// How to use :
		//
		// Precondition :
		//

		Sensor();
		// How to use :
		//
		// Precondition :
		//

	//------------------------------------------------------------------ PROTECTED
	protected:
		//----------------------------------------------------- Protected Methods

		//----------------------------------------------------- Protected attributes

	//------------------------------------------------------------------ PRIVATE
	private:
		//----------------------------------------------------- Private Methods

		//----------------------------------------------------- Private Attributes
		string id;
		float latitude;
		float longitude;
		bool malfunctioning;
		User* user;
		vector<Measurement> measurements;
};

//-------------------------------- Other definitions depending on <Sensor>

#endif // Sensor_H
