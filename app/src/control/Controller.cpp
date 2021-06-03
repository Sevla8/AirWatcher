/*************************************************************************
						   Controller  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods

const Model& Controller::getModel()
{
	return model;
}  //----- End of getModel

void Controller::setModel(const Model& m) {
	model = m;
}

map<string, float> Controller::analyseAirQualityInCircularArea(float latitude, float longitude, float radius, const Date& begin, const Date& end, bool isPeriod)
{ 	//	O(S+N)
	//define airQuality
	string airQuality="";
	float indexAir = 0.0;
	float currentLatitude = 0.0;
	float currentLongitude = 0.0;
	vector<Sensor> sensorsInArea;
	float conversionRadius = radius; //find the relation
	int nbrMeasurementUsed = 0;

	//search all sensors which are in the area
	for (const auto &currentSensor : model.GetSensors()) {
		currentLatitude = currentSensor.GetLatitude();
		currentLongitude = currentSensor.GetLongitude();
		float distance = sqrt(pow(currentLatitude - latitude, 2) + pow(currentLongitude - longitude, 2));

		if (distance <= conversionRadius) {
			sensorsInArea.push_back(currentSensor); // O(1)
		}
	} // O(S)

	map<string, float> result;
	vector <Measurement> currentMeasurementList;

	//to make the difference between time interval and ponctual measurement
	if (!isPeriod)	{
		for (const auto &currentSensor : sensorsInArea) { // O(S)
			for (const auto &currentMeasurement : currentSensor.GetMeasurements()) { // O(N/S)
				if (currentMeasurement.GetDate().EqualsDay(begin)) {
					currentMeasurementList.push_back(currentMeasurement); //O(1)
				}
			}
		} // O(N)
	}
	else {
		for (const auto &currentSensor : sensorsInArea) {
			for (const auto &currentMeasurement : currentSensor.GetMeasurements()) {
				if (begin <= currentMeasurement.GetDate() && currentMeasurement.GetDate() <= end) {
					currentMeasurementList.push_back(currentMeasurement);
				}
			}
		}
	} // O(N)

	if(currentMeasurementList.empty()){
		result.insert({"NO DATA", 0.0});
	} else {
		result = CalculateMeans(currentMeasurementList); // O(N)
	}
	return result;
} //----- End of analyseAirQualityInCircularArea

vector<Sensor> Controller::rankingSensorsSimilarity(const string& sensorId, const Date& begin, const Date& end)
{ 	// O(Nlog(N))
	multimap<double, Sensor> map;
	Sensor target = model.FindSensor(sensorId);
	set<Sensor> sensors = model.GetSensors();
	vector<double> targetMean = target.CalculateMean(begin, end);
	for (const auto& sensor : sensors) {
		vector<double> mean = sensor.CalculateMean(begin, end); // O (N/S) in avg
		double difference = CompareMeans(targetMean, mean);	// O (1)
		map.insert({difference, sensor});	// O (Nlog(size+N) )
	} // O (S(N/S + Nlog(N)) -> O(Nlog(N))

	vector<Sensor> result;
	for (const auto& entry : map) {
		result.push_back(entry.second);
	}
	return result;
}//----- End of rankingSensorsSimilarity

double Controller::CompareMeans(const vector<double>& mean1, const vector<double>& mean2) const
{
	// Knowing the max prevents SegmentationFaults
	int maxIndex = max(mean1.size(), mean1.size());

	double diff = 0.0;

	for(int i=0; i< maxIndex;i++){
		diff += abs(mean1[i] - mean2[i]);
	}
	return diff;
}//----- End of CompareMeans


map<string, float> Controller::CalculateMeans(const vector<Measurement>& measurements) const
{ // O(N)
	double sumO3 = 0;
	double sumSO2 = 0;
	double sumNO2 = 0;
	double sumPM10 = 0;
	int numberO3 = 0;
	int numberSO2 = 0;
	int numberNO2 = 0;
	int numberPM10 = 0;
	for (const auto& measurement : measurements) {
		if (measurement.GetAttribute().GetId() == "O3") {
			sumO3 += measurement.GetValue();
			numberO3++;
		}
		else if (measurement.GetAttribute().GetId() == "SO2") {
			sumSO2 += measurement.GetValue();
			numberSO2++;
		}
		else if (measurement.GetAttribute().GetId() == "NO2") {
			sumNO2 += measurement.GetValue();
			numberNO2++;
		}
		else if (measurement.GetAttribute().GetId() == "PM10") {
			sumPM10 += measurement.GetValue();
			numberPM10++;
		}
	}
    map<string, float> result;
	result.insert({"O3", sumO3 / numberO3});
	result.insert({"SO2", sumSO2 / numberSO2});
	result.insert({"NO2", sumNO2 / numberNO2});
	result.insert({"PM10", sumPM10 / numberPM10});
	return result;
}//----- End of calculateMeans

string Controller::CalculateAirQualityValue(const map<string, float>& mapMeans) const
{
	float o3;
	float so2;
	float no2;
	float pm10;

	string airQuality;

	for(const auto &value: mapMeans){
		if(value.first == "O3") o3 = value.second;
		if(value.first == "SO2") so2 = value.second;
		if(value.first == "NO2") no2 = value.second;
		if(value.first == "PM10") pm10 = value.second;
	}
	if(o3 > 240 || so2 > 500 || no2 > 400 || pm10 > 80){
		airQuality = "Extremely bad";
	} else if (o3 > 180 || so2 > 300 || no2 > 200 || pm10 > 50) {
		airQuality = "Bad";
	} else if (o3 > 130 || so2 > 200 || no2 > 135 || pm10 > 35) {
		airQuality = "Poor";
	} else if (o3 > 105 || so2 > 160 || no2 > 110 || pm10 > 28) {
		airQuality = "Moderate";
	} else if (o3 > 55 || so2 > 80 || no2 > 55 || pm10 > 14) {
		airQuality = "Good";
	} else {
		airQuality = "Very good";
	}
	return airQuality;
} //----- End of CalculateAirQualityValue

//------------------------------------------------- Operators overloading

ostream& operator<<(std::ostream& os, const Controller& c)
{
	return os << c.model;
} //----- End of operator <<

//-------------------------------------------- Constructors - destructor
Controller::Controller()
{
} //----- End of Controller

Controller::~Controller()
{
} //----- End of ~Controller

