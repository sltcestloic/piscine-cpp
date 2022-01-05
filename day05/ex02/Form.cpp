#include "Form.hpp"

Form::Form() {
    this->_name = "Default";
    this->_signed = false;
    this->_grade_to_sign = 50;
    this->_grade_to_exec = 1;
}

Form::Form(std::string name, int to_sign, int to_exec) {
    if (to_sign < 1)
        throw Form::GradeTooHighException();
    else if (to_sign > 150)
        throw Form::GradeTooLowException();
    if (to_exec < 1)
        throw Form::GradeTooHighException();
    else if (to_exec > 150)
        throw Form::GradeTooLowException();
    this->_name = name;
    this->_signed = false;
    this->_grade_to_sign = to_sign;
    this->_grade_to_exec = to_exec;
}

Form::Form(Form const &ref) {
    this->_name = ref.getName();
    this->_signed = ref.isSigned();
    this->_grade_to_sign = ref.getGradeToSign();
    this->_grade_to_exec = ref.getGradeToExec();
}

Form::~Form() {
}

Form &Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	this->_signed = true;
    std::cout << "Form \"" << this->_name << "\" was signed by " << bureaucrat.getName() << std::endl;
	return *this;
}

std::string	Form::getName(void) const{ 
    return this->_name;
}

int	Form::getGradeToSign(void) const {
    return this->_grade_to_sign;
}

int	Form::getGradeToExec(void) const {
    return this->_grade_to_exec;
}

bool	Form::isSigned(void) const {
    return this->_signed;
}

std::ostream &operator<<(std::ostream &os, Form const &ref) {
	os << ref.getName() << ", form requires grade " << ref.getGradeToSign() 
        << " to be signed and grade " << ref.getGradeToExec() 
        << " to be executed. Form is " << (ref.isSigned() ? "" : "not ") << "signed.";
	return os;
}