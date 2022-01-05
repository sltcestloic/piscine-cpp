#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &ref);
		~Intern();

		Intern &operator=(Intern const &ref);

		Form *makeForm(std::string name, std::string target) const;
		Form* makeShrubbery(std::string target) const;
		Form* makeRobotize(std::string target) const;
		Form* makePresidential(std::string target) const;
};

#endif