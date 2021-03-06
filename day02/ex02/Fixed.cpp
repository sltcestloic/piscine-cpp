#include "Fixed.hpp"
#include <cmath>

using std::cout;
using std::endl;

const int Fixed::bits = 8;

Fixed::Fixed(void) {
	this->_value = 0;
}

Fixed::Fixed(Fixed const &fixed) {
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
}

Fixed &Fixed::operator=(Fixed const &fixed) {
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator==(Fixed const &fixed) const {
	return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(Fixed const &fixed) const {
	return this->getRawBits() != fixed.getRawBits();
}

bool Fixed::operator>(Fixed const &fixed) const {
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator>=(Fixed const &fixed) const {
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<(Fixed const &fixed) const {
	return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator<=(Fixed const &fixed) const {
	return this->getRawBits() <= fixed.getRawBits();
}

Fixed Fixed::operator+(Fixed const &fixed) const {
	Fixed ret;
	ret._value = this->_value + fixed.getRawBits();
	return (ret);
}

Fixed Fixed::operator-(Fixed const &fixed) const {
	Fixed ret;
	ret._value = this->_value - fixed.getRawBits();
	return (ret);
}

Fixed Fixed::operator*(Fixed const &fixed) const {
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(Fixed const &fixed) const {
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed &Fixed::operator--(void) {
	_value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed ret(*this);
	this->operator--();
	return ret;
}

Fixed &Fixed::operator++(void) {
	_value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed ret(*this);
	this->operator++();
	return ret;
}

Fixed Fixed::max(Fixed const &f1, Fixed const &f2) {
	return f1 >= f2 ? f1 : f2;
}

Fixed Fixed::min(Fixed const &f1, Fixed const &f2) {
	return f1 < f2 ? f1 : f2;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int Fixed::getRawBits(void) const {
	return this->_value;
}