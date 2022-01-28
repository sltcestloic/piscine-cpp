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
	sp_copy.addNumber(256);

	std::cout << "sp: " << std::endl;
	sp.display();
	std::cout << std::endl;
	std::cout << "sp_copy: " << std::endl;
	sp_copy.display();
	std::cout << std::endl;
}