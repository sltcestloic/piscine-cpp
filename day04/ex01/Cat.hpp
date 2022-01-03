#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;

	public:
		Cat();
		Cat(Cat const &ref);
		Cat &operator=(Cat const &ref);
		~Cat();

		void makeSound() const;
		Brain* getBrain();
};

#endif