/*************************************************************************
						   UserInterface  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <UserInterface> (file UserInterface.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>

using namespace std;

//------------------------------------------------------ Include of local files
#include "UserInterface.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods

int UserInterface::displayMenu()
//Algorithm :
//
{
	cout<<"Welcome to Airwatcher."<<endl;
	int choix;
	char choice;

	while (choix !='3')
	{
		cout<<"You have to choose a possibility below."<<endl;
		cout<<"1: Analyse air quality in a circular area"<<endl;
		cout<<"2: Ranking sensors in function of them similarity"<<endl;
		cout<<"3: Exit"<<endl;

		cin>>choice;

		if(choice == '1') {
			displayAirQualityArea();
		} else if (choice == '2' ) {
			displayRankingSensorsSimilarity();
		} else if (choice == '3') {
			cout << "Goodbye" << endl;
			break;
		} else {
			cout << "Wrong input, please retry." << endl;
		}
	}
	return 0;
}  //----- End of displayMenu

int UserInterface::displayAirQualityArea()
//Algorithm :
//
{
	float longitude;
	float latitude;
	float radius;
	char choice;

	int year;
	int month;
	int hour;
	int day;
	int minutes;
	int seconds;
	string value;

	cout<<"Choose the longitude. (44 : 47.6)"<<endl;
	cin>>longitude;
	cout<<"Choose the latitude. (-1 : 5.3)"<<endl;
	cin>>latitude;
	cout<<"Choose the radius."<<endl;
	cin>>radius;



	cout<<"Choose the begin date : "<<endl;
	cout<<"Choose the year : (2019)"<<endl;
	cin >> year;
	cout<<"Choose the month : (1-12)"<<endl;
	cin >> month;
	cout<<"Choose the day : (1-31)"<<endl;
	cin >> day;
	cout<<"Choose the hour : "<<endl;
	cin >> hour;
	cout<<"Choose the minute : "<<endl;
	cin >> minutes;
	cout<<"Choose the secondes : "<<endl;
	cin >> seconds;

	Date begin = Date(year, month, day, hour, minutes, seconds);

	cout << "Do you want to set a ending time? (y/n)" << endl;
	cin>>choice;
	if(choice=='y'){
		cout<<"Choose the end date : "<<endl;
		cout<<"Choose the year : (2019)"<<endl;
		cin >> year;
		cout<<"Choose the month : (1-12)"<<endl;
		cin >> month;
		cout<<"Choose the day : (1-31)"<<endl;
		cin >> day;
		cout<<"Choose the hour : "<<endl;
		cin >> hour;
		cout<<"Choose the minute : "<<endl;
		cin >> minutes;
		cout<<"Choose the secondes : "<<endl;
		cin >> seconds;

		Date end = Date(year, month, day, hour, minutes, seconds);
		value = controller.analyseAirQualityInCircularArea(longitude, latitude, radius, begin, end);
	} else {
		cout << "Calculating at the beginning date only" << endl;
		Date end;
		value = controller.analyseAirQualityInCircularArea(longitude, latitude, radius, begin, end);
	}




	cout << "Air quality in this area: " + value << endl;

	return 0;
}  //----- End of displayAirQualityArea

int UserInterface::displayRankingSensorsSimilarity()
//Algorithm :
//
{
	string sensorId;
	int year;
	int month;
	int hour;
	int day;
	int minutes;
	int seconds;

	cout << "Choose the sensorId. (Sensor0 : Sensor99)" << endl;
	cin >> sensorId;

	cout << "Choose the begin date : " << endl;
	cout << "Choose the year : (2019)" << endl;
	cin >>  year;
	cout << "Choose the month : (1-12)" << endl;
	cin >>  month;
	cout << "Choose the day : (1-31)" << endl;
	cin >>  day;
	cout << "Choose the hour : " << endl;
	cin >>  hour;
	cout << "Choose the minute : " << endl;
	cin >>  minutes;
	cout << "Choose the secondes : " << endl;
	cin >>  seconds;
	Date begin = Date(year, month, day, hour, minutes, seconds);

	cout << "Choose the end date : " << endl;
	cout << "Choose the year : (2019)" << endl;
	cin >> year;
	cout << "Choose the month : (1-12)" << endl;
	cin >> month;
	cout << "Choose the day : (1-31)" << endl;
	cin >> day;
	cout << "Choose the hour : "<<endl;
	cin >> hour;
	cout << "Choose the minute : " << endl;
	cin >> minutes;
	cout << "Choose the secondes : " << endl;
	cin >> seconds;
	Date end = Date(year, month, day, hour, minutes, seconds);

	cout << "Sensors ranked in function of similarity with "<< sensorId << " : " << endl;
	for (const auto& sensor : controller.rankingSensorsSimilarity(sensorId, begin, end)) {
		cout << sensor.GetId() << endl;
	}

	return 0;
}
//------------------------------------------------- Operators overloadinf

//-------------------------------------------- constructors - destructor

UserInterface::UserInterface()
// Algorithm :
//
{
} //----- End of UserInterface

UserInterface::~UserInterface()
// Algorithm :
//
{
} //----- End of ~UserInterface