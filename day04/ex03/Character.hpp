#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
	public:
		Character();
		Character(std::string name);
		Character(Character const &ref);
		virtual ~Character();

		Character &operator=(Character const &ref);

		std::string const &getName() const;
		void equip(AMateria *materia);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif