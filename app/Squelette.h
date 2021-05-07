/*************************************************************************
                           Sensor  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <Sensor> (file Sensor.h) ----------------
#if ! defined ( Sensor_H )
#define Sensor_H

//--------------------------------------------------- Used Interfaces 
#include <string>
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Sensor>
//
//
//------------------------------------------------------------------------

class Sensor 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //


//------------------------------------------------- Operators overloading
    Sensor & operator = ( const Sensor & aSensor );
    // How to use :
    //
    // Precondition :
    //


//-------------------------------------------- Constructors - destructor
    Sensor ( const Sensor & aSensor );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    Sensor ( );
    // How to use :
    //
    // Precondition :
    //

    virtual ~Sensor ( );
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

//-------------------------------- Other definitions depending on <Sensor>

#endif // Sensor_H

