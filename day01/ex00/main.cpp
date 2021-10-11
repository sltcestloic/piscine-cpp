#include "Zombie.hpp"

int main() {
	Zombie zombie("Peter");

	zombie.announce();

	Zombie *zombie_p = zombie.newZombie("Hector");

	zombie_p->announce();

	free(zombie_p);

	zombie.randomChump("Bruce");
}