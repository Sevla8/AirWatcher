/*************************************************************************
						   Cleaner  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <Cleaner> (file Cleaner.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
#include <sstream>

using namespace std;

//------------------------------------------------------ Include of local files
#include "Cleaner.h"
#include "Provider.h"
#include "../factory/Reader.h"


//----------------------------------------------------------------- PUBLIC

//------------------------------------------------- Operators overloading

ostream& operator<<(std::ostream& os, const Cleaner& aCleaner)
{
	return os << aCleaner.id << ";" << aCleaner.latitude << ";" << aCleaner.longitude <<
		";" << aCleaner.start << ";" << aCleaner.stop << ";" << aCleaner.provider << ";";
} //----- End of operator <<

bool Cleaner::operator<(const Cleaner& aCleaner) const
{
	return id < aCleaner.id;
} //----- End of operator <

//-------------------------------------------- constructors - destructor

Cleaner::Cleaner(const CleanerData& cd, const ProviderData& pd) :
	provider(pd),
	id(cd.id),
	latitude(cd.latitude),
	longitude(cd.longitude),
	start(cd.start),
	stop(cd.stop) {
}  //----- End of Cleaner

