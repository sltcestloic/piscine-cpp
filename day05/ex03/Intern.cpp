#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(Intern const &ref) {
	(void)ref;
}

Intern::~Intern() {
}

Intern &Intern::operator=(Intern const &ref) {
	(void)ref;
	return *this;
}

Form* Intern::makeShrubbery(std::string target) const {
	return (new ShrubberyCreationForm(target));
}

Form* Intern::makeRobotize(std::string target) const {
	return (new RobotomyRequestForm(target));
}

Form* Intern::makePresidential(std::string target) const {
	return (new PresidentialPardonForm(target));
}

typedef Form* (Intern::*FormList[3]) (std::string target) const;

Form *Intern::makeForm(std::string name, std::string target) const {
	FormList list = {&Intern::makeShrubbery, &Intern::makeRobotize, &Intern::makePresidential};
	std::string namesList[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(namesList[i]))
		{
			std::cout << "Intern creates " << name << std::endl;	
			return ((this->*(list[i])) (target));
		}
	}
	std::cout << "Can't find form " << name << " in list" << std::endl;
	return (NULL);
}