/*************************************************************************
                           Cleaner  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <Cleaner> (file Cleaner.h) ----------------
#if ! defined ( Cleaner_H )
#define Cleaner_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "Date.h"

using namespace std;

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Cleaner>
//
//
//------------------------------------------------------------------------

class Cleaner
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
    // How to use : returns a copy of the attribute 'id' of the calling Cleaner
    //
    // Precondition :
    //
    float getLatitude();
    // How to use : Returns a copy of the  attribute 'latitude' of the calling Cleaner
    //
    // Precondition :
    //

    float getLongitude();
    // How to use : Returns a copy of the attribute 'longitude' of the calling Cleaner
    //
    // Precondition :
    //

//------------------------------------------------- Operators overloading

    Cleaner & operator = ( const Cleaner & aCleaner );
    // How to use :
    //
    // Precondition :
    //



//-------------------------------------------- Constructors - destructor
    Cleaner ( const Cleaner & aCleaner );
    // How to use (copy constructor): initialises a new Cleaner having the same attributes' values that those of aCleaner
    //
    // Precondition : aCleaner is not null
    //

    Cleaner (string & aId, float aLatitude, float aLongitude );
    // How to use : Initialises the attributes id, latitude and longitude with the corresponding parameters.
    //              start is initialised as null as well as stop

    Cleaner ( );
    // How to use :
    //
    // Precondition :
    //

    virtual ~Cleaner ( );
    // How to use :
    //
    // Precondition :
    //

//------------------------------------------------------------------ PROTECTED

friend std::istream& operator>>(std::istream&, Cleaner&);

protected:
//----------------------------------------------------- Protected Methods

//----------------------------------------------------- Protected Attributes

//------------------------------------------------------------------ PRIVATE

private:

//----------------------------------------------------- Private Methods

//----------------------------------------------------- Private Attributes
string id;
float latitude;
float longitude;

// TYPE DES DATES ENCORE A CHANGER, MIS COMME INT POUR POUVOIR EXRIRE
Date start;
Date stop;

};

//-------------------------------- Other definitions depending on <Cleaner>

#endif // Cleaner_H

