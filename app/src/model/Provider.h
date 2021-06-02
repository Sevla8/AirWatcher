/*************************************************************************
						   Provider  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Provider> (file Provider.h) ----------------
#ifndef Provider_H
#define Provider_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "User.h"
#include "../factory/Reader.h"

//------------------------------------------------------------------------
// Role of <Provider>
//
//
//------------------------------------------------------------------------

class Provider : public User {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods

		const string& GetId() const;
		// How to use :
		//
		// Precondition :
		//

		//------------------------------------------------- Operators overloading
		bool operator<(const Provider& aProvider) const;
		// How to use : Returns true if aProvider's id is higher thant the calling Provider's one


		friend ostream& operator<<(std::ostream& os, const Provider& aProvider);

		//-------------------------------------------- Constructors - destructor
		Provider(const ProviderData& aProviderData);
		// How to use : Initialises a Provider by parsing the data in aProviderData

		Provider();
		// How to use :
		//
		// Precondition :
		//

		Provider(const string&);
		// How to use :
		//
		// Precondition :
		//

		virtual ~Provider();

	//------------------------------------------------------------------ PRIVATE
	private:

		//----------------------------------------------------- Private Attributes
		string id;
};

#endif // Provider_H
