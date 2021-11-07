#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
using std::string;

class Weapon {
	private:
		string	type;
	public:
		Weapon(string type);
		string	getType() const;
		void	setType(string type);
};
#endif