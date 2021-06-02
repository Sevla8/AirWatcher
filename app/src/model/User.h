/*************************************************************************
						   User  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <User> (file User.h) ----------------
#ifndef User_H
#define User_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <iostream>
#include "../factory/Reader.h"

using namespace std;

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <User>
//
//
//------------------------------------------------------------------------

class User {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods

		//------------------------------------------------- Operators overloading
		friend ostream& operator<<(std::ostream&, const User&);
		// How to use :
		//
		// Precondition :
		//

		//-------------------------------------------- Constructors - destructor
		User();
		// How to use :
		//
		// Precondition :
		//

		User(const UserData&);
		// How to use :
		//
		// Precondition :
		//

		User(const User&);
		// How to use :
		//
		// Precondition :
		//

		virtual ~User();
		// How to use :
		//
		// Precondition :
		//

	//------------------------------------------------------------------ PROTECTED
	protected:
		//----------------------------------------------------- Protected Methods

		//----------------------------------------------------- Protected Attributes
		// string login;
		// string password;

	//------------------------------------------------------------------ PRIVATE
	private:
		//----------------------------------------------------- Private Methods

		//----------------------------------------------------- Private Attributes
};

//-------------------------------- Other definitions depending on <User>

#endif // User_H
