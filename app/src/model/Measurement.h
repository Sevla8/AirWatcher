/*************************************************************************
						   Measurement  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

//------------------------------------------------------------------------
// Role of <Measurement>
//
//	Contains the value, the Attribute and the Date of a measure.
//
//------------------------------------------------------------------------

class Measurement {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods

		const Attribute& GetAttribute() const;

		const Date& GetDate() const;

		float GetValue() const;
		// How to use :
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading
		bool operator<(const Measurement& aMeasurement) const;
		// How to use : Returns true if the date of aMeasurement is more recent than the calling Measurement one
		//

		friend ostream& operator<<(std::ostream&, const Measurement& aMeasurement);

		//-------------------------------------------- Constructors - destructor
		Measurement(const MeasurementData& aMeasurementData);
		// How to use : Creates a Measurement with the corresponding values in aMeasurementData
		//

		Measurement(const MeasurementData& aMeasurementData, const AttributeData& anAttributeData);
		// How to use : Creates a Measurement with the corresponding values in aMeasurementData and
		// in anAttributeData

		Measurement(float, const Date&, const Attribute&);
		// How to use :
		//
		// Precondition :
		//

		Measurement();
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
		float value;
		Date date;
		Attribute attribute;
};

#endif // Measurement_H
