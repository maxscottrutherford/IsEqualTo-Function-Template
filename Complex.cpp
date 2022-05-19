// Complex.cpp
// Complex class member-function definitions.
#include <iostream>
#include "Complex.h" // Complex class definition
using namespace std;

// Constructor
Complex::Complex( double realPart, double imaginaryPart ) 
   : real( realPart ),
   imaginary( imaginaryPart ) 
{ 
   // empty body
} // end Complex constructor

// addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
   return Complex( real + operand2.real, 
      imaginary + operand2.imaginary );
} // end function operator+

// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
   return Complex( real - operand2.real, 
      imaginary - operand2.imaginary );
} // end function operator-

bool Complex::operator==(const Complex& other) const
{
    if (real == other.real && imaginary == other.imaginary)
        return true;
    else
        return false;
}

// display a Complex object in the form: (a, b)
void Complex::print() const
{ 
   cout << '(' << real << ", " << imaginary << ')';
} // end function print

std::ostream& operator<<(std::ostream& output, const Complex& cn)
{
    if (cn.imaginary >= 0)
        output << cn.real << " + " << cn.imaginary << "i";
    else
        output << cn.real << cn.imaginary << "i";
    return output;
}
