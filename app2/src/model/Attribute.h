/*************************************************************************
                           Attribute  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Attribute> (file Attribute.h) ----------------
#ifndef Attribute_H
#define Attribute_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "../factory/Reader.h"
using namespace std;

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Attribute>
//
//
//------------------------------------------------------------------------

class Attribute {

//----------------------------------------------------------------- PUBLIC
	public:
	//----------------------------------------------------- Public methods
	// type Method ( parameters list );
	// How to use :
	//
	// Precondition :
	//

	//------------------------------------------------- Operators overloading
		bool operator<(const Attribute&) const;
		// How to use :
		//
		// Precondition :
		//

	//-------------------------------------------- Constructors - destructor
		Attribute() {}
		// How to use :
		//
		// Precondition :
		//

		Attribute(const AttributeData&);
		// How to use :
		//
		// Precondition :
		//
		
	friend ostream& operator<<(std::ostream&, const Attribute&);
	friend class Controller;

//------------------------------------------------------------------ PROTECTED
	protected:
	//----------------------------------------------------- Protected Methods

	//----------------------------------------------------- Protected Attributes

//------------------------------------------------------------------ PRIVATE
	private:
	//----------------------------------------------------- Private Methods

	//----------------------------------------------------- Private Attributes
		string id;
		string unit;
		string description;
};

//-------------------------------- Other definitions depending on <Attribute>

#endif // Attribute_H
