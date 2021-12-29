#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

using std::string;

class Zombie {

	public:
		Zombie(string name);
		Zombie();

		void	announce();
		void	setName(string name);
	private:
		string	_name;
};

Zombie	*zombieHorde(int n, string name);

#endif