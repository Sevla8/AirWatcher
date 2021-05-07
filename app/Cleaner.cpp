/*************************************************************************
                           Cleaner  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <Cleaner> (file Cleaner.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Cleaner.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Cleaner::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method
string Cleaner::getId ()
{
    return id;
} //----- End of getId

float Cleaner::getLatitude()
{
    return latitude;
} //----- End of getLatitude

float Cleaner::getLongitude()
{
    return longitude;
} //----- End of getLongitude

/* INCLUDES A REGLER
Timestamp Cleaner::getStart()
{
    return start;
}//----- End of getStart
Timestamp Cleaner::getStop()
{
    return stop;
}//----- End of getStop
*/

//------------------------------------------------- Operators overloadinf
Cleaner & Cleaner::operator = ( const Cleaner & aCleaner )
// Algorithm :
//
{
} //----- End of operator =


//-------------------------------------------- constructors - destructor
Cleaner::Cleaner ( const Cleaner & aCleaner )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Cleaner>" << endl;
#endif
} //----- End of Cleaner (copy constructor)


Cleaner::Cleaner ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <Cleaner>" << endl;
#endif
} //----- End of Cleaner


Cleaner::~Cleaner ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <Cleaner>" << endl;
#endif
} //----- End of ~Cleaner


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods 

//------------------------------------------------------------------ PRIVATE