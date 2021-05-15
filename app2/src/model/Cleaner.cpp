/*************************************************************************
                           Cleaner  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Cleaner::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method

//------------------------------------------------- Operators overloading

ostream& operator<<(std::ostream& os, const Cleaner& c) 
// Algorithm :
//
{
	return os << c.id << ";" << c.latitude << ";" << c.longitude <<
		";" << c.start << ";" << c.stop << ";" << c.provider << ";";
} //----- End of operator <<

bool Cleaner::operator<(const Cleaner& c) const 
// Algorithm :
//
{
	return id < c.id;
} //----- End of operator <

//-------------------------------------------- constructors - destructor

Cleaner::Cleaner(const CleanerData& cd, const ProviderData& pd) :
// Algorithm :
//
	provider(pd),
	id(cd.id),
	latitude(cd.latitude),
	longitude(cd.longitude),
	start(cd.start),
	stop(cd.stop) {
}  //----- End of Cleaner

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE
