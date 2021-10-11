#include "Zombie.hpp"

Zombie	*Zombie::newZombie(string name) {
	Zombie *zombie = (Zombie *)malloc(sizeof(Zombie));
	zombie->setName(name);
	return (zombie);
}