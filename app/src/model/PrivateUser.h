/*************************************************************************
						   PrivateUser  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <PrivateUser> (file PrivateUser.h) ----------------
#ifndef PrivateUser_H
#define PrivateUser_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <list>
#include "User.h"
#include "../factory/Reader.h"

//------------------------------------------------------------------------
// Role of <PrivateUser>
//
//	
//
//------------------------------------------------------------------------

class PrivateUser : public User {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods

		//------------------------------------------------- Operators overloading
		bool operator<(const PrivateUser& aPrivateUser) const;
		// How to use : Returns true if the id of aPrivateUser is higher than the calling PrivateUser's one

		friend ostream& operator<<(std::ostream& os, const PrivateUser& aPrivateUser );


		//-------------------------------------------- Constructors - destructor
		PrivateUser();


		PrivateUser(const UserData& anUserData);
		// How to use : Initialises a PrivateUser by parsing the data in anUserData
		//


		virtual ~PrivateUser();

	//------------------------------------------------------------------ PRIVATE
	private:

		//----------------------------------------------------- Private Attributes
		string id;
		int score;
		bool malicious;
};

#endif // PrivateUser_H
