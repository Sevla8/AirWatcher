/*************************************************************************
						   Cleaner  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Cleaner> (file Cleaner.h) ----------------
#ifndef Cleaner_H
#define Cleaner_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "Date.h"
#include "Provider.h"
#include "../factory/Reader.h"

using namespace std;


//------------------------------------------------------------------------
// Role of <Cleaner>
//
//	Represents a Cleaner with its id, position, provider and periode in which it was used
//
//------------------------------------------------------------------------

class Cleaner {
	//----------------------------------------------------------------- PUBLIC
	public:
		//------------------------------------------------- Operators overloading
		bool operator<(const Cleaner& aCleaner) const;
		// 	How to use : Returns a boolean indicating whether the id of aCleaner is greather than the
		//	calling Cleaner's one.

		friend ostream& operator<<(std::ostream& os, const Cleaner& aCleaner);

		//-------------------------------------------- Constructors - destructor
		Cleaner(const CleanerData& aCleanerData, const ProviderData& aProviderData);
		// 	How to use : Initialize a Cleaner with corresponding data in aCleanerData and 
		//	in aProviderData


	//------------------------------------------------------------------ PROTECTED
	protected:
		
		//------------------------------------------------------------------ PRIVATE
	private:

		//----------------------------------------------------- Private Attributes
		string id;
		float latitude;
		float longitude;
		Date start;
		Date stop;
		Provider provider;
};


#endif // Cleaner_H
