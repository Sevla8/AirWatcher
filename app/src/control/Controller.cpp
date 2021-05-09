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
    float indexAir=0.0;
    int nbrSensor=model.getSensors()->size();
    float currentLatitude=0.0;
    float currentLongitude=0.0;
    list<Sensor>* sensorsInArea;
    conversionRadius=radius;//find the relation
    defaultDate=Date();



    //search all sensors which are in the area
    for(list<Sensor>::iterator currentSensor = model.getSensors()->begin(); currentSensor != model.getSensors()->end(); currentSensor++)
    {
        currentLatitude=currentSensor->getLatitude();
        currentLongitude=currentSensor->getLongitude();
        float distance=sqrt(pow(currentLatitude-latitude, 2)+pow(currentLongitude-longitude, 2));
        
        if(distance<=conversionRadius)
        {
            sensorsInArea.push_back(currentSensor);          
        }		
	}
    
    //to make the difference between time interval and ponctual measurement
    if (end == defaultDate)
    {
        for(list<Sensor>::iterator currentSensor = sensorsInArea->begin(); currentSensor != sensorsInArea->end(); currentSensor++)
        {
            list <Measurement>* currentMeasurementList = currentSensor.getMeasurements();
            int nbrMeasurementUsed=0;
            for(list<Measurement>::iterator currentMeasurements = currentMeasurementList->begin(); currentMeasurements != currentMeasurementList->end(); currentMeasurements++)
            {
                if(currentMeasurements.date==begin)
                {
                    if (currentMeasurements.attributeId=="PM10")//déterminer quel(s) type d'attribut(s) sera(seront) renvoyé(s)
                    {
                        indexAir+=currentMeasurements.value;
                        nbrMeasurementUsed++;
                    }
                }
            }
        }
        if (nbrMeasurementUsed!=0)
        {
            indexAir=indexAir/nbrMeasurementUsed;
        }
        
    } 
    else
    {
        /*for(list<Sensor>::iterator currentSensor = sensorsInArea->begin(); currentSensor != sensorsInArea->end(); currentSensor++)
        {
            list <Measurement>* currentMeasurementList = currentSensor.getMeasurements();

            for(list<Measurement>::iterator currentMeasurements = currentMeasurementList->begin(); currentMeasurements != currentMeasurementList->end(); currentMeasurements++)
            {
                if(currentMeasurements.date==begin)
                {
                    indexAir+=currentMeasurements.value;
                }
            }
        }
        indexAir=indexAir/sensorsInArea->size();
        */
    }
    if (indexAir<=27)
    {
        airQuality="Bon";
    }
    else if (28<=indexAir<=49)
    {
        airQuality="Médiocre";
    }
    else if (50<=indexAir)
    {
        airQuality="Mauvais";
    }





    return airQuality;

}
//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
