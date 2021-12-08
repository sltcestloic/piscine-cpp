#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::endl;
using std::string;

int main(int ac, char **av)
{
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		string args;
		for (int i = 1; i < ac; i++)
		{
			args.append(av[i]);
			args.append(" ");
		}
		args.pop_back();
		for (size_t i = 0; i < args.length(); i++)
			cout << (char)std::toupper(args.at(i));
		cout << endl;
	}
}