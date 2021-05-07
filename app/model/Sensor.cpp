/*************************************************************************
                           Sensor  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <Sensor> (file Sensor.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Sensor.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Sensor::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method

string Sensor::getId ()
{
    return id;
} //----- End of getId

float Sensor::getLatitude()
{
    return latitude;
} //----- End of getLatitude

float Sensor::getLongitude()
{
    return longitude;
} //----- End of getLongitude

bool Sensor::isMalfuntioning()
{
    return malfunctioning;
} //----- End of isMalfunctioning
//------------------------------------------------- Operators overloadinf
Sensor & Sensor::operator = ( const Sensor & aSensor )
// Algorithm :
//
{
} //----- End of operator =

istream& operator>>(std::istream& is, Sensor& a) {
	return is >> a.id >> a.latitude >> a.longitude;
}

//-------------------------------------------- constructors - destructor
Sensor::Sensor ( const Sensor & aSensor )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Sensor>" << endl;
#endif
} //----- End of Sensor (copy constructor)


Sensor::Sensor ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <Sensor>" << endl;
#endif
} //----- End of Sensor


Sensor::~Sensor ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <Sensor>" << endl;
#endif
} //----- End of ~Sensor


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
