/*************************************************************************
						   Cleaner  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Cleaner> (file Cleaner.h) ----------------
#ifndef Cleaner_H
#define Cleaner_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "Date.h"
#include "Provider.h"
#include "../factory/Reader.h"

using namespace std;

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Cleaner>
//
//
//------------------------------------------------------------------------

class Cleaner {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		const string& GetId() const;
		// How to use :
		//
		// Precondition :
		//

		float GetLatitude() const;
		// How to use :
		//
		// Precondition :
		//

		float GetLongitude() const;
		// How to use :
		//
		// Precondition :
		//

		const Date& GetStart() const;
		// How to use :
		//
		// Precondition :
		//

		const Date& GetStop() const;
		// How to use :
		//
		// Precondition :
		//

		const Provider& GetProvider() const;
		// How to use :
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading
		bool operator<(const Cleaner&) const;
		// How to use :
		//
		// Precondition :
		//

		friend ostream& operator<<(std::ostream&, const Cleaner&);
		// How to use :
		//
		// Precondition :
		//

		//-------------------------------------------- Constructors - destructor
		Cleaner(const CleanerData&, const ProviderData&);
		// How to use :
		//
		// Precondition :
		//

		Cleaner(const string&, float, float, const Date&, const Date&, const Provider&);
		// How to use :
		//
		// Precondition :
		//

		Cleaner();
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
		string id;
		float latitude;
		float longitude;
		Date start;
		Date stop;
		Provider provider;
};

//-------------------------------- Other definitions depending on <Cleaner>

#endif // Cleaner_H
