/*************************************************************************
						   Model  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Model> (file Model.h) ----------------
#ifndef Model_H
#define Model_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <set>
#include "Sensor.h"
#include "Cleaner.h"

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Model>
//
//
//------------------------------------------------------------------------

class Model {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		const set<Sensor>& GetSensors() const;
		// How to use :
		//
		// Precondition :
		//

		const set<Cleaner>& GetCleaners() const;
		// How to use :
		//
		// Precondition :
		//

		Sensor FindSensor(const string& id) const;
		// How to use :
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading
		friend ostream& operator<<(std::ostream&, const Model&);
		// How to use :
		//
		// Precondition :
		//

		//-------------------------------------------- Constructors - destructor
		Model();
		// How to use :
		//
		// Precondition :
		//

		Model(const set<Sensor>&, const set<Cleaner>&);
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
		//----------------------------------------------------- Private Methods

		//----------------------------------------------------- Private Attributes
		set<Sensor> sensors;
		set<Cleaner> cleaners;
};

//-------------------------------- Other definitions depending on <Model>

#endif // Model_H
