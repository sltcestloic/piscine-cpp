#include "ScavTrap.hpp"

using std::cout;
using std::endl;

ScavTrap::ScavTrap() {
	cout << "Default ScavTrap constructor called" << endl;
}

ScavTrap::ScavTrap(string name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	cout << "ScavTrap " << getName() << " has been created" << endl;
}

ScavTrap::ScavTrap(ScavTrap &ref) {
	this->setName(ref.getName());
	this->setHitPoints(ref.getHitPoints());
	this->setEnergyPoints(ref.getEnergyPoints());
	this->setAttackDamage(ref.getAttackDamage());
	cout << "ScavTrap " << getName() << " has been created" << endl;
}

ScavTrap::~ScavTrap() {
	cout << "ScavTrap " << getName() << " has been destroyed" << endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &) {
	return *this;
}

void ScavTrap::guardGate() {
	cout << "ScavTrap " << getName() << " has enterred in Gate keeper mode." << endl;
}