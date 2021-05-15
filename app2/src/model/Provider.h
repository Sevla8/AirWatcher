/*************************************************************************
                           Provider  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Provider> (file Provider.h) ----------------
#ifndef Provider_H
#define Provider_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "User.h"
#include "../factory/Reader.h"

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Provider>
//
//
//------------------------------------------------------------------------

class Provider : public User {

//----------------------------------------------------------------- PUBLIC
	public:
	//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

	//------------------------------------------------- Operators overloading

		bool operator<(const Provider&) const;
		// How to use :
    	//
    	// Precondition :
    	//

	//-------------------------------------------- Constructors - destructor

		Provider(const ProviderData&);
		// How to use :
    	//
    	// Precondition :
    	//

		virtual ~Provider();
		// How to use :
    	//
    	// Precondition :
    	//
		
	friend ostream& operator<<(std::ostream&, const Provider&);

//------------------------------------------------------------------ PROTECTED
	protected:
	//----------------------------------------------------- Protected Methods

	//----------------------------------------------------- Protected Attributes

//------------------------------------------------------------------ PRIVATE
	private:
	//----------------------------------------------------- Private Methods

	//----------------------------------------------------- Private Attributes
		string id;
};

//-------------------------------- Other definitions depending on <Provider>

#endif // Provider_H
