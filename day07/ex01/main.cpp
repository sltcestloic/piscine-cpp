#include "iter.hpp"
#include <iostream>


int main() {
	std::string array_str[4] = {"alo", "cc", "ca va", "bjr"};
	int array_int[4] = {1, 2, 3, 4};

	iter(array_str, 4, &print_str);
	iter(array_int, 4, &print_int);
	iter(array_int, 4, &print_anything);
}