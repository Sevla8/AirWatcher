/*************************************************************************
                           Sensor  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Sensor> (file Sensor.h) ----------------
#ifndef Sensor_H
#define Sensor_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <list>
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
    // type Method ( parameters list );
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

	//-------------------------------------------- Constructors - destructor

		Sensor(const SensorData&, const list<MeasurementData>&, const set<AttributeData>&);
		// How to use :
    	//
    	// Precondition :
    	//

		Sensor(const SensorData&, const UserData&, const list<MeasurementData>&, const set<AttributeData>&);
		// How to use :
    	//
    	// Precondition :
    	//
		
	friend ostream& operator<<(std::ostream&, const Sensor&);
	friend class Controller;

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
		list<Measurement> measurements;
};

//-------------------------------- Other definitions depending on <Sensor>

#endif // Sensor_H
