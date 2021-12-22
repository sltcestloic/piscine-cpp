#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed() {
	cout << "Default constructor called" << endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &fixed) {
	cout << "Copy constructor called" << endl;
	*this = fixed;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

Fixed	&Fixed::operator=(Fixed const &fixed) {
	std::cout << "Assignation operator called" << endl;
	if (this != &fixed)
		this->value = fixed.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw) {
	this->value = raw;
}

int		Fixed::getRawBits() const {
	cout << "getRawBits function called" << endl;
	return this->value;
}