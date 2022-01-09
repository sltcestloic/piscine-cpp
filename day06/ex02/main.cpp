#include "Base.hpp"
#include <ctime>
#include <stdlib.h>
#include <iostream>

Base::~Base() {}

Base *generate() {
	srand(time(0));
	int rdm = rand() % 3;
	std::cout << "Generating type " << rdm << std::endl;
	switch (rdm) {
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

//https://stackoverflow.com/a/11510210

void identity(Base *ptr) {
	if (dynamic_cast<A *>(ptr))
		std::cout << "Identified type A (0) from ptr !" << std::endl;
	else if (dynamic_cast<B *>(ptr))
		std::cout << "Identified type B (1) from ptr !" << std::endl;
	else if (dynamic_cast<C *>(ptr))
		std::cout << "Identified type C (2) from ptr !" << std::endl;
}

void identity(Base& ref) {
	Base type;
	//Type A
	try {
			type = dynamic_cast<A &>(ref);
			std::cout << "Identified type A (0) from ref !" << std::endl;
	} catch (std::bad_cast e) {}
	//Type B
	try {
			type = dynamic_cast<B &>(ref);
			std::cout << "Identified type B (1) from ref !" << std::endl;
	} catch (std::bad_cast e) {}
	//Type C
	try {
			type = dynamic_cast<C &>(ref);
			std::cout << "Identified type C (2) from ref !" << std::endl;
	} catch (std::bad_cast e) {}
}

int main() {
	Base* base = generate();
	identity(base);
	identity(*base);
	delete base;
}