#include "templates.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main() {

	cout << "=================== Testing with type int ===================" << endl << endl;

	int a_int = 42;
	int b_int = 689;

	cout << "a_int = " << a_int << endl << "b_int = " << b_int << endl << endl;

	cout << "min (a_int, b_int) = " << min(a_int, b_int) << endl;
	cout << "max (a_int, b_int) = " << max(a_int, b_int) << endl << endl;

	cout << "Swapping a_int and b_int..." << endl << endl;

	swap(a_int, b_int);

	cout << "a_int = " << a_int << endl << "b_int = " << b_int << endl << endl;

	cout << "=================== Testing with type string ===================" << endl << endl;

	std::string a_str = "hello world";
	std::string b_str = "42lyon";

	cout << "a_str = " << a_str << endl << "b_str = " << b_str << endl << endl;

	cout << "min (a_str, b_str) = " << min(a_str, b_str) << endl;
	cout << "max (a_str, b_str) = " << max(a_str, b_str) << endl << endl;

	cout << "Swapping a_str and b_str..." << endl << endl;

	swap(a_str, b_str);

	cout << "a_int = " << a_str << endl << "b_str = " << b_str << endl << endl;
}