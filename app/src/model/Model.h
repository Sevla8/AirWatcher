/*************************************************************************
						   Model  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Model> (file Model.h) ----------------
#ifndef Model_H
#define Model_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <unordered_map>
#include "Sensor.h"
#include "Cleaner.h"


//------------------------------------------------------------------------
// Role of <Model>
//
//	Class containing the data to be manipulated by the Controller Class
//
//------------------------------------------------------------------------

class Model {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		const unordered_map<string, Sensor>& GetSensors() const;
		// How to use :
		//
		// Precondition :
		//

		const unordered_map<string, Cleaner>& GetCleaners() const;
		// How to use :
		//
		// Precondition :
		//

		const Sensor& FindSensor(const string& id) const;
		// How to use : Finds a sensor whose id is given by 'id' parameter
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading
		friend ostream& operator<<(std::ostream& os , const Model& aModel);

		//-------------------------------------------- Constructors - destructor
		Model(string sensorsPath = "../../dataset/sensors.csv", string cleanersPath = "../../dataset/cleaners.csv", string attributesPath = "../../dataset/attributes.csv" ,
			  string usersPath = "../../dataset/users.csv", string providersPath = "../../dataset/providers.csv", string measurementsPath ="../../dataset/measurements.csv");
		// How to Use : Creates a Model by reading the documents whose paths are given by *Path arguments
		//
		// Precondition :
		//

		Model(const unordered_map<string, Sensor>&, const unordered_map<string, Cleaner>&);
		// How to use :
		//
		// Precondition :
		//

	//------------------------------------------------------------------ PROTECTED
	protected:
		//----------------------------------------------------- Protected Methods

		//----------------------------------------------------- Protected Attributes

	//------------------------------------------------------------------ PRIVATE
	private:

		//----------------------------------------------------- Private Attributes
		unordered_map<string, Sensor> sensors;
		unordered_map<string, Cleaner> cleaners;
};

#endif // Model_H
