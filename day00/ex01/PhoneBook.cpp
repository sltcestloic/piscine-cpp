#include "PhoneBook.hpp"

void PhoneBook::add_Contact()
{
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;
	Contact	*contact;

	if (this->index == 7) {
		cout << "PhoneBook is full." << endl;
		return;
	}

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
	contact->setIndex(this->index);

	this->index++;

	cout << "Contact added successfully." << endl;
}

void PhoneBook::search_Contact()
{
	int index;
	string input;
	for (int i = 0; i < this->index; i++)
		contacts[i].printDetails();
	cout << "Please enter the id of a contact: ";
	getline(cin, input);
	try {
		index = stoi(input);
	} catch (invalid_argument) {
		cout << "Invalid index." << endl;
		return;
	}
	if (index > this->index || index < 0)
		cout << "There is no contact at index " << index << "." << endl;
	else
		this->contacts[index].printCard();
}