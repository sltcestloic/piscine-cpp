#include "Zombie.hpp"

void Zombie::randomChump(string name) {
	Zombie zombie = Zombie(name);
	zombie.announce();
}