/*************************************************************************
						   User  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

//------------------------------------------------------------------------
// Role of <User>
//
//
//------------------------------------------------------------------------

class User {
	//----------------------------------------------------------------- PUBLIC
	public:

		//------------------------------------------------- Operators overloading
		friend ostream& operator<<(std::ostream& os, const User& anUser);

		//-------------------------------------------- Constructors - destructor
		User();

		User(const User&);
		// How to use :
		//
		// Precondition :
		//

		User(const UserData& anUserData);
		// How to use : Constructs an User by parsing data contained in anUserData
		//
		// Precondition :
		//

		virtual ~User();

};


#endif // User_H
