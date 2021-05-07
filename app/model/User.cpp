/*************************************************************************
                           User  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <User> (file User.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "User.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type User::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method

//------------------------------------------------- Operators overloadinf
User & User::operator = ( const User & aUser )
// Algorithm :
//
{
} //----- End of operator =



//-------------------------------------------- constructors - destructor
User::User ( const User & aUser )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <User>" << endl;
#endif
} //----- End of User (copy constructor)


User::User ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <User>" << endl;
#endif
} //----- End of User


User::~User ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <User>" << endl;
#endif
} //----- End of ~User


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
