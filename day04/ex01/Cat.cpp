#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	this->_brain = new Brain();
	cout << "Cat default constructor called" << endl;
}

Cat::Cat(Cat const &ref) {
	this->_type = ref._type;
	this->_brain = new Brain();
	*(this->_brain) = *(ref._brain);
	cout << "Cat copy constructor called" << endl;
}

Cat &Cat::operator=(Cat const &ref) {
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

Cat::~Cat() {
	delete this->_brain;
	cout << "Cat default destructor called" << endl;
}

void Cat::makeSound() const {
	cout << "Meow !" << endl;
}

Brain* Cat::getBrain() {
	return this->_brain;
}