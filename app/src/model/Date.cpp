/*************************************************************************
						   Date  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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

//----------------------------------------------------- Public Methods
bool Date::equalsDay(const Date& d) const
// Algorithm :
//
{
	return year == d.year && month == d.month && day == d.day;
} //----- End of equalsDay

//------------------------------------------------- Operators overloading

std::istream& operator>>(std::istream& is, Date& d)
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
{
	return os << d.year << "-" << d.month << "-" <<
		d.day << " " << d.hour << ":" << d.minute <<
		":" << d.second;
} //----- End of operator <<

bool Date::operator<(const Date& d) const
{
	return (year < d.year && month < d.month && day < d.day && hour < d.hour && 
			minute < d.minute && second < d.second);
} //----- End of operator <

bool Date::operator==(const Date& d) const
{
	return (year == d.year && month == d.month && day == d.day &&
		hour == d.hour && minute == d.minute && second == d.second);
} //----- End of operator ==

bool Date::operator<=(const Date& d) const
{
	return *this < d || *this == d;
} //----- End of operator <=

bool Date::operator>=(const Date& d) const
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
{
} //----- End of Date (parameters constructor)

