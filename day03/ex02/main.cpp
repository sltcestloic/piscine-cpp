#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap albert("Albert");
	ClapTrap bobby("Bobby");

	ScavTrap henry("Henry");

	albert.attack("Hervé");
	bobby.takeDamage(8);
	bobby.beRepaired(3);

	henry.guardGate();

	FragTrap fragTrap("René");

	fragTrap.highFiveGuys();
}