#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(Animal const &ref);
		Animal &operator=(Animal const &ref);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
};

#endif