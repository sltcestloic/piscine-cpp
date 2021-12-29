#include "Zombie.hpp"

Zombie::Zombie(string name) {
	this->_name = name;
}

Zombie::~Zombie() {
	cout << this->_name << " destructor called" << endl;
}

void Zombie::announce() {
	cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(string name) {
	this->_name = name;
}