#include "Ice.hpp"

Ice::Ice(void) 
{
    this->_type = "ice";
}

Ice::Ice(const Ice &srcs) 
{
    this->_type = srcs._type;
}

Ice::~Ice(void) 
{
}

Ice	&Ice::operator=(const Ice &rhs) 
{
    if (this != &rhs)
		this->_type = rhs._type;    
    return *this;
}

AMateria* Ice::clone(void) const
{
    return (new Ice());
}