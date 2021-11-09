#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int n, string name) {
	
	Zombie *array = (Zombie *)malloc(sizeof(Zombie) * n);

	for (int i = 0; i < n; i++)
		array[i].setName(name);

	return array;
}