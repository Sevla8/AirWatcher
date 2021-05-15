/*************************************************************************
                           Controller  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Controller> (file Controller.h) ----------------
#ifndef Controller_H
#define Controller_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "../model/Model.h"

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Controller>
//
//
//------------------------------------------------------------------------

class Controller {
//----------------------------------------------------------------- PUBLIC
	public:
	//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

		Model getModel() const;
		// type Method ( parameters list );
    	// How to use :
    	//
    	// Precondition :
    	//

		string analyseAirQualityInCircularArea(float, float, float, const Date&, const Date&);
		// type Method ( parameters list );
    	// How to use :
    	//
		// Precondition :
    	//

	//------------------------------------------------- Operators overloading

	//-------------------------------------------- Constructors - destructor
		Controller();
		// How to use : Constructs a Controller
    	//
    	// Precondition :
    	//

		virtual ~Controller();
		// How to use :
    	//
    	// Precondition :
    	//
		
	friend ostream& operator<<(std::ostream&, const Controller&);

//------------------------------------------------------------------ PROTECTED
	protected:
	//----------------------------------------------------- Protected Methods

	//----------------------------------------------------- Protected Attributes

//------------------------------------------------------------------ PRIVATE
	private:
	//----------------------------------------------------- Private Methods

	//----------------------------------------------------- Private Attributes

		Model model;
};

//-------------------------------- Other definitions depending on <Controller>

#endif // Controller_H
