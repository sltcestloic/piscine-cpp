#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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