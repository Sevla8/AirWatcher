#ifndef Date_H
#define Date_H

#include <string>
#include <iostream>

using namespace std;

class Date {
	public:
	    Date(int, int, int, int, int, int);
	    Date();
	    virtual ~Date();
		bool operator<(const Date&) const;
	friend std::istream& operator>>(std::istream&, Date&);
	friend ostream& operator<<(std::ostream&, const Date&);
	protected:
	private:
		int year;
		int month;
		int day;
		int hour;
		int minute;
		int second;
};

#endif
