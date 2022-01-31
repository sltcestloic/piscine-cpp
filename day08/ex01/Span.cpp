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
	if (this->_vect.size() < 2)
		throw std::out_of_range("Vector needs at least 2 elements to find a span.");

	int min, max;

    min = *std::min_element(this->_vect.begin(), this->_vect.end());
    max = *std::max_element(this->_vect.begin(), this->_vect.end());

    return max - min;
}

int Span::shortestSpan() {
	if (this->_vect.size() < 2)
		throw std::out_of_range("Vector needs at least 2 elements to find a span.");

	int ret = INT_MAX;
    std::vector<int>::const_iterator it;
    std::vector<int>::const_iterator ite;

    for(it = this->_vect.begin(); it != this->_vect.end() - 1; ++it)
        for (ite = it + 1; ite != this->_vect.end(); ++ite)
            if (abs(*it - *ite) < ret)
                ret = abs(*it - *ite);
    return ret;
}

void Span::display()
{
	for (size_t i = 0; i < this->_vect.size(); ++i) {
        std::cout << this->_vect.at(i) << std::endl;
    }
}

void Span::generate() {
    srand(time(0));
    std::generate_n(std::back_inserter(this->_vect), this->_n, std::rand);
}