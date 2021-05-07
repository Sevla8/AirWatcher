/*************************************************************************
                           Provider  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <Provider> (file Provider.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Provider.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Provider::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method
string Provider::getId ()
{
    return id;
} //----- End of getId

//------------------------------------------------- Operators overloadinf
Provider & Provider::operator = ( const Provider & aProvider )
// Algorithm :
//
{
} //----- End of operator =

istream& operator>>(std::istream& is, Provider& a) {
	return is >> a.id;
}


//-------------------------------------------- constructors - destructor
Provider::Provider ( const Provider & aProvider ) : User()
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Provider>" << endl;
#endif
} //----- End of Provider (copy constructor)


Provider::Provider ( ) : User()
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <Provider>" << endl;
#endif
} //----- End of Provider


Provider::~Provider ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <Provider>" << endl;
#endif
} //----- End of ~Provider


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
