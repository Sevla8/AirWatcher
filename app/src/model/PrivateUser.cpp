/*************************************************************************
						   PrivateUser  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods

const string& PrivateUser::GetId() const
// Algorithm :
//
{
	return id;
} //----- End of GetId

int PrivateUser::GetScore() const
// Algorithm :
//
{
	return score;
} //----- End of GetScore

bool PrivateUser::GetMalicious() const
// Algorithm :
//
{
	return malicious;
} //----- End of GetMalicious

//------------------------------------------------- Operators overloading

ostream& operator<<(std::ostream& os, const PrivateUser& pu)
// Algorithm :
//
{
	return os << pu.id << ";" << pu.score << ";" <<
		pu.malicious << ";";
} //----- End of operator <<

bool PrivateUser::operator<(const PrivateUser& pu) const
// Algorithm :
//
{
	return id < pu.id;
} //----- End of operator <

//-------------------------------------------- constructors - destructor

PrivateUser::PrivateUser(const UserData& ud) :
// Algorithm :
//
	User(),
	id(ud.id),
	score(0),
	malicious(false) {
} //----- End of PrivateUser

PrivateUser::PrivateUser()
// Algorithm :
//
{
} //----- End of PrivateUser

PrivateUser::PrivateUser(const string& id, int score, bool malicious) :
// Algorithm :
//
	id(id),
	score(score),
	malicious(malicious)
{
} //----- End of PrivateUser

PrivateUser::PrivateUser(const PrivateUser& privateUser) :
// Algorithm :
//
	id(privateUser.id),
	score(privateUser.score),
	malicious(privateUser.malicious)
{
} //----- End of PrivateUser

PrivateUser::~PrivateUser()
// Algorithm :
//
{
} //----- End of ~PrivateUser

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
