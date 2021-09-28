#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	string action;
	PhoneBook phoneBook;
	phoneBook.index = 0;
	while (true)
	{
		cin >> action;
		cout << "arg: " << action << endl;
		if (action.compare("EXIT") == 0)
			exit(0);
		else if (action.compare("ADD") == 0)
			phoneBook.add_Contact();
		else if (action.compare("SEARCH") == 0)
			phoneBook.search_Contact();
	}
}