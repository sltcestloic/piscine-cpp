#include "Character.hpp"

Character::Character() {
	this->_name = "Default";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &ref) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = ref._inventory[i]->clone();
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];
}

Character &Character::operator=(Character const &ref) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = ref._inventory[i]->clone();
	}
	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *materia) {
	if (this->_inventory[3] != NULL) {
		std::cout << "Inventory is full." << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = materia;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "Invalid index." << std::endl;
		return;
	}
	if (this->_inventory[idx] == NULL) {
		std::cout << "Slot is already empty." << std::endl;
		return;
	}
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3) {
		std::cout << "Invalid index." << std::endl;
		return;
	}
	if (this->_inventory[idx] == NULL) {
		std::cout << "Slot is empty." << std::endl;
		return;
	}
	this->_inventory[idx]->use(target);
}