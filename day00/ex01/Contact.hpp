#include "common.hpp"

class Contact {

	public:
		string	getFirstName();
		string	getLastName();
		string	getNickname();
		string	getPhoneNumber();
		string	getDarkestSecret();

		void	setFirstName(string name);
		void	setLastName(string name);
		void	setNickname(string name);
		void	setPhoneNumber(string number);
		void	setDarkestSecret(string secret);
		
	private:
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
};