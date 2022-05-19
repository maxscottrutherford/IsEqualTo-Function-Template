// Complex.h
// Complex class definition.

//Comments:
//Added == operator and << operator, both overloaded, to class pulled from prev assignment
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex
{
	friend std::ostream& operator<<(std::ostream&, const Complex&); //overloaded output operator
public:
   explicit Complex( double = 0.0, double = 0.0 ); // constructor
   Complex operator+( const Complex & ) const; // addition
   Complex operator-( const Complex & ) const; // subtraction
   bool operator==(const Complex&) const; //overloaded equality operator
   void print() const; // output
private:
   double real; // real part
   double imaginary; // imaginary part
}; // end class Complex

#endif
