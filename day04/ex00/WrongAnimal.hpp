#ifndef WRONGAnimal_HPP
#define WRONGAnimal_HPP

#include <iostream>

using std::cout;
using std::endl;

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &ref);
		WrongAnimal &operator=(WrongAnimal const &ref);
		virtual ~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

#endif