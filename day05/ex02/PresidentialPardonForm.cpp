#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form::Form("Presidential Pardon", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref) : Form::Form(ref) {
    this->_target = ref._target;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	if (!this->isSigned())
		throw Form::NotSignedException();

	std::cout << this->_target << " has been forgiven by Zafod Beeblebrox!" << std::endl;
}