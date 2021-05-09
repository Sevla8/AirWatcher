/*************************************************************************
                           User  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <User> (file User.h) ----------------
#if ! defined ( User_H )
#define User_H

//--------------------------------------------------- Used Interfaces
#include <string>
using namespace std;
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <User>
//
//
//------------------------------------------------------------------------

class User
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
    string getId();
    // How to use : returns a copy of the attribute 'id' of the calling User
    //
    // Precondition :
    //

//-------------------------------------------- Constructors - destructor
    User ( const User & aUser );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    User ( );
    // How to use :
    //
    // Precondition :
    //

    virtual ~User ( );
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

//-------------------------------- Other definitions depending on <User>

#endif // User_H

