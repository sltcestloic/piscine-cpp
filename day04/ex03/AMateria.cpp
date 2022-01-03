#include "AMateria.hpp"

AMateria::AMateria() {
	_type = "Default";
}

AMateria::AMateria(AMateria const &ref) {
	this->_type = ref._type;
}

AMateria::AMateria(std::string const &type) {
	this->_type = type;
}

AMateria::~AMateria() {
}

AMateria &AMateria::operator=(AMateria const &ref) {
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}