#include "Cure.hpp"

Cure::Cure(void) 
{
    this->_type = "cure";
}

Cure::Cure(const Cure &srcs) 
{
    this->_type = srcs._type;
}

Cure::~Cure(void) 
{
}

Cure	&Cure::operator=(const Cure &rhs) 
{
    if (this != &rhs)
		this->_type = rhs._type;    
    return *this;
}

AMateria* Cure::clone(void) const
{
    return (new Cure());
}