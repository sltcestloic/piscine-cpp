#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		string _name;
	public:
		DiamondTrap();
		DiamondTrap(string name);
		DiamondTrap(DiamondTrap &ref);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap &ref);

		void whoAmI();
		void attack(string const &target);
};

#endif