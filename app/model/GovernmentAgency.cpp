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

//-------------------------------------------- constructors - destructor
GovernmentAgency::GovernmentAgency ( const GovernmentAgency & aGovernmentAgency ) : User()
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <GovernmentAgency>" << endl;
#endif
} //----- End of GovernmentAgency (copy constructor)


GovernmentAgency::GovernmentAgency ( ) : User()
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <GovernmentAgency>" << endl;
#endif
} //----- End of GovernmentAgency

GovernmentAgency::GovernmentAgency (const string & aLogin, const string & aPassword, const string & aId, float aLatitude, float aLongitude ) : User(aLogin, aPassword), id(aId),
                                     latitude(aLatitude), longitude(aLongitude)
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling param constructor of <GovernmentAgency>" << endl;
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