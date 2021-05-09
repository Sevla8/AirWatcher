//----------------------------------------------------- Private Methods
/*************************************************************************
                           GovernmentAgency  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <GovernmentAgency> (file GovernmentAgency.h) ----------------
#if ! defined ( GovernmentAgency_H )
#define GovernmentAgency_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "User.h"
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <GovernmentAgency>
//
//
//------------------------------------------------------------------------

class GovernmentAgency : public User
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
    // How to use : returns a copy of the attribute 'id' of the calling GovernmentAgency
    //
    // Precondition :
    //

//-------------------------------------------- Constructors - destructor
    GovernmentAgency ( const GovernmentAgency & aGovernmentAgency );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    GovernmentAgency (const string & aLogin, const string & aPassword );
    // How to use : Initialises the attributes id, latitude and longitude with the corresponding parameters.
    //              start is initialised as null as well as stop

    GovernmentAgency ( );
    // How to use :
    //
    // Precondition :
    //

    virtual ~GovernmentAgency ( );
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


};

//-------------------------------- Other definitions depending on <GovernmentAgency>

#endif // GovernmentAgency_H

