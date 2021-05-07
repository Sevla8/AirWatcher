/*************************************************************************
                           PrivateUser  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <PrivateUser> (file PrivateUser.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "PrivateUser.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type PrivateUser::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method

string PrivateUser::getId ()
{
    return id;
} //----- End of getId

//------------------------------------------------- Operators overloadinf
PrivateUser & PrivateUser::operator = ( const PrivateUser & aPrivateUser )
// Algorithm :
//
{
} //----- End of operator =


//-------------------------------------------- constructors - destructor
PrivateUser::PrivateUser ( const PrivateUser & aPrivateUser )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <PrivateUser>" << endl;
#endif
} //----- End of PrivateUser (copy constructor)


PrivateUser::PrivateUser ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <PrivateUser>" << endl;
#endif
} //----- End of PrivateUser


PrivateUser::~PrivateUser ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <PrivateUser>" << endl;
#endif
} //----- End of ~PrivateUser


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods 

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods 
