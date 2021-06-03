/*************************************************************************
						   UserInterface  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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
	cout<<"======== Welcome to Airwatcher ========"<<endl;
	int choice =0 ;
	

	while (choice !=3)
	{
		cout<<" === Choose one of the options below. === "<<endl;
		cout<<"1 : Analyse air quality in a circular area"<<endl;
		cout<<"2 : Ranking sensors in function of their similarity"<<endl;
		cout<<"3 : Exit"<<endl;
        while(!(cin>>choice)){
            cout<< "\t => Error : The input must be an integer "<<endl;
            cin.clear();
            cin.ignore();
        }

        switch(choice)
        {
            case (1) :
            {
                displayAirQualityArea();
                break;
            }
            case (2) :
            {
                displayRankingSensorsSimilarity();
                break;
            }
            case (3) :
            {
                cout << "======== Goodbye ========" << endl;
			    break;
            }
            default :
            {
                cout << "\t => Error : We don't have this functionality, please try again." << endl;
                break;
            }

        }

	}
	return 0;
}  //----- End of displayMenu

int UserInterface::displayAirQualityArea()
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
    bool isInterval = false;
    map<string, float> result;
    Date begin;
    Date end;

    cout << "Choose the area where we are going to calculate the air quality." << endl;
    cout<<"Choose the longitude. (44 : 47.6) : " ;
    while(!(cin>>longitude)){
        cout<<"MUST BE A NUMBER "<< endl;
        cin.clear();
        cin.ignore();
        cout<<"Choose the longitude. (44 : 47.6) : " ;
    }
    cout<<endl;
    cout<<"Choose the latitude. (-1 : 5.3)"<<endl;
    
    while(!(cin>>latitude)){
        cout<<"MUST BE A NUMBER "<< endl;
        cin.clear();
        cin.ignore();        
        cout<<"Choose the latitude. (-1 : 5.3) : ";
    }
    cout<<endl;
    cout<<"Choose the radius."<<endl;
    while(!(cin>>radius)){
        cout<<"MUST BE A NUMBER "<< endl;
        cin.clear();
        cin.ignore();        
        cout<<"Choose the radius : ";
    }
    cout<<endl;

    cout<<"Do you want to calculate at a special day (d) or on a period (p)"<<endl;
    choice = doubleChoiceInput('d', 'p');

    if(choice == 'd') {
        begin = chooseDate(isInterval);
        result = controller.analyseAirQualityInCircularArea(longitude, latitude, radius, begin, end, false);
    } else if (choice == 'p') {
        isInterval = true;        
        cout<<"Choose the begin date : "<<endl;
        begin = chooseDate(isInterval);
        cout<<"Choose the end date : "<<endl;
        end = chooseDate(isInterval);
        
        result = controller.analyseAirQualityInCircularArea(longitude, latitude, radius, begin, end, true);
        cout << "________________________________________" << endl;
    }

    if(result.begin()->first == "NO DATA"){
        cout << endl <<"There is no data for these conditions" << endl << endl;
    } else {
        cout << endl <<  "Air Quality : " << endl;
        for(const auto &element: result) {
            cout << element.first << " : " << element.second << endl;
        }
        cout << "=== Air Quality Level : " << controller.CalculateAirQualityValue(result) << " ===" << endl << endl;
    }

	return 0;
}  //----- End of displayAirQualityArea

int UserInterface::displayRankingSensorsSimilarity()
{
	string sensorId;
	int year;
	int month;
	int hour;
	int day;
	int minutes;
	int seconds;
    int nthSensor;

	cout << "Choose the number of the reference sensor. (0 : 99)" << endl;
    while(!(cin>>nthSensor)){
        cout<<"MUST BE A NUMBER "<< endl;
        cin.clear();
        cin.ignore();  
    }
    sensorId = ("Sensor" + to_string(nthSensor)); 

	cout << "Choose the begin date : " << endl;

	Date begin = chooseDate(true);

	cout << "Choose the end date : " << endl;

	Date end = chooseDate(true);

    if(begin>=end) {
        cout << "End date must be after begin date." << endl << endl;
    } else {
        cout << "Sensors ranked in function of similarity with "<< sensorId << " : " << endl;
        for (const auto& sensor : controller.rankingSensorsSimilarity(sensorId, begin, end)) {
            cout << sensor.GetId() << endl;
        }
    }
	return 0;
}  //----- End of displayRankingSensorsSimilarity

char UserInterface::doubleChoiceInput(char a, char b) const
{
    char choice;
    cout << "Choose an option: " << a << " / " << b << endl;
    while (choice != a || choice != b){
        cin >> choice;
        if(choice == a || choice == b){
            break;
        } else {
            cout << "\t => Error : Please choose a valid option. [" << a <<" / "<< b <<']' << endl;;
        }
    }
    return choice;

} //----- End of doubleChoiceInput

//------------------------------------------------- Operators overloading

//-------------------------------------------- constructors - destructor
Date UserInterface::chooseDate(bool isInterval)
{
    int day, month, year, hour, minute, second;
    Date date;
    cout<<"Choose the year : "<<endl;
        cout<<"note : Our dataset only dispose of data concerning  2019"<<endl;
        while(!(cin>>year)){
            cout<<"MUST BE AN INTEGER "<< endl;
            cin.clear();
            cin.ignore();        
            cout<<"Choose the year : ";
        }
        cout<<endl;

        cout<<"Choose the month : (1-12)"<<endl;
        while(!(cin>>month) || month < 1 || month > 12){
            cout<<"MUST BE AN INTEGER BETWEEN 1-12"<< endl;
            cin.clear();
            cin.ignore();        
            cout<<"Choose the month : ";
        }        
        cout<<endl;
        cout<<"Choose the day : (1-31)"<<endl;
        while(!(cin>>day) || day < 1 || day > 31){
            cout<<"MUST BE AN INTEGER BETWEEN 1-31"<< endl;
            cin.clear();
            cin.ignore();        
            cout<<"Choose the day : ";
        }        
        cout<<endl;
        if(!isInterval)
        {
            date = Date(year, month, day);
        }
        else
        {
            cout<<"Choose the hour : ";
            while(!(cin>>hour)){
                cout<<"MUST BE AN INTEGER "<< endl;
                cin.clear();
                cin.ignore();        
                cout<<"Choose the hour : ";
            }
            cout<<endl;

            cout<<"Choose the minute : ";
            while(!(cin>>minute)){
                cout<<"MUST BE AN INTEGER "<< endl;
                cin.clear();
                cin.ignore();        
                cout<<"Choose the minute : ";
            }   
            cout<<endl;
            cout<<"Choose the second : ";
            while(!(cin>>second)){
                cout<<"MUST BE AN INTEGER "<< endl;
                cin.clear();
                cin.ignore();        
                cout<<"Choose the second : ";
            }
            cout<<endl;   
            date = Date(year, month, day, hour, minute, second);
        }
        
        return date;
}

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