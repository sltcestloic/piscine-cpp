#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	this->_brain = new Brain();
	cout << "Dog default constructor called" << endl;
}

Dog::Dog(Dog const &ref) {
	this->_type = ref._type;
	this->_brain = ref._brain;
	cout << "Dog copy constructor called" << endl;
}

Dog &Dog::operator=(Dog const &ref) {
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

Dog::~Dog() {
	cout << "Dog default destructor called" << endl;
}

void Dog::makeSound() const {
	cout << "Woof !" << endl;
}