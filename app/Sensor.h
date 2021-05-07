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

    string getId();
    // How to use : Returns the attribute 'id' of the calling Sensor
    //
    // Precondition : 
    //

    float getLatitude();
    // How to use : Returns the attribute 'latitude' of the calling Sensor
    //
    // Precondition : 
    //

    float getLongitude();
    // How to use : Returns the attribute 'longitude' of the calling Sensor
    //
    // Precondition : 
    //

    // CHANGE IN CLASS DIAGRAM
    bool isMalfuntioning();
    // How to use : Returns the attribute 'malfunctioning' of the calling Sensor
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
    // How to use (copy constructor ):
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

//----------------------------------------------------- Protected attributes

//------------------------------------------------------------------ PRIVATE

private:

//----------------------------------------------------- Private Methods

//----------------------------------------------------- Private Attributes

string id;
float latitude;
float longitude;
bool malfunctioning;

};

//-------------------------------- Other definitions depending on <Sensor>

#endif // Sensor_H

