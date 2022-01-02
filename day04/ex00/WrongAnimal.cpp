#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default") {
	cout << "Default WrongAnimal constructor called" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &ref) {
	this->_type = ref._type;
	cout << "WrongAnimal copy constructor called" << endl;
}

WrongAnimal::~WrongAnimal() {
	cout << "WrongAnimal destructor called" << endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &ref) {
	if (this != &ref) {
		this->_type = ref._type;
	}
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::makeSound() const {
	cout << " * default WrongAnimal sound * " << endl;
}