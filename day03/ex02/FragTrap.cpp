#include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap() {
	cout << "Default FragTrap constructor called" << endl;
}

FragTrap::FragTrap(string name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	cout << "FragTrap " << getName() << " has been created" << endl;
}

FragTrap::FragTrap(FragTrap &ref) {
	this->setName(ref.getName());
	this->setHitPoints(ref.getHitPoints());
	this->setEnergyPoints(ref.getEnergyPoints());
	this->setAttackDamage(ref.getAttackDamage());
	cout << "FragTrap " << getName() << " has been created" << endl;
}

FragTrap::~FragTrap() {
	cout << "FragTrap " << getName() << " has been destroyed" << endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ref) {
	if (this != &ref)
		ClapTrap::operator=(ref);
	return *this;
}

void FragTrap::highFiveGuys() {
	cout << "<" << getName() << "> high five guys !" << endl;
}