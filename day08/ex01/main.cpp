#include "Span.hpp"

#include <iostream>

int main() {

	std::cout << "--- Basic test ---" << std::endl;

	Span sp = Span(6);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;

	std::cout << "--- Copy test ---" << std::endl;

	Span sp_copy(sp);
	sp.addNumber(256);

	std::cout << "sp: " << std::endl;
	sp.display();
	std::cout << std::endl;
	std::cout << "sp_copy: " << std::endl;
	sp_copy.display();
	std::cout << std::endl;

	std::cout << "--- Exception test ---" << std::endl;

	try {
		sp.addNumber(50);
	}
	catch(const std::exception& e)
	{
		std::cout << "Vector is full !" << std::endl;
	}
	

	std::cout << "--- Big vector test ---" << std::endl;

	Span big(15000);
	std::srand(unsigned(std::time(nullptr)));
	std::vector<int> v(15000);
	std::generate(v.begin(), v.end(), std::rand);
	for (size_t i = 0; i < v.size(); ++i)
		big.addNumber(v.at(i));
	std::cout << big.shortestSpan() << std::endl;
	std::cout << big.longestSpan() << std::endl;
}