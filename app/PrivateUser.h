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
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <PrivateUser>
//
//
//------------------------------------------------------------------------

class PrivateUser : public virtual User
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

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


//-------------------------------------------- Constructors - destructor
    PrivateUser ( const PrivateUser & aPrivateUser );
    // How to use (copy constructor):
    //
    // Precondition :
    //

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
string login;
string password;

//------------------------------------------------------------------ PRIVATE

private:

//----------------------------------------------------- Private Methods

//----------------------------------------------------- Private Attributes


};

//-------------------------------- Other definitions depending on <PrivateUser>

#endif // PrivateUser_H

