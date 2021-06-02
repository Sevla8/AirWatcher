/*************************************************************************
						   Provider  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <Provider> (file Provider.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>

using namespace std;

//------------------------------------------------------ Include of local files
#include "Provider.h"
#include "../factory/Reader.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods

//------------------------------------------------- Operators overloadinf

ostream& operator<<(std::ostream& os, const Provider& p)
// Algorithm :
//
{
	return os << p.id << ";";
} //----- End of operator <<

bool Provider::operator<(const Provider& p) const
// Algorithm :
//
{
	return id < p.id;
} //----- End of operator <

//-------------------------------------------- constructors - destructor

Provider::Provider(const ProviderData& pd) :
// Algorithm :
//
	User(),
	id(pd.id) {
} //----- End of Provider

Provider::~Provider()
// Algorithm :
//
{
} //----- End of ~Provider

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
