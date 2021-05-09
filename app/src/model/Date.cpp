/*************************************************************************
                           Date  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <Date> (file Date.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Date.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Date::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method

std::istream& operator>>(std::istream& is, Date& date) {
	char dash, column;
	return is >> date.year >> dash >> date.month >> dash >>
		date.day >> date.hour >> column >> date.minute >>
		column >> date.second;
}

//-------------------------------------------- constructors - destructor
Date::Date ( const Date & aDate )
{
#ifdef MAP
    cout << "Calling copy constructor of <Date>" << endl;
#endif
    year = aDate.year;
    month = aDate.month;
    day = aDate.day;
    hour = aDate.hour;
    minute = aDate.minute;
    second = aDate.second;
} //----- End of Date (copy constructor)

Date::Date ( int theYear, int theMonth, int theDay, int theHour, int theMinute, int theSecond )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Date>" << endl;
#endif
    year = theYear;
    month = theMonth;
    day = theDay;
    hour = theHour;
    minute = theMinute;
    second = theSecond;
} //----- End of Date (parameters constructor)

Date::Date ( )
{
#ifdef MAP
    cout << "Calling constructor of <Date>" << endl;
#endif
    year = 1970;
    month = 1;
    year = 1;
    hour = 0;
    minute = 0;
    second = 0;
} //----- End of Date


Date::~Date ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <Date>" << endl;
#endif
} //----- End of ~Date


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
