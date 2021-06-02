/*************************************************************************
						   Date  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Date> (file Date.h) ----------------
#ifndef Date_H
#define Date_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <iostream>

using namespace std;

//------------------------------------------------------------------------
// Role of <Date>
//
//	Simple class representing dates using integers for year, month, day, hours, minutes, seconds
//	and  providing simple comparisons between Dates
//------------------------------------------------------------------------

class Date {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		bool equalsDay(const Date&) const;
		// How to use :
		//
		// Precondition :
		//
		//------------------------------------------------- Operators overloading
		bool operator<(const Date& aDate) const;
		// How to use : retruns true if aDate is less recent than the calling Date
		//
		// Precondition : aDate is not null
		//

		bool operator==(const Date& aDate) const;
		// How to use : retruns true if aDate is exactly the same as the calling Date
		// 
		// Precondition : aDate is not null
		//


		bool operator<=(const Date& aDate) const;
		// How to use : retruns true if aDate is exactly the same or less recent than the calling Date
		//
		// Precondition : aDate is not null
		//

		bool operator>=(const Date& aDate) const;
		// How to use : retruns true if aDate is exactly the same or more recent than the calling Date
		//
		// Precondition : aDate is not null
		//

		friend std::istream& operator>>(std::istream& is, Date& aDate);


		friend ostream& operator<<(std::ostream& is, const Date& aDate);


		//-------------------------------------------- Constructors - destructor
		Date(int year = 1970, int month = 1, int day = 1, int hours = 0, int minutes = 0, int seconds=0);
		// How to use : Instantiate and initialize a new instace of Date having the attributes affected by the
		// corresponding parameters. Initialized by default as 01/01/1970 00:00:00


	//------------------------------------------------------------------ PRIVATE
	private:

		//----------------------------------------------------- Private Attributes
		int year;
		int month;
		int day;
		int hour;
		int minute;
		int second;
};


#endif // Date_H
