/*************************************************************************
						   Cleaner  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

const string& Cleaner::GetId() const
// Algorithm :
//
{
	return id;
} //----- End of GetId

float Cleaner::GetLatitude() const
// Algorithm :
//
{
	return latitude;
} //----- End of GetLatitude

float Cleaner::GetLongitude() const
// Algorithm :
//
{
	return longitude;
} //----- End of GetLongitude

const Date& Cleaner::GetStart() const
// Algorithm :
//
{
	return start;
} //----- End of GetStart

const Date& Cleaner::GetStop() const
// Algorithm :
//
{
	return stop;
} //----- End of GetStop

const Provider& Cleaner::GetProvider() const
// Algorithm :
//
{
	return provider;
} //----- End of GetProvider

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

Cleaner::Cleaner(const string& id, float latitude, float longitude, const Date& start, const Date& stop, const Provider& provider) :
// Algorithm :
//
	id(id),
	latitude(latitude),
	longitude(longitude),
	start(start),
	stop(stop),
	provider(provider) {
}  //----- End of Cleaner

Cleaner::Cleaner()
// Algorithm :
//
{
}  //----- End of Cleaner

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE
