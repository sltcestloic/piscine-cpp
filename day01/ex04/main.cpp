#include <iostream>
#include <fstream>
#include <ios>

using std::cout;
using std::endl;
using std::string;

void	replace(string *line, string s1, string s2) {
	size_t	pos = line->find(s1);

	while (pos != string::npos) {
		line->erase(pos, s1.length());
		line->insert(pos, s2);
		pos = line->find(s1);
	}
}

int main(int ac, char **av) {

	if (ac != 4) {
		cout << "Usage: " << av[0] << " <fileName> <s1> <s2>" << endl;
		return 1;
	}

	std::ifstream	inputFile;
	std::ofstream	outputFile;
	string			outputFileName;

	outputFileName = av[1];
	outputFileName.append(".replace");

	inputFile.open(av[1]);

	if (!inputFile.is_open()) {
		cout << "Invalid input file." << endl;
		return 1;
	}

	outputFile.open(outputFileName);

	string			line;
	
	while (std::getline(inputFile, line)) {
		cout << line << endl;
		replace(&line, av[2], av[3]);
		outputFile << line << endl;
	}

	inputFile.close();
	outputFile.close();

	return 0;
}