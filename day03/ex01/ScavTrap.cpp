#include "ScavTrap.hpp"

using std::cout;
using std::endl;

ScavTrap::ScavTrap() {
	cout << "Default ScavTrap constructor called" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name) {
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	cout << "ScavTrap " << this->_name << " constructor called" << endl;
}

ScavTrap::ScavTrap(ScavTrap &ref) : ClapTrap(ref) {
	cout << "FragTrap " << this->_name << " copy constructor called" << endl;
}

ScavTrap::~ScavTrap() {
	cout << "ScavTrap " << this->_name << " destructor called" << endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &ref) {
	if (this != &ref)
		ClapTrap::operator=(ref);
	return *this;
}

void ScavTrap::guardGate() {
	cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode." << endl;
}