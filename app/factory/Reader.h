/*************************************************************************
                           Reader  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <Reader> (file Reader.h) ----------------
#if ! defined ( Reader_H )
#define Reader_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <list>
#include <fstream>
#include "../model/Sensor.h"
#include "../model/PrivateUser.h"
#include "../model/Measurement.h"
#include "../model/Attribute.h"
#include "../model/Cleaner.h"
#include "../model/Provider.h"

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Reader>
//	Read and parse data in csv files
//
//------------------------------------------------------------------------

class Reader
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

	static list<Sensor>* readSensors(string filename);
    static list<PrivateUser>* readPrivateUsers(string filename);
    static list<Measurement>* readMeasurements(string filename);
    static list<Attribute>* readAttributes(string filename);
    static list<Cleaner>* readCleaners(string filename);
    static list<Provider>* readProviders(string filename);

//------------------------------------------------- Operators overloading
    Reader & operator = ( const Reader & aReader );
    // How to use :
    //
    // Precondition :
    //


//-------------------------------------------- Constructors - destructor
    Reader ( const Reader & aReader );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    Reader ( );
    // How to use :
    //
    // Precondition :
    //

    virtual ~Reader ( );
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

//-------------------------------- Other definitions depending on <Reader>

#endif // Reader_H

