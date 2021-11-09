#include "Zombie.hpp"

int main(void)
{
	Zombie	zombie("cc");
    Zombie	*horde = zombie.zombieHorde(5, "Bob");

	for (int i = 0; i < 5; i++)
		horde[i].announce();

	free(horde);
}