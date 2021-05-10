#include <iostream>
#include <sstream>
using namespace std;

#include "Date.h"

std::istream& operator>>(std::istream& is, Date& d) {
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
}

ostream& operator<<(std::ostream& os, const Date& d) {
	return os << d.year << "-" << d.month << "-" <<
		d.day << " " << d.hour << ":" << d.minute <<
		":" << d.second;
}

bool Date::operator<(const Date& d) const {
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
}

bool Date::operator==(const Date& d) const {
	return year == d.year && month == d.month && day == d.day &&
		hour == d.hour && minute == d.minute && second == d.second;
}

bool Date::operator<=(const Date& d) const {
	return *this < d || *this == d;
}

Date::Date(int theYear, int theMonth, int theDay, int theHour, int theMinute, int theSecond) {
	year = theYear;
	month = theMonth;
	day = theDay;
	hour = theHour;
	minute = theMinute;
	second = theSecond;
}

Date::Date() {
	year = 1970;
	month = 1;
	year = 1;
	hour = 0;
	minute = 0;
	second = 0;
}