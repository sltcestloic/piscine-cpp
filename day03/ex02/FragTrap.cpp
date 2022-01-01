#include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap() {
	cout << "Default FragTrap constructor called" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name) {
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	cout << "FragTrap " << this->_name << " constructor called" << endl;
}

FragTrap::FragTrap(FragTrap &ref) : ClapTrap(ref) {
	cout << "FragTrap " << this->_name << " copy constructor called" << endl;
}

FragTrap::~FragTrap() {
	cout << "FragTrap " << this->_name << " destructor called" << endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ref) {
	if (this != &ref)
		ClapTrap::operator=(ref);
	return *this;
}

void FragTrap::highFiveGuys() {
	cout << "<" << this->_name << "> high five guys !" << endl;
}