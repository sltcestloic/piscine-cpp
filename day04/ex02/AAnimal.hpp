#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal();
		AAnimal(AAnimal const &ref);
		AAnimal &operator=(AAnimal const &ref);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif