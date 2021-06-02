/*************************************************************************
						ption

	inning
	yright						 by $B3204 and B3025 $
	ail						.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							s@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <User> (file User.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>

using namespace std;

//------------------------------------------------------ Include of local files
#include "User.h"
#include "../factory/Reader.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods

//------------------------------------------------- Operators overloadinf

ostream& operator<<(std::ostream& os, const User& p)
// Algorithm :
//
{
	return os << ";";
} //----- End of operator <<

//-------------------------------------------- constructors - destructor

User::User()
// Algorithm :
//
{
} //----- End of User

User::User(const UserData& ud)
// Algorithm :
//
{
} //----- End of User

User::~User()
// Algorithm :
//
{
} //----- End of ~User

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
