#include <iostream>
#include <limits.h>
#include <math.h>

using std::cout;
using std::endl;
using std::string;

void displayChar(double input) {
	cout << "char: ";
	if (input < CHAR_MIN || input > CHAR_MAX || isnan(input))
		cout << "impossible" << endl;
	else
		cout << "\'" << static_cast<unsigned char>(input) << "\'" << endl;
}

void displayInt(double input) {
	cout << "int: ";
	if (input < INT_MIN || input > INT_MAX || isinf(input) || isnan(input))
		cout << "impossible" << endl;
	else
		cout << static_cast<int>(input) << endl;
}

void displayFloat(double input) {
	cout << "float: ";
	if (isinf(input))
		cout << ((input < 0) ? "-" : "") << "inff" << endl;
	else if (isnan(input))
		cout << "nanf" << endl;
	else
		cout << static_cast<float>(input) << endl;
}

void displayDouble(double input) {
	cout << "double: ";
	if (isinf(input))
		cout << ((input < 0) ? "-" : "") << "inf" << endl;
	else if (isnan(input))
		cout << "nan" << endl;
	else
		cout << static_cast<double>(input) << endl;
}

int main(int ac, char **av) {
	if (ac != 2) {
		cout << "Usage: " << av[0] << " <string to cast>" << endl;
		return 1;
	}
	string input = av[1];
	double value;
	if (std::isprint(input.at(0)) && !std::isdigit(input.at(0)) && input.length() == 1)
		value = input.at(0);
	else
		value = atof(av[1]);
	displayChar(value);
	displayInt(value);
	displayFloat(value);
	displayDouble(value);
}