#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

using namespace std;

class Zombie {

	public:
		Zombie(string name);

		Zombie	*newZombie(string name);

		void	randomChump(string name);
		void	announce();
		void	setName(string name);
	private:
		string	_name;
};

#endif