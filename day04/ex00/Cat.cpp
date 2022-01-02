#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	cout << "Cat default constructor called" << endl;
}

Cat::Cat(Cat const &ref) {
	this->_type = ref._type;
	cout << "Cat copy constructor called" << endl;
}

Cat &Cat::operator=(Cat const &ref) {
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

Cat::~Cat() {
	cout << "Cat default destructor called" << endl;
}

void Cat::makeSound() const {
	cout << "Meow !" << endl;
}