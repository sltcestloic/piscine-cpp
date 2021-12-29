#include "DiamondTrap.hpp"


using std::cout;
using std::endl;

DiamondTrap::DiamondTrap() {
	cout << "Default DiamondTrap constructor called" << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &ref) {
	*this = ref;
	cout << "DiamondTrap " << _name << " has been created" << endl;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	cout << "DiamondTrap " << _name << " has been created" << endl;
}

DiamondTrap::attack(string const &target) {
	ScavTrap::attack(target);
}