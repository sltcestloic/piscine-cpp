#include "Weapon.hpp"

Weapon::Weapon(string type) {
	setType(type);
}

string Weapon::getType() const {
	return type;
}

void Weapon::setType(string const type) {
	this->type = type;
}