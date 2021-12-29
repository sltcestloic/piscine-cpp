#include "Zombie.hpp"

Zombie	*Zombie::newZombie(string name) {
	Zombie *zombie = new Zombie(name);
	return (zombie);
}