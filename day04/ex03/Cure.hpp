#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &ref);
		virtual ~Cure();

		Cure &operator=(const Cure &rhs);

        AMateria* clone(void) const;
};

#endif