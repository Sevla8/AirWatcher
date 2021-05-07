/*************************************************************************
                           Controller  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <Controller> (file Controller.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//------------------------------------------------------ Include of local files
#include "Controller.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Controller::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method
Model Controller::getModel()
{
    return model;
} //----- End of getModel

//------------------------------------------------- Operators overloadinf
Controller & Controller::operator = ( const Controller & aController )
// Algorithm :
//
{
} //----- End of operator =


//-------------------------------------------- constructors - destructor
Controller::Controller ( const Controller & aController )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Controller>" << endl;
#endif
} //----- End of Controller (copy constructor)


Controller::Controller ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <Controller>" << endl;
#endif
} //----- End of Controller


Controller::~Controller ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <Controller>" << endl;
#endif
} //----- End of ~Controller


//------------------------------------------------------------------ PROTECTED
string Controller :: analyseAirQualityInCircularArea (float latitude, float longitude, float radius, Date begin, Date end)
{
    //define airQuality
    string airQuality="";
    int nbrSensor=model.getSensors()->

    //search all sensors which are in the area
    for (int i=0; i<;i++)
    {

    }

    return airQuality;

}
//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
