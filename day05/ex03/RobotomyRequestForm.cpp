#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form::Form("Robotomy Request", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref) : Form::Form(ref) {
    this->_target = ref._target;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &ref) {
	if (this != &ref) {
		Form::operator=(ref);
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	if (!this->isSigned())
		throw Form::NotSignedException();

    std::cout << " * bzzz bzzzzzzzzzzzzzz * " << std::endl;

    srand(time(0));
	if (rand() % 2)
	    std::cout << this->_target << " has been robotized!" << std::endl;
    else
        std::cout << "Failed to robotize " << this->_target << std::endl;
}