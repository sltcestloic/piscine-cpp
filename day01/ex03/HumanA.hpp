#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"
using std::string;

class HumanA {
	private:
		string	name;
		Weapon	*weapon;
	public:
		HumanA(string name, Weapon& weapon);
		void	attack();
};
#endif