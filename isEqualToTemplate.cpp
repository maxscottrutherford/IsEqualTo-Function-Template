//Max Rutherford, W1887484
//This program tests a template function, isEqualTo, on a variety
//of different data types, including int, string, Date, etc.
//This program uses modified header files, Date & Complex 
//from previous assignments
#include <iostream> //for cout
#include <string> //for string testing
#include "Date.h" //include Date header file
#include "Complex.h" //include Complex header file

using namespace std;


//Function Template isEqualTo compares two values of any type for equality
template<typename T>
bool isEqualTo(
	const T& value1,
	const T& value2) {
	if (value1 == value2) //checks equality of any value type
		return true;
	else
		return false;
}

//Function Template printEqualResult helps print out results of isEqualTo
template<typename T>
void printEqualResult(
	const T& eq1,
	const T& eq2,
	const string& typeName) { //string typeName for displaying each test
	cout << typeName << ": ";
	if (isEqualTo(eq1, eq2))
		cout << eq1 << " and " << eq2 << " are equal." << endl;
	else
		cout << eq1 << " and " << eq2 << " are \"NOT\" equal." << endl;

}

//main Function to test isEqualTo
int main() {
	//Creating integer operants to compare
	int t0{ 1 }, t1{ 1 };
	int t2{ 2 }, t3{ 4 };
	int t4{ -1 }, t5{ 1 };
	int t6{ -1 }, t7{ -1 };

	//Integer Testing
	cout << "*** Integer Tests ***" << endl;
	printEqualResult(t0, t1, "Integers");
	printEqualResult(t2, t3, "Integers");
	printEqualResult(t4, t5, "Integers");
	printEqualResult(t6, t7, "Integers");
	cout << endl;

	//Creating char operants to compare
	char c0{ 'a' }, c1{ 'a' },
		c2{ 'a' }, c3{ 'c' },
		c4{ 'c' }, c5{ 'a' },
		c6{ 'c' }, c7{ 'c' };

	//Character Testing
	cout << "*** Chars Tests ***" << endl;
	printEqualResult(c0, c1, "Characters");
	printEqualResult(c2, c3, "Characters");
	printEqualResult(c4, c5, "Characters");
	printEqualResult(c6, c7, "Characters");
	cout << endl;

	//Creating double operants to compare
	double d0{ 2.2 }, d1{ 2.2 },
		d2{ 2.2 }, d3{ 2.3 },
		d4{ -2.2 }, d5{ 2.2 },
		d6{ -2.2 }, d7{ -2.2 };

	//Double Testing
	cout << "*** Double Tests ***" << endl;
	printEqualResult(d0, d1, "Double numbers");
	printEqualResult(d2, d3, "Double numbers");
	printEqualResult(d4, d5, "Double numbers");
	printEqualResult(d5, d7, "Double numbers");
	cout << endl;

	//Creating complex operants to compare
	Complex cm0(10, 5), cm1(10, 5),
			cm2(10, 5), cm3(10, 54),
			cm4(10, -5), cm5(10, 5),
			cm6(-10, -5), cm7(-10, -5);

	//Complex Testing
	cout << "*** Complex Tests ***" << endl;
	printEqualResult(cm0, cm1, "Class objects");
	printEqualResult(cm2, cm3, "Class objects");
	printEqualResult(cm4, cm5, "Class objects");
	printEqualResult(cm6, cm7, "Class objects");
	cout << endl;

	//Creating string operants to compare
	string s0("abcdefg"), s1("abcdefg"),
		   s2("abcdefg"), s3("abcdefh"),
		   s4("-abcdefg"), s5("abcdefg"),
		   s6("-abcdefg"), s7("-abcdefg");

	//String Testing
	cout << "*** string Tests ***" << endl;
	printEqualResult(s0, s1, "String objects");
	printEqualResult(s2, s3, "String objects");
	printEqualResult(s4, s5, "String objects");
	printEqualResult(s6, s7, "String objects");
	cout << endl;

	//Creating date operants to compare
	Date dt0(2, 31, 2017), dt1(2, 31, 2017),
		dt2(2, 13, 2017), dt3(2, 14, 2017),
		dt4(-2, 13, 2017), dt5(2, 13, 2017),
		dt6(-2, 13, 2017), dt7(-2, 13, 2017);

	//Date Testing
	cout << "*** Date Tests ***" << endl;
	printEqualResult(dt0, dt1, "Date objects");
	printEqualResult(dt2, dt3, "Date objects");
	printEqualResult(dt4, dt5, "Date objects");
	printEqualResult(dt6, dt7, "Date objects");
	cout << endl;

	return 0;
}