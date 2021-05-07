/*************************************************************************
                           Measurement  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <Measurement> (file Measurement.h) ----------------
#if ! defined ( Measurement_H )
#define Measurement_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "Date.h"
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Measurement>
//
//
//------------------------------------------------------------------------

class Measurement
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //


    Date Measurement::getDate()
    // How to use : returns a copy of the attribute 'date' of the calling Measurement
    //
    // Precondition :
    //
    {
        return date;
    }

    float Measurement::getValue()
    // How to use : returns a copy of the attribute 'value' of the calling Measurement
    //
    // Precondition :
    //
    {
        return value;
    }


//------------------------------------------------- Operators overloading
    Measurement & operator = ( const Measurement & aMeasurement );
    // How to use :
    //
    // Precondition :
    //


//-------------------------------------------- Constructors - destructor
    Measurement ( const Measurement & aMeasurement );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    Measurement (Date& theDate, string & theSensorId, string & theAttributeId, float theValue );
    // How to use : Initialises the attributes value, date, sensorId and attributeId with the corresponding parameters.
    //              start is initialised as null as well as stop

    Measurement ( );
    // How to use :
    //
    // Precondition :
    //

    virtual ~Measurement ( );
    // How to use :
    //
    // Precondition :
    //

//------------------------------------------------------------------ PROTECTED

friend std::istream& operator>>(std::istream&, Measurement&);

protected:
//----------------------------------------------------- Protected Methods

//----------------------------------------------------- Protected Attributes

//------------------------------------------------------------------ PRIVATE

private:

//----------------------------------------------------- Private Methods

//----------------------------------------------------- Private Attributes

float value;
Date date;
string sensorId;
string attributeId;


};

//-------------------------------- Other definitions depending on <Measurement>

#endif // Measurement_H

