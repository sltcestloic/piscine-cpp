#include "PhoneBook.hpp"

int main(void)
{
	string action;
	PhoneBook phoneBook;
	phoneBook.index = 0;
	bool prompt = true;
	while (true)
	{
		if (prompt) {
			cout << "=========== PHONEBOOK ===========" << endl;
			cout << "*  Commands: ADD, SEARCH, EXIT  *" << endl;
			cout << "=================================" << endl;
		}
		prompt = true;
		getline(cin, action);
		if (action.compare("EXIT") == 0)
			exit(0);
		else if (action.compare("ADD") == 0)
			phoneBook.add_Contact();
		else if (action.compare("SEARCH") == 0)
			phoneBook.search_Contact();
		else if (cin.eof()) exit (0);
		else {
			cout << "Unknown command. " << endl;
			prompt = false;
		} 
	}
}