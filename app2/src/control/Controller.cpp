#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

#include "Controller.h"

Controller::Controller() {}

Controller::~Controller() {}

ostream& operator<<(std::ostream& os, const Controller& c) {
	return os << c.model;
}

Model Controller::getModel() const {
	return model;
}

string Controller::analyseAirQualityInCircularArea(float latitude, float longitude, float radius, const Date& begin, const Date& end) {
	//define airQuality
	string airQuality="";
	float indexAir = 0.0;
	float currentLatitude = 0.0;
	float currentLongitude = 0.0;
	list<Sensor> sensorsInArea;
	float conversionRadius = radius; //find the relation
	Date defaultDate = Date();
	int nbrMeasurementUsed = 0;

	//search all sensors which are in the area
	for (set<Sensor>::const_iterator currentSensor = model.sensors.begin(); currentSensor != model.sensors.end(); ++currentSensor) {
		currentLatitude = currentSensor->latitude;
		currentLongitude = currentSensor->longitude;
		float distance = sqrt(pow(currentLatitude - latitude, 2) + pow(currentLongitude - longitude, 2));
		if (distance <= conversionRadius) {
			sensorsInArea.push_back(*currentSensor);
		}
	}

	//to make the difference between time interval and ponctual measurement
	if (end == defaultDate)	{
		for (list<Sensor>::const_iterator currentSensor = sensorsInArea.begin(); currentSensor != sensorsInArea.end(); ++currentSensor) {
			list<Measurement> currentMeasurementList = currentSensor->measurements;

			for (list<Measurement>::const_iterator currentMeasurement = currentMeasurementList.begin(); currentMeasurement != currentMeasurementList.end(); ++currentMeasurement) {
				if (currentMeasurement->date == begin) {
					if (currentMeasurement->attribute.id == "PM10") { //déterminer quel(s) type d'attribut(s) sera(seront) utilisé(s)
						indexAir += currentMeasurement->value;
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
		for (list<Sensor>::const_iterator currentSensor = sensorsInArea.begin(); currentSensor != sensorsInArea.end(); ++currentSensor) {
			list <Measurement> currentMeasurementList = currentSensor->measurements;
			for (list<Measurement>::const_iterator currentMeasurement = currentMeasurementList.begin(); currentMeasurement != currentMeasurementList.end(); ++currentMeasurement) {
				if (begin <= currentMeasurement->date && currentMeasurement->date <= end) {
					if (currentMeasurement->attribute.id=="PM10") { //déterminer quel(s) type d'attribut(s) sera(seront) utilisé(s)
						indexAir += currentMeasurement->value;
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
	return airQuality;
}
