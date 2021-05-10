/*************************************************************************
                           Date  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface of <Date> (file Date.h) ----------------
#if ! defined ( Date_H )
#define Date_H

//--------------------------------------------------- Used Interfaces
#include <string>
//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Date>
//
//
//------------------------------------------------------------------------

class Date
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Public methods
    // type Method ( parameters list );
    // How to use :
    //
    // Precondition :
    //

int getYear();
// How to use : return a copy of the attribute year
//
int getMonth();
// How to use : return a copy of the attribute month
//
int getDay();
// How to use : return a copy of the attribute day
//
int getHour();
// How to use : return a copy of the attribute hour
//
int getMinutes();
// How to use : return a copy of the attribute minutes
//
int getSeconds();
// How to use : return a copy of the attribute seconds
//

//-------------------------------------------- Constructors - destructor
    Date ( const Date & aDate );
    // How to use (copy constructor): Instantiate and initialize a new instace of Date having the same attributes as aDate
    //
    // Precondition :
    //

    Date(int year, int month, int day, int hour, int minutes, int seconds);
    // How to use (copy constructor): Instantiate and initialize a new instace of Date having the attributes affected by the
    //                                  corresponding parameters


    Date ( );
    // How to use : Initialize a new date having all the values as the default Date : 01-01-1970 00:00:00
    //
    // Precondition :
    //

    virtual ~Date ( );
    // How to use :
    //
    // Precondition :
    //

//------------------------------------------------------------------ PROTECTED

friend std::istream& operator>>(std::istream&, Date&);
bool operator <= (Date aDate);

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

