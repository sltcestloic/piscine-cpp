#include "HumanB.hpp"
using std::cout;
using std::endl;

HumanB::HumanB(string name) {
	this->name = name;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	cout << this->name << " attacks with his " << 
		(this->weapon ? this->weapon->getType() : " fist") 
		<< endl;
}