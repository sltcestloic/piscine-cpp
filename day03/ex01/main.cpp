#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap albert("Albert");
	ClapTrap bobby("Bobby");

	ScavTrap henry("Henry");

	albert.attack("Hervé");
	bobby.takeDamage(8);
	bobby.beRepaired(3);

	henry.guardGate();
}