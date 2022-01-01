#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string;

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(string name);
		ScavTrap(ScavTrap &ref);
		~ScavTrap();

		ScavTrap &operator=(ScavTrap const &);

		void guardGate();
};
#endif