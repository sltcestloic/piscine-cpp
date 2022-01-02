#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->_type = "WrongCat";
	cout << "WrongCat default constructor called" << endl;
}

WrongCat::WrongCat(WrongCat const &ref) {
	this->_type = ref._type;
	cout << "WrongCat copy constructor called" << endl;
}

WrongCat &WrongCat::operator=(WrongCat const &ref) {
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

WrongCat::~WrongCat() {
	cout << "WrongCat default constructor called" << endl;
}

void WrongCat::makeSound() const {
	cout << "Meow !" << endl;
}