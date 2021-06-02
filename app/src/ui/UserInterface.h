/*************************************************************************
						   UserInterface  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <UserInterface> (file UserInterface.h) ----------------
#ifndef UserInterface_H
#define UserInterface_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <vector>
#include <iostream>
#include "../control/Controller.h"
#include "../model/Date.h"

using namespace std;

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <UserInterface>
//
//
//------------------------------------------------------------------------

class UserInterface {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		int displayMenu();
		// How to use :
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading

		//-------------------------------------------- Constructors - destructor
		UserInterface();
		// How to use :
		//
		// Precondition :
		//

		virtual ~UserInterface();
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
		int displayAirQualityArea();
		// How to use :
		//
		// Precondition :
		//

		int displayRankingSensorsSimilarity();
		// How to use :
		//
		// Precondition :
		//

		//----------------------------------------------------- Private Attributes
		Controller controller;
};

//-------------------------------- Other definitions depending on <Sensor>

#endif // Sensor_H
