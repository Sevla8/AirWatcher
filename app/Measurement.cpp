/*************************************************************************
                           Measurement  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <Measurement> (file Measurement.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Measurement.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Measurement::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method


//------------------------------------------------- Operators overloadinf
Measurement & Measurement::operator = ( const Measurement & aMeasurement )
// Algorithm :
//
{
} //----- End of operator =


//-------------------------------------------- constructors - destructor
Measurement::Measurement ( const Measurement & aMeasurement )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Measurement>" << endl;
#endif
} //----- End of Measurement (copy constructor)


Measurement::Measurement ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <Measurement>" << endl;
#endif
} //----- End of Measurement


Measurement::~Measurement ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <Measurement>" << endl;
#endif
} //----- End of ~Measurement


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods 

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods 
