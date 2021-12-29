#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

using std::string;

class FragTrap : ClapTrap {
	public:
		FragTrap();
		FragTrap(string name);
		FragTrap(FragTrap &ref);
		~FragTrap();

		FragTrap &operator=(FragTrap const &);

		void highFiveGuys();
};
#endif