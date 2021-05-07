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
#include <list>
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

//------------------------------------------------- Operators overloading


istream& operator>>(std::istream& is, PrivateUser& pa)
{
	return is >> pa.id;
	Sensor sensor;
	is >> sensor;
	pa.sensors.push_back(sensor);
}//----- End of operator>>


//-------------------------------------------- constructors - destructor
PrivateUser::PrivateUser ( const PrivateUser & aPrivateUser ) : User()
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <PrivateUser>" << endl;
#endif
} //----- End of PrivateUser (copy constructor)

PrivateUser::PrivateUser ( const string & aLogin, const string & aPassword, const string & anId, Sensor aSensor) : User(login, password), id(anId)
// Algorithm : We create the PrivateUser at the first time we read a line in users.csv in wich it is present. Sensor is then added to the list.
//      After this line, if he has another Sensor it is going to be added to the list. Calling another function required
{

}

PrivateUser::PrivateUser ( ) : User()
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <PrivateUser>" << endl;
#endif
} //----- End of PrivateUser

PrivateUser::PrivateUser ( ) : User()
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
