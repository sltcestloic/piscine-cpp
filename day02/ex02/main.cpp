#include "Fixed.hpp"

using std::cout;
using std::endl;

int main(void) {
	
	Fixed a(5.2f);
	Fixed b(10.3f);
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a is ";
	if (!(a > b))
		cout << "not ";
	cout << "greater than b" << endl;

	cout << "a is ";
	if (!(a < b))
		cout << "not ";
	cout << "less than b" << endl;

	cout << "a is ";
	if (!(a >= b))
		cout << "not ";
	cout << "greater or equal to b" << endl;

	cout << "a is ";
	if (!(a <= b))
		cout << "not ";
	cout << "less or equal to b" << endl;

	cout << "a is ";
	if (!(a == b))
		cout << "not ";
	cout << "equal to b" << endl;

	cout << "a is ";
	if (!(a != b))
		cout << "not ";
	cout << "not equal to b" << endl;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;

	cout << "a++ = " << a++ << endl;
	cout << "a is " << a << endl;
	cout << "a-- = " << a-- << endl;
	cout << "a is " << a << endl;
	cout << "++a = " << ++a << endl;
	cout << "a is " << a << endl;
	cout << "--a = " << --a << endl;
	cout << "a is " << a << endl;

	cout << "max(a, b) = " << Fixed::max(a, b) << endl;
	cout << "min(a, b) = " << Fixed::min(a, b) << endl;
}