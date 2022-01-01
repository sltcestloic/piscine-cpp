#include "DiamondTrap.hpp"


using std::cout;
using std::endl;

DiamondTrap::DiamondTrap() {
	cout << "Default DiamondTrap constructor called" << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &ref) {
	*this = ref;
	cout << "DiamondTrap " << _name << " copy constructor called" << endl;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name) {
	this->ClapTrap::_name = name + "_clap_name";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
	cout << "DiamondTrap " << _name << " constructor called" << endl;
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap " << _name << " destructor called" << endl;
}

void DiamondTrap::attack(string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	cout << "<" << this->_name << "> my name is " << this->_name << " and my claptrap name is " << this->ClapTrap::_name << endl; 
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &ref) {
	if (this != &ref)
		*this = ref;
	return *this;
}