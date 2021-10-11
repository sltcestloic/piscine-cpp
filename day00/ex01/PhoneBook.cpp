#include "PhoneBook.hpp"

void PhoneBook::add_Contact()
{
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;
	Contact	*contact;

	cout << "First name: ";
	getline(cin, first_name);
	cout << "Last name: ";
	getline(cin, last_name);
	cout << "Nickname: ";
	getline(cin, nickname);
	cout << "Phone number: ";
	getline(cin, phone_number);
	cout << "Darkest secret: ";
	getline(cin, darkest_secret);
	contact = &this->contacts[index];
	contact->setFirstName(first_name);
	contact->setLastName(last_name);
	contact->setNickname(nickname);
	contact->setPhoneNumber(phone_number);
	contact->setDarkestSecret(darkest_secret);
	cout << contacts[index].getFirstName() << endl;
	this->index++;
	cout << "Contact added successfuly. i=" << this->index << endl;
}

void PhoneBook::search_Contact()
{
	cout << "index=" << this->index << endl;
	for (int i = 0; i < this->index; i++) {
		cout << i << " " << contacts[index].getFirstName() << contacts[index].getLastName() << contacts[index].getNickname() << endl;
	}
}