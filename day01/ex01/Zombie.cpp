#include "Zombie.hpp"

Zombie::Zombie(string name) {
	this->_name = name;
}

void Zombie::announce() {
	cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(string name) {
	this->_name = name;
}