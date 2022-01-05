#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
    this->_name = "Default";
    this->_grade = 150;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref) {
	this->_name = ref.getName();
	this->_grade = ref.getGrade();
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_name = name;
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat(void){
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	if (this != &rhs) {
	    this->_name = rhs.getName();
    	this->_grade = rhs.getGrade();
    }
	return *this;
}

void Bureaucrat::signForm(Form &form) {
	std::cout << this->getName() << " signs " << form.getName() << std::endl;
	try {
		form.beSigned(*this);
	} catch (Form::GradeTooLowException &ex) {
		std::cout << this->_name << " cannot sign because his grade is too low." << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form) {
	std::cout << this->getName() << " execute " << form.getName() << std::endl;
	try {
		form.execute(*this);
	} catch (Form::GradeTooLowException &ex) {
		std::cout << this->_name << " cannot execute form because his grade is too low." << std::endl;
	}
}

void Bureaucrat::increaseGrade(void) {

	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decreaseGrade(void) {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &ref) {
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return os;
}