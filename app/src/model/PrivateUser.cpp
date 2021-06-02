/*************************************************************************
						   PrivateUser  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <PrivateUser> (file PrivateUser.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "PrivateUser.h"
#include "User.h"
#include "../factory/Reader.h"


//----------------------------------------------------------------- PUBLIC

//------------------------------------------------- Operators overloading

ostream& operator<<(std::ostream& os, const PrivateUser& pu)
{
	return os << pu.id << ";" << pu.score << ";" <<
		pu.malicious << ";";
} //----- End of operator <<

bool PrivateUser::operator<(const PrivateUser& pu) const
{
	return id < pu.id;
} //----- End of operator <

//-------------------------------------------- constructors - destructor

PrivateUser::PrivateUser(const UserData& ud) :
	User(),
	id(ud.id),
	score(0),
	malicious(false) {
} //----- End of PrivateUser

PrivateUser::PrivateUser()
{
} //----- End of PrivateUser

PrivateUser::~PrivateUser()
{
} //----- End of ~PrivateUser

