/*************************************************************************
						   Date  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Implementation of <Date> (file Date.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
#include <sstream>

using namespace std;

//------------------------------------------------------ Include of local files
#include "Date.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods

//------------------------------------------------- Operators overloading

std::istream& operator>>(std::istream& is, Date& d)
// Algorithm :
//
{
	string tmp;
	stringstream ss;
	getline(is, tmp, '-');
	ss = stringstream(tmp);
	ss >> d.year;
	getline(is, tmp, '-');
	ss = stringstream(tmp);
	ss >> d.month;
	getline(is, tmp, ' ');
	ss = stringstream(tmp);
	ss >> d.day;
	getline(is, tmp, ':');
	ss = stringstream(tmp);
	ss >> d.hour;
	getline(is, tmp, ':');
	ss = stringstream(tmp);
	ss >> d.minute;
	getline(is, tmp, ';');
	ss = stringstream(tmp);
	ss >> d.second;
	return is;
} //----- End of operator >>

ostream& operator<<(std::ostream& os, const Date& d)
// Algorithm :
//
{
	return os << d.year << "-" << d.month << "-" <<
		d.day << " " << d.hour << ":" << d.minute <<
		":" << d.second;
} //----- End of operator <<

bool Date::operator<(const Date& d) const
// Algorithm :
//
{
	if (year < d.year) return true;
	if (year > d.year) return false;
	if (month < d.month) return true;
	if (month > d.month) return false;
	if (day < d.day) return true;
	if (day > d.day) return false;
	if (hour < d.hour) return true;
	if (hour > d.hour) return false;
	if (minute < d.minute) return true;
	if (minute > d.minute) return false;
	if (second < d.second) return true;
	if (second > d.second) return false;
	return false;
} //----- End of operator <

bool Date::operator==(const Date& d) const
// Algorithm :
//
{
	return year == d.year && month == d.month && day == d.day &&
		hour == d.hour && minute == d.minute && second == d.second;
} //----- End of operator ==

bool Date::operator<=(const Date& d) const
// Algorithm :
//
{
	return *this < d || *this == d;
} //----- End of operator <=

bool Date::operator>=(const Date& d) const
// Algorithm :
//
{
	return !(*this < d);
}

//-------------------------------------------- constructors - destructor

Date::Date(int theYear, int theMonth, int theDay, int theHour, int theMinute, int theSecond) :
	year(theYear),
	month(theMonth),
	day(theDay),
	hour(theHour),
	minute(theMinute),
	second(theSecond)
// Algorithm :
//
{
} //----- End of Date (parameters constructor)

Date::Date() :
	year(1970),
	month(1),
	day(1),
	hour(0),
	minute(0),
	second(0)
// Algorithm :
//
{
} //----- End of Date

//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
