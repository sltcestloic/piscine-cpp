#include "PhoneBook.hpp"

void PhoneBook::add_Contact()
{
	contacts[index].add_prompt();
	index++;
	cout << "Contact added successfuly. i=" << index << endl;
}

void PhoneBook::search_Contact()
{
	for (int i = 0; i < index; i++) {
		cout << "test" << endl;
		cout << i << " " << contacts[index].first_name << contacts[index].last_name << contacts[index].nickname << endl;
	}
}