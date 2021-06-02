/*************************************************************************
						   PrivateUser  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <PrivateUser>
//
//
//------------------------------------------------------------------------

class PrivateUser : public User {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods

		const string& GetId() const;
		// How to use :
		//
		// Precondition :
		//

		int GetScore() const;
		// How to use :
		//
		// Precondition :
		//

		bool GetMalicious() const;
		// How to use :
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading
		bool operator<(const PrivateUser&) const;
		// How to use :
		//
		// Precondition :
		//

		friend ostream& operator<<(std::ostream&, const PrivateUser&);
		// How to use :
		//
		// Precondition :
		//

		//-------------------------------------------- Constructors - destructor
		PrivateUser();
		// How to use :
		//
		// Precondition :
		//

		PrivateUser(const string&, int, bool);
		// How to use :
		//
		// Precondition :
		//

		PrivateUser(const UserData&);
		// How to use :
		//
		// Precondition :
		//

		PrivateUser(const PrivateUser&);
		// How to use :
		//
		// Precondition :
		//

		virtual ~PrivateUser();
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
		int score;
		bool malicious;
};

//-------------------------------- Other definitions depending on <PrivateUser>

#endif // PrivateUser_H
