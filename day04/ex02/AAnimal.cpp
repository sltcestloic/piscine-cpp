#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Default") {
	cout << "Default AAnimal constructor called" << endl;
}

AAnimal::AAnimal(AAnimal const &ref) {
	this->_type = ref._type;
	cout << "AAnimal copy constructor called" << endl;
}

AAnimal::~AAnimal() {
	cout << "AAnimal destructor called" << endl;
}

AAnimal &AAnimal::operator=(AAnimal const &ref) {
	if (this != &ref) {
		this->_type = ref._type;
	}
	return *this;
}

std::string AAnimal::getType() const {
	return this->_type;
}

void AAnimal::makeSound() const {
	cout << " * default AAnimal sound * " << endl;
}