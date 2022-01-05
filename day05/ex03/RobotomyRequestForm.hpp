#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	private:
		std::string _target;
        
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &ref);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &ref);

		void execute(Bureaucrat const &executor) const;
};

#endif