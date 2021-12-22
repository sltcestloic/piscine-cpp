#include "Fixed.hpp"
#include <cmath>

using std::cout;
using std::endl;

const int Fixed::bits = 8;

Fixed::Fixed(void) {
	cout << "Default constructor called" << endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const &fixed) {
	cout << "Copy constructor called" << endl;
	*this = fixed;
}

Fixed::Fixed(int const src) {
	_value = src << bits;
}

Fixed::Fixed(float const src) {
	_value = roundf((1 << bits) * src);
}

float Fixed::toFloat() const {
	return ((float)_value / (1 << bits));
}

int Fixed::toInt() const {
	return _value >> bits;
}

Fixed::~Fixed(void) {
	cout << "Destructor called" << endl;
}

Fixed &Fixed::operator=(Fixed const &fixed) {
	std::cout << "Assignation operator called" << endl;
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	os << fixed.toFloat();
	return os;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int Fixed::getRawBits(void) const {
	cout << "getRawBits function called" << endl;
	return this->_value;
}