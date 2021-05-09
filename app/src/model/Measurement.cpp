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
#include "Date.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Measurement::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method


istream& operator>>(std::istream& is, Measurement& m) {
	return is >> m.date >> m.sensorId >> m.attributeId >> m.value;
}


//-------------------------------------------- constructors - destructor
Measurement::Measurement ( const Measurement & aMeasurement )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Measurement>" << endl;
#endif
} //----- End of Measurement (copy constructor)
Measurement::Measurement (Date & theDate, string & theSensorId, string & theAttributeId, float theValue )
{
    date = theDate;
    sensorId = theSensorId;
    attributeId = theAttributeId;
    value = theValue;
}//----- End of Measurement (param constructor)

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


// Date Measurement::getDate()
// // How to use : returns a copy of the attribute 'date' of the calling Measurement
// //
// // Precondition :
// //
// {
// 	return date;
// }

// float Measurement::getValue()
// // How to use : returns a copy of the attribute 'value' of the calling Measurement
// //
// // Precondition :
// //
// {
// 	return value;
// }

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
