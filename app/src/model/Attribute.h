/*************************************************************************
						   Attribute  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Attribute> (file Attribute.h) ----------------
#ifndef Attribute_H
#define Attribute_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "../factory/Reader.h"

using namespace std;

//------------------------------------------------------------------------
// Role of <Attribute>
// 
//	Indicates for a given Measurement which were the id, the unit and its textual
//	description
//
//------------------------------------------------------------------------

class Attribute {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		const string& GetId() const;
		// How to use : Returns a reference to it's 'id' attribute

		//------------------------------------------------- Operators overloading
		bool operator<(const Attribute& toCompareWith) const;
		// 	How to use : Returns a boolean indicating whether the id of toCompareWith is greather than the
		//	calling Attribute's one.

		friend ostream& operator<<(std::ostream& os, const Attribute& anAttribute);

		//-------------------------------------------- Constructors - destructor
		Attribute();

		Attribute(const AttributeData& ad);
		// How to use : Creates an Attribute by affecting its attributes with the corresponding values in 'ad'

	//------------------------------------------------------------------ PRIVATE
	private:

		//----------------------------------------------------- Private Attributes
		string id;
		string unit;
		string description;
};

#endif // Attribute_H
