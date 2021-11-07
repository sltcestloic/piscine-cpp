#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"
using std::string;

class HumanB {
	private:
		string	name;
		Weapon	*weapon;
	public:
		HumanB(string name);
		void	setWeapon(Weapon& weapon);
		void	attack();
};
#endif