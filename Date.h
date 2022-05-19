// Date.h 
// Date class definition; Member functions defined in Date.cpp
// 
// Comments:
//Pulled from previous assignment and modified to not output constructor or destructor data
//Added << operator and == operator, both overloaded
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date 
{
	friend std::ostream& operator<<(std::ostream&, const Date&);
public:
   static const unsigned int monthsPerYear = 12; // months in a year
   explicit Date( int = 1, int = 1, int = 1900 ); // default constructor
   bool operator==(const Date&) const; //overloaded equality operator
   void print() const; // print date in month/day/year format
   ~Date(); // provided to confirm destruction order
private:
   unsigned int month; // 1-12 (January-December)
   unsigned int day; // 1-31 based on month
   unsigned int year; // any year

   // utility function to check if day is proper for month and year
   unsigned int checkDay( int ) const; 
}; // end class Date

#endif
