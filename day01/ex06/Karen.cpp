#include "Karen.hpp"
using std::string;
using std::cout;
using std::endl;

void Karen::complain(string level) {
	KarenLevel levels[] = {
		{"DEBUG", &Karen::debug},
		{"INFO", &Karen::info},
		{"WARNING", &Karen::warning},
		{"ERROR", &Karen::error}
	};
	int	targetLevel = 0;

	for (int i = 0; i < 4; i++) {
		if (level == levels[i].name) {
			targetLevel = i;
			break;
		}
	}
	for (int i = targetLevel; i < 4; i++)
		(this->*levels[i].func)();
}

void Karen::debug() {
	cout << "[ DEBUG ]" << endl;
	cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << endl;
}

void Karen::info() {
	cout << "[ INFO ]" << endl;
	cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << endl;
}

void Karen::warning() {
	cout << "[ WARNING ]" << endl;
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << endl;
}

void Karen::error() {
	cout << "[ ERROR ]" << endl;
	cout << "This is unacceptable, I want to speak to the manager right now." << endl;
}