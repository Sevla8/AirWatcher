/*************************************************************************
                           Model  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <Model> (file Model.h) ----------------
#if ! defined ( Model_H )
#define Model_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <list>
#include "Sensor.h"
#include "PrivateUser.h"
#include "Measurement.h"
#include "Attribute.h"
#include "Cleaner.h"
#include "Provider.h"
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Model>
//
//
//------------------------------------------------------------------------

class Model
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

list <Sensor>* getSensors();
// type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

list <PrivateUser>* getPrivateUsers();
// type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

list <Measurement>* getMeasurements();
// type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

list <Attribute>* getAttributes();
// type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //
list <Cleaner>* getCleaners();
// type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

list <Provider>* getProviders();
// type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //
//----- End of getProviders
//------------------------------------------------- Operators overloading
    Model & operator = ( const Model & aModel );
    // How to use :
    //
    // Precondition :
    //


//-------------------------------------------- Constructors - destructor
    Model ( const Model & aModel );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    Model ( );
    // How to use :
    //
    // Precondition :
    //

    virtual ~Model ( );
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

list<Sensor>* listSensors;
list<PrivateUser>* listPrivateUsers;
list<Measurement>* listMeasurements;
list<Attribute>* listAttributes;
list<Cleaner>* listCleaners;
list<Provider>* listProviders;
};

//-------------------------------- Other definitions depending on <Model>

#endif // Model_H

