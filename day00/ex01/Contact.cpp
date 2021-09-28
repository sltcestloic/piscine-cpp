#include "Contact.hpp"


void Contact::add_prompt()
{
	cout << "First name: ";
	cin >> first_name;
	cout << "First name set to : " << first_name << endl;
	cout << "Last name: ";
	cin >> last_name;
	cout << "Nickname: ";
	cin >> nickname;
	cout << "Phone number: ";
	cin >> phone_number;
	cout << "Darkest secret: ";
	cin >> darkest_secret;
}