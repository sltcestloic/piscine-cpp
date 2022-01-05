#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	private:
		std::string _target;
        
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &ref);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &ref);

		void execute(Bureaucrat const &executor) const;
};

#endif