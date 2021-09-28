#include <string>
#include <iostream>
using namespace std;

class Contact
{
	public:
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
};

class PhoneBook
{
	public:
		int	contact_count;
		Contact contacts[8];
		void addContact(Contact contact)
		{
			if (contact_count < 8) {
				contacts[contact_count] = contact;
				contact_count++;
			}
		}
};

void add_contact_prompt(PhoneBook phonebook) {
	Contact contact;
	cout << "First name: ";
	cin >> contact.first_name;
	cout << "Last name: ";
	cin >> contact.last_name;
	cout << "Nickname: ";
	cin >> contact.last_name;
	cout << "Phone number: ";
	cin >> contact.phone_number;
	cout << "Darkest secret: ";
	cin >> contact.darkest_secret;
	phonebook.addContact(contact);
	cout << "Contact added successfuly." << phonebook.contact_count << endl;
}

void search_prompt(PhoneBook phonebook) {
	cout << "displaying search prompt" << phonebook.contact_count << endl;
	for (int i = 0; i < phonebook.contact_count; i++) {
		Contact contact = phonebook.contacts[i];
		cout << i << " " << contact.first_name << contact.last_name << contact.nickname << endl;
	}
}

int main(void)
{
	string action;
	PhoneBook phoneBook;
	phoneBook.contact_count = 0;
	while (true)
	{
		cin >> action;
		cout << "arg: " << action << endl;
		if (action.compare("EXIT") == 0)
			exit(0);
		else if (action.compare("ADD") == 0)
			add_contact_prompt(phoneBook);
		else if (action.compare("SEARCH") == 0)
			search_prompt(phoneBook);
	}
}