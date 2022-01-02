#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &ref);
		WrongCat &operator=(WrongCat const &ref);
		~WrongCat();

		void makeSound() const;
};

#endif