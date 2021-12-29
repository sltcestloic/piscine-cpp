#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap(){
	cout << "Default ClapTrap constructor called" << endl;
}

ClapTrap::ClapTrap(string name) {
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	cout << "ClapTrap " << _name << " has been created" << endl;
}

ClapTrap::ClapTrap(ClapTrap &ref) {
	*this = ref;
	cout << "ClapTrap " << _name << " has been created" << endl;
}

ClapTrap::~ClapTrap() {
	cout << "ClapTrap " << _name << " has been destroyed" << endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ref) {
	if (this != &ref) {
		this->_name = ref._name;
		this->_attack_damage = ref._attack_damage;
		this->_hit_points = ref._hit_points;
		this->_energy_points = ref._energy_points;
	}
	return *this;
}

void ClapTrap::attack(string const &target) {
	cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage !" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	cout << "ClapTrap " << _name << " took " << amount << " points of damage !" << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	cout << "ClapTrap " << _name << " was repaired of " << amount << endl;
}

string ClapTrap::getName() {
	return this->_name;
}

void ClapTrap::setName(string name) {
	this->_name = name;
}

int ClapTrap::getHitPoints() {
	return this->_hit_points;
}

void ClapTrap::setHitPoints(int amount) {
	this->_hit_points = amount;
}

int ClapTrap::getEnergyPoints() {
	return this->_energy_points;
}

void ClapTrap::setEnergyPoints(int amount) {
	this->_energy_points = amount;
}

int ClapTrap::getAttackDamage() {
	return this->_attack_damage;
}

void ClapTrap::setAttackDamage(int amount) {
	this->_attack_damage = amount;
}