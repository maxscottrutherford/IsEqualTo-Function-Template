// Date.cpp
// Date class member-function definitions.
#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h" // include Date class definition
using namespace std;

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date( int mn, int dy, int yr )
{
    if (mn > 0 && mn <= monthsPerYear) // validate the month
        month = mn;
    else
        month = 1;

   year = yr; // could validate yr
   day = checkDay( dy ); // validate the day
} // end Date constructor

bool Date::operator==(const Date& otherDay) const
{
    if (day == otherDay.day && month == otherDay.month && year == otherDay.year)
        return true;
    else
        return false;
}

// print Date object in form month/day/year
void Date::print() const
{
   cout << month << '/' << day << '/' << year; 
} // end function print

// output Date object to show when its destructor is called
Date::~Date()
{ 

} // end ~Date destructor

// utility function to confirm proper day value based on 
// month and year; handles leap years, too
unsigned int Date::checkDay( int testDay ) const
{
   static const array< int, monthsPerYear + 1 > daysPerMonth = 
      { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   // determine whether testDay is valid for specified month
   if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
      return testDay;

   // February 29 check for leap year 
   if ( month == 2 && testDay == 29 && ( year % 400 == 0 || 
      ( year % 4 == 0 && year % 100 != 0 ) ) )
      return testDay;

   return 1;
} // end function checkDay

std::ostream& operator<<(std::ostream& output, const Date& d)
{
    static string monthNames[13]{ "", "January", "February", "March", "April",
    "May", "June", "July", "August", "September", "October", "November", "December" };
    output << monthNames[d.month] << " " << d.day << ", " << d.year;
    return output;
}
