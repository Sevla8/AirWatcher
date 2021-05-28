/*************************************************************************
                           Controller  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <Controller> (file Controller.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

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

Model& Controller::getModel() 
//Algorithm :
//
{
	return model;
}  //----- End of getModel

string Controller::analyseAirQualityInCircularArea(float latitude, float longitude, float radius, const Date& begin, const Date& end) 
//Algorithm :
//
{
	//define airQuality
	string airQuality="";
	float indexAir = 0.0;
	float currentLatitude = 0.0;
	float currentLongitude = 0.0;
	vector<Sensor> sensorsInArea;
	float conversionRadius = radius; //find the relation
	Date defaultDate = Date();
	int nbrMeasurementUsed = 0;

	//search all sensors which are in the area
	for (const auto &currentSensor : model.sensors) {
		currentLatitude = currentSensor.latitude;
		currentLongitude = currentSensor.longitude;
		float distance = sqrt(pow(currentLatitude - latitude, 2) + pow(currentLongitude - longitude, 2));
		if (distance <= conversionRadius) {
			sensorsInArea.push_back(currentSensor);
		}
	}

	if(sensorsInArea.empty()) {
		airQuality = "No sensors in this area";
		} else {
		//to make the difference between time interval and ponctual measurement
			if (end == defaultDate)	{
				for (const auto &currentSensor : sensorsInArea) {
					vector<Measurement> currentMeasurementList = currentSensor.measurements;

					for (const auto &currentMeasurement : currentMeasurementList) {
						if (currentMeasurement.date == begin) { // TODO : gérer le probleme ici, on ne renvoie aucuns capteurs sinon...
							if (currentMeasurement.attribute.id == "PM10") { //déterminer quel(s) type d'attribut(s) sera(seront) utilisé(s)
								indexAir += currentMeasurement.value;  // TODO: gérer le problème pour voir + de mesures.
								++nbrMeasurementUsed;
							}
						}
					}
				}
				if (nbrMeasurementUsed != 0) {
					indexAir = indexAir / nbrMeasurementUsed;
				}
			}
			else {
				for (const auto &currentSensor : sensorsInArea) {
					vector <Measurement> currentMeasurementList = currentSensor.measurements;
					for (const auto &currentMeasurement : currentMeasurementList) {
						if (begin <= currentMeasurement.date && currentMeasurement.date <= end) {
							if (currentMeasurement.attribute.id=="PM10") { //déterminer quel(s) type d'attribut(s) sera(seront) utilisé(s)
								indexAir += currentMeasurement.value;
								++nbrMeasurementUsed;
							}
						}
					}
				}
				indexAir=indexAir/nbrMeasurementUsed;
			}
		if (indexAir <= 27) {
			airQuality = "Bon";
		}
		else if (28 <= indexAir && indexAir <= 49) {
			airQuality = "Médiocre";
		}
		else if (50 <= indexAir) {
			airQuality = "Mauvais";
		}
	}
	return airQuality;
} //----- End of analyseAirQualityInCircularArea

//------------------------------------------------- Operators overloadinf
ostream& operator<<(std::ostream& os, const Controller& c) 
// Algorithm :
//
{
	return os << c.model;
} //----- End of operator <<

//-------------------------------------------- constructors - destructor
Controller::Controller() 
// Algorithm :
//
{

} //----- End of Controller

Controller::~Controller() 
// Algorithm :
//
{

} //----- End of ~Controller

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods

