#include "Karen.hpp"

using std::string;
using std::cout;
using std::endl;

int main(int ac, char **av) {
	if (ac < 2) return 0;

	Karen	karen;
	string	debugLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int 	level = -1;

	for (int i = 0; i < 4; i++) {
		if (debugLevels[i] == av[1]) {
			level = i;
			break ;
		}
	}

	switch (level)
	{
		case 0:
			karen.complain("DEBUG");
			break;
		case 1:
			karen.complain("INFO");
			break;
		case 2:
			karen.complain("WARNING");
			break;
		case 3:
			karen.complain("ERROR");
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
			break;
	}
}