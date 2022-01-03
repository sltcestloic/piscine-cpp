#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* _brain;

	public:
		Dog();
		Dog(Dog const &ref);
		Dog &operator=(Dog const &ref);
		~Dog();

		void makeSound() const;
		Brain* getBrain();
};

#endif