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

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	this->_name = name;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	cout << "DiamondTrap " << _name << " has been created" << endl;
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap " << _name << " has been destroyed" << endl;
}

void DiamondTrap::attack(string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	cout << "<" << _name << "> my name is " << _name << " and my claptrap name is " << this->ClapTrap::_name << endl; 
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &ref) {
	if (this != &ref)
		*this = ref;
	return *this;
}