/*************************************************************************
                           Provider  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <Provider> (file Provider.h) ----------------
#if ! defined ( Provider_H )
#define Provider_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "User.h"
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Provider>
//
//
//------------------------------------------------------------------------

class Provider : public User
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //
    string getId ();

//------------------------------------------------- Operators overloading
    Provider & operator = ( const Provider & aProvider );
    // How to use :
    //
    // Precondition :
    //

friend istream& operator>>(std::istream& is, Provider& a);

//-------------------------------------------- Constructors - destructor
    Provider ( const Provider & aProvider );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    Provider ( );
    // How to use :
    //
    // Precondition :
    //

    virtual ~Provider ( );
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

};

//-------------------------------- Other definitions depending on <Provider>

#endif // Provider_H

