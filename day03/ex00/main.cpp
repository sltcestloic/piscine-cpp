#include "ClapTrap.hpp"

int main() {
	ClapTrap albert("Albert");
	ClapTrap bobby("Bobby");

	albert.attack("Hervé");
	bobby.takeDamage(8);
	bobby.beRepaired(3);
}