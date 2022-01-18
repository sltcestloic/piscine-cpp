#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
	std::vector<int> vector;
	std::vector<int>::iterator iterator;

	std::cout << "Vector content: " << std::endl;
	for (int i = 0; i < 547; i += 42) {
		vector.push_back(i);
		std::cout << i << std::endl;
	}
	std::cout << std::endl << std::endl;

	iterator = easyfind(vector, 546);
	
	if (iterator != vector.end())
		std::cout << "found !" << std::endl;
	else
		std::cout << "not found..." << std::endl;
}