/*************************************************************************
                           Attribute  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <Attribute> (file Attribute.h) ----------------
#if ! defined ( Attribute_H )
#define Attribute_H

//--------------------------------------------------- Used Interfaces
#include <string>
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Attribute>
//
//
//------------------------------------------------------------------------

class Attribute
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
    // How to use : Returns the attributee 'id' of the calling Sensor
    //
    // Precondition :
    //
    string getDescription();
    // How to use : Returns a copy of the attributee 'description' of the calling Sensor
    //
    // Precondition :
    //
    string getUnit();
    // How to use : Returns a copy of the attributee 'unit' of the calling Sensor
    //
    // Precondition :
    //

//------------------------------------------------- Operators overloading
    Attribute & operator = ( const Attribute & aAttribute );
    // How to use :
    //
    // Precondition :
    //


//-------------------------------------------- Constructors - destructor
    Attribute ( const Attribute & aAttribute );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    Attribute (string & aId, string & aUnit, string & aDescription );
    // How to use : Initialises the attributes id, unite and description with the corresponding parameters
    //
    // Precondition :
    //

    Attribute ( );
    // How to use :
    //
    // Precondition :
    //


    virtual ~Attribute ( );
    // How to use :
    //
    // Precondition :
    //

//------------------------------------------------------------------ PROTECTED

friend std::istream& operator>>(std::istream&, Attribute&);

protected:
//----------------------------------------------------- Protected Methods

//----------------------------------------------------- Protected Attributees

//------------------------------------------------------------------ PRIVATE

private:

//----------------------------------------------------- Private Methods

//----------------------------------------------------- Private Attributees
string id;
string unit;
string description;

};

//-------------------------------- Other definitions depending on <Attribute>

#endif // Attribute_H

