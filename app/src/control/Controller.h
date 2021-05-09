/*************************************************************************
                           Controller  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <Controller> (file Controller.h) ----------------
#if ! defined ( Controller_H )
#define Controller_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include "../model/Sensor.h"
#include "../model/User.h"
#include "../model/Measurement.h"
#include "../model/Attribute.h"
#include "../model/Cleaner.h"
#include "../model/Provider.h"
#include "../model/Date.h"
#include "../model/GovernmentAgency.h"
#include "../model/PrivateUser.h"
#include "../model/Model.h"


//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Controller>
//
//
//------------------------------------------------------------------------

class Controller
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //
Model getModel();
// type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //


//------------------------------------------------- Operators overloading
    Controller & operator = ( const Controller & aController );
    // How to use :
    //
    // Precondition :
    //


//-------------------------------------------- Constructors - destructor
    Controller ( const Controller & aController );
    // How to use (copy constructor):
    //
    // Precondition :
    //

    Controller ();
    // How to use : Constructs a Controller
    //
    // Precondition :
    //


    virtual ~Controller ( );
    // How to use :
    //
    // Precondition :
    //

//------------------------------------------------------------------ PROTECTED

protected:
//----------------------------------------------------- Protected Methods
string analyseAirQualityInCircularArea(float lattitude, float longitude, float radius, Date begin, Date end);
//----------------------------------------------------- Protected Attributes

//------------------------------------------------------------------ PRIVATE

private:

//----------------------------------------------------- Private Methods

//----------------------------------------------------- Private Attributes

Model model;

};

//-------------------------------- Other definitions depending on <Controller>

#endif // Controller_H

