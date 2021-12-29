#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::string;

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(string name);
		ClapTrap(ClapTrap &ref);
		~ClapTrap();

		ClapTrap &operator=(ClapTrap const &ref);

		void attack(string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		string	getName();
		int		getHitPoints();
		int		getEnergyPoints();
		int		getAttackDamage();

		void	setName(string name);
		void	setHitPoints(int amount);
		void	setEnergyPoints(int amount);
		void	setAttackDamage(int amount);
	private:
		string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_damage;
};
#endif