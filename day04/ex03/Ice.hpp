#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &ref);
		virtual ~Ice();

		Ice &operator=(const Ice &rhs);

        AMateria* clone(void) const;
};

#endif