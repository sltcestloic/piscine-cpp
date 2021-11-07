#include "HumanA.hpp"
using std::cout;
using std::endl;

HumanA::HumanA(string name, Weapon& weapon) {
	this->name = name;
	this->weapon = &weapon;
}

void HumanA::attack(){
	cout << this->name << " attacks with his " << this->weapon->getType() << endl;
}