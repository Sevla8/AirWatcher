/*************************************************************************
                           GovernmentAgency  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <GovernmentAgency> (file GovernmentAgency.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "GovernmentAgency.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type GovernmentAgency::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method


//------------------------------------------------- Operators overloading
GovernmentAgency & GovernmentAgency::operator = ( const GovernmentAgency & aGovernmentAgency )
// Algorithm :
//
{
} //----- End of operator =


//-------------------------------------------- constructors - destructor
GovernmentAgency::GovernmentAgency ( const GovernmentAgency & aGovernmentAgency )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <GovernmentAgency>" << endl;
#endif
} //----- End of GovernmentAgency (copy constructor)


GovernmentAgency::GovernmentAgency ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <GovernmentAgency>" << endl;
#endif
} //----- End of GovernmentAgency


GovernmentAgency::~GovernmentAgency ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <GovernmentAgency>" << endl;
#endif
} //----- End of ~GovernmentAgency


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods 

//------------------------------------------------------------------ PRIVATE