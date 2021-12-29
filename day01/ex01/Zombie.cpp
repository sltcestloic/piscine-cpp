#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie(string name) {
	this->_name = name;
}

Zombie::Zombie() {
	this->_name = "Default";
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