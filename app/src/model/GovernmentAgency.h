//----------------------------------------------------- Private Methods
/*************************************************************************
						   GovernmentAgency  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <GovernmentAgency> (file GovernmentAgency.h) ----------------
#ifndef GovernmentAgency_H
#define GovernmentAgency_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "User.h"

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <GovernmentAgency>
//	User extension corresponding to the Government Agency
//
//------------------------------------------------------------------------

class GovernmentAgency : public User {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods

		//-------------------------------------------- Constructors - destructor
		virtual ~GovernmentAgency();
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
};

//-------------------------------- Other definitions depending on <GovernmentAgency>

#endif // GovernmentAgency_H
