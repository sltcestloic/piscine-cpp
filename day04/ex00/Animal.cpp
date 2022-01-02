#include "Animal.hpp"

Animal::Animal() : _type("Default") {
	cout << "Default Animal constructor called" << endl;
}

Animal::Animal(Animal const &ref) {
	this->_type = ref._type;
	cout << "Animal copy constructor called" << endl;
}

Animal::~Animal() {
	cout << "Animal destructor called" << endl;
}

Animal &Animal::operator=(Animal const &ref) {
	if (this != &ref) {
		this->_type = ref._type;
	}
	return *this;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::makeSound() const {
	cout << " * default animal sound * " << endl;
}