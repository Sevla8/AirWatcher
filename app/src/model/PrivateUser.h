/*************************************************************************
                           PrivateUser  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <PrivateUser> (file PrivateUser.h) ----------------
#if ! defined ( PrivateUser_H )
#define PrivateUser_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <list>
#include "Sensor.h"
#include "User.h"
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <PrivateUser>
//
//
//------------------------------------------------------------------------

class PrivateUser : public User
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

	string getId();

    // BESOIN DE CREER UNE FONCTION PRIVATE GETPASSWORD ET LA METTRE COMME AMIE DANS CLASSE OU ON SE LOG

    // How to use : returns a copy of the attribute 'id' of the calling PrivateUser
    //
    // Precondition :
    //
//------------------------------------------------- Operators overloading
    PrivateUser & operator = ( const PrivateUser & aPrivateUser );
    // How to use :
    //
    // Precondition :
    //

friend istream& operator>>(std::istream& is, PrivateUser& pa);

//-------------------------------------------- Constructors - destructor
    PrivateUser ( const PrivateUser & aPrivateUser );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    PrivateUser ( const string & aLogin, const string & aPassword, const string & anId, Sensor aSensor);
    // How to use (param constructor):

    PrivateUser ( );
    // How to use :
    //
    // Precondition :
    //

    virtual ~PrivateUser ( );
    // How to use :
    //
    // Precondition :
    //

//------------------------------------------------------------------ PROTECTED

protected:
//----------------------------------------------------- Protected Methods

//----------------------------------------------------- Protected Attributes

//------------------------------------------------------------------ PRIVATE

private:

//----------------------------------------------------- Private Methods

//----------------------------------------------------- Private Attributes

string id;
int score;
bool malicious;
list<Sensor> sensors;


};

//-------------------------------- Other definitions depending on <PrivateUser>

#endif // PrivateUser_H

