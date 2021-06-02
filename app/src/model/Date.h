/*************************************************************************
						   Date  -  description
							 -------------------
	beginning				: $07/05/2021$
	copyright			: (C) $2021$ by $B3204 and B3025 $
	e-mail			   : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
							brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Date> (file Date.h) ----------------
#ifndef Date_H
#define Date_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <iostream>

using namespace std;

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Date>
//
//
//------------------------------------------------------------------------

class Date {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods

		//------------------------------------------------- Operators overloading
		bool operator<(const Date&) const;
		// How to use :
		//
		// Precondition :
		//

		bool operator==(const Date&) const;
		// How to use :
		//
		// Precondition :
		//

		bool operator<=(const Date&) const;
		// How to use :
		//
		// Precondition :
		//

		bool operator>=(const Date&) const;
		// How to use :
		//
		// Precondition :
		//

		friend std::istream& operator>>(std::istream&, Date&);
		// How to use :
		//
		// Precondition :
		//

		friend ostream& operator<<(std::ostream&, const Date&);
		// How to use :
		//
		// Precondition :
		//

		//-------------------------------------------- Constructors - destructor
		Date(int, int, int, int, int, int);
		// How to use (copy constructor): Instantiate and initialize a new instace of Date having the attributes affected by the
		//								  corresponding parameters
		// Precondition :
		//

		Date();
		// How to use : Initialize a new date having all the values as the default Date : 01-01-1970 00:00:00
		//
		// Precondition :
		//

	//------------------------------------------------------------------ PROTECTED
	protected:
		//----------------------------------------------------- Protected Methods

		//----------------------------------------------------- Protected Attributes

	//------------------------------------------------------------------ PRIVATE
	private:
		//----------------------------------------------------- Private Methods

		//----------------------------------------------------- Private Attributes
		int year;
		int month;
		int day;
		int hour;
		int minute;
		int second;
};

//-------------------------------- Other definitions depending on <Date>

#endif // Date_H
