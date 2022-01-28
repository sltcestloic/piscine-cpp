#include "Span.hpp"

#include <iostream>

Span::Span(unsigned int n) {
	this->_n = n;
}

Span::Span(Span const & ref) {
	*this = ref;
}

Span::~Span() {}

Span &Span::operator=(Span const & ref) {
	this->_n = ref._n;
	this->_vect.reserve(ref._n);
	std::vector<int> copy = ref._vect;
	std::vector<int>::iterator it = copy.begin();
	while (it != copy.end())
	{
		addNumber(*it);
		it++;
	}
	return *this;
}

void Span::addNumber(int number) {
	if (this->_vect.size() < this->_n)
		this->_vect.push_back(number);
	else
		throw std::exception();
}

int Span::longestSpan() {
	int ret = 0;
	std::vector<int>::iterator it1 = _vect.begin();
	std::vector<int>::iterator it2 = ++_vect.begin();
	for (; it2 != _vect.end(); it1++)
	{
		if (abs(*it1 - *it2) > ret)
			ret = abs(*it1 - *it2);
		it2++;
	}
	return ret;
}

int Span::shortestSpan() {
	int ret = INT_MAX;
	std::vector<int>::iterator it1 = _vect.begin();
	std::vector<int>::iterator it2 = ++_vect.begin();
	for (; it2 != _vect.end(); it1++)
	{
		if (abs(*it1 - *it2) < ret)
			ret = abs(*it1 - *it2);
		it2++;
	}
	return ret;
}

void Span::display()
{
	for (size_t i = 0; i < this->_vect.size(); ++i) {
        std::cout << this->_vect.at(i) << std::endl;
    }
}