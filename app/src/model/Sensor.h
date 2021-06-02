/*************************************************************************
						   Sensor  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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
//------------------------------------------------------------------------
// Role of <Sensor>
//
//
//
//------------------------------------------------------------------------

class Sensor {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		vector<double> CalculateMean(const Date& date1, const Date& date2) const;
		// How to use : returns a vector containing the means of each type of Measurement made by the calling Sensor
		//

		vector<Measurement> GetMeasurements() const;
		// How to use : Returns a vector containing all the Measurements made by the calling Sensor
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
		// How to use : Returns the latitude of the calling Sensor

		float GetLongitude() const;
		// How to use : Returns the longitude of the calling Sensor

		const string& GetId() const;
		// How to use : Returns the id of the calling Sensor
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading
		bool operator<(const Sensor& aSensor) const;
		// How to use : Returns true if aSensor's id is higher than the calling Sensor's one
		//


		friend ostream& operator<<(std::ostream&, const Sensor&);

		//-------------------------------------------- Constructors - destructor
		Sensor(const SensorData& aSensorData, const vector<MeasurementData>& aMeasurementsDataVector, const set<AttributeData>& anAttributeDataSet);
		// 	How to use : Constructs a Sensor by parsing data in aSensorData and linking it to the Measurements contained in aMeasurementsDataVector
		// 	it has made and the respective Attributes contained on the set
		//


		Sensor(const SensorData& aSensorData, const UserData& anUserData, const vector<MeasurementData>& aMeasurementsDataVector, const set<AttributeData>& anAttributeDataSet);
		// 	How to use : Constructs a Sensor by parsing data in aSensorData and linking it to the Measurements contained in aMeasurementsDataVector
		// 	it has made and the respective Attributes contained on the set. Furthermore, it associates the Sensor to it's User


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

		Sensor(const string& id);
		// How to use : Constructs a Sensor by giving it the id in parameter. None of the other attributes are affected.
		//
		// Precondition :
		//

	//------------------------------------------------------------------ PROTECTED
	protected:
		//----------------------------------------------------- Protected Methods


	//------------------------------------------------------------------ PRIVATE
	private:

		//----------------------------------------------------- Private Attributes
		string id;
		float latitude;
		float longitude;
		bool malfunctioning;
		User* user;
		vector<Measurement> measurements;
};


#endif // Sensor_H
