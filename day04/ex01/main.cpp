#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	int arr_size = 10;
	int arr_mid = arr_size / 2;

	Animal* animals[arr_size];

	for (int i = 0; i < arr_size; i++) {
		if (i >= arr_mid)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < arr_size; i++) {
		cout << "animals[" << i << "] sound: ";
		animals[i]->makeSound();
	}

	for (int i = 0; i < arr_size; i++)
		delete animals[i];

	Cat *cat = new Cat();
	Cat *catcopy = new Cat(*cat);

	cout << "cat1->brain = " << cat->getBrain() << endl;
	cout << "catcopy->brain = " << catcopy->getBrain() << endl;

	delete cat;
	delete catcopy;
}