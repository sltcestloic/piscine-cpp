#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

using std::string;

class Zombie {

	public:
		Zombie(string name);

		Zombie	*zombieHorde(int n, string name);

		void	announce();
		void	setName(string name);
	private:
		string	_name;
};

#endif