#include "MateriaSource.hpp"

#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &ref){
	for (int i = 0; i < 4; i++) {
		if (this->_memory[i])
			delete this->_memory[i];
		this->_memory[i] = ref._memory[i]->clone();
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (this->_memory[i])
			delete this->_memory[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &ref){
    for (int i = 0; i < 4; i++) {
       if (this->_memory[i])
			delete this->_memory[i];
		this->_memory[i] = ref._memory[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (this->_memory[3] != NULL) {
		std::cout << "Memory is full." << this->_memory[3]->getType() << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_memory[i] == NULL) {
			this->_memory[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (this->_memory[i]->getType() == type)
			return this->_memory[i]->clone();
	std::cout << "Unknown type: " << type << std::endl;
	return 0;
}