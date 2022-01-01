#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap(){
	cout << "Default ClapTrap constructor called" << endl;
}

ClapTrap::ClapTrap(string name) : _name(name) {
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	cout << "ClapTrap " << _name << " constructor called" << endl;
}

ClapTrap::ClapTrap(ClapTrap &ref) {
	*this = ref;
	cout << "ClapTrap " << _name << " copy constructor called" << endl;
}

ClapTrap::~ClapTrap() {
	cout << "ClapTrap " << _name << " destructor called" << endl;
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