/*************************************************************************
						   User  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <User> (file User.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>

using namespace std;

//------------------------------------------------------ Include of local files
#include "User.h"
#include "../factory/Reader.h"


//----------------------------------------------------------------- PUBLIC

//------------------------------------------------- Operators overloading

ostream& operator<<(std::ostream& os, const User& p)
{
	return os << ";";
} //----- End of operator <<

//-------------------------------------------- constructors - destructor

User::User()
{
} //----- End of User

User::User(const UserData& ud)
{
} //----- End of User

User::~User()
{
} //----- End of ~User

