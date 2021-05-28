/*************************************************************************
                           Measurement  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Measurement> (file Measurement.h) ----------------
#ifndef Measurement_H
#define Measurement_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "Date.h"
#include "Attribute.h"
#include "../factory/Reader.h"
using namespace std;

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Measurement>
//
//
//------------------------------------------------------------------------

class Measurement {

//----------------------------------------------------------------- PUBLIC
	public:
	//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

	const Attribute& GetAttribute() const;

	const Date& GetDate() const;

	double GetValue() const;

	//------------------------------------------------- Operators overloading

		bool operator<(const Measurement&) const;
		// How to use :
    	//
    	// Precondition :
    	//

	//-------------------------------------------- Constructors - destructor
		Measurement(const MeasurementData&);
		// How to use :
    	//
    	// Precondition :
    	//

		Measurement(const MeasurementData&, const AttributeData&);
		// How to use :
    	//
    	// Precondition :
    	//

	friend ostream& operator<<(std::ostream&, const Measurement&);
	friend class Controller;

//------------------------------------------------------------------ PROTECTED
	protected:
	//----------------------------------------------------- Protected Methods

	//----------------------------------------------------- Protected Attributes

//------------------------------------------------------------------ PRIVATE
	private:
	//----------------------------------------------------- Private Methods

	//----------------------------------------------------- Private Attributes
		double value;
		Date date;
		Attribute attribute;
};

//-------------------------------- Other definitions depending on <Measurement>

#endif // Measurement_H
