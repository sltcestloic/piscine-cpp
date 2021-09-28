#include <iostream>
#include <vector>
using namespace std;

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
		transform(args.begin(), args.end(), args.begin(), ::toupper);
		cout << args << endl;
	}
}