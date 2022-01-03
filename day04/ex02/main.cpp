#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	

	Dog *dog = new Dog();

	dog->makeSound();
	/* AAnimal *animal = new AAnimal(); //doesn't compile, AAnimal is abstract

	animal->makeSound(); */
}