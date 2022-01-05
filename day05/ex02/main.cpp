#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat a("John", 1);

    std::cout << a << std::endl;

    try {
		Form* form_s = new ShrubberyCreationForm("Bob");
		Form* form_r = new RobotomyRequestForm("Henry");
		Form* form_p = new PresidentialPardonForm("Thierry");

		std::cout << *form_s << std::endl;
		std::cout << *form_r << std::endl;
		std::cout << *form_p << std::endl;

		a.signForm(*form_s);
		a.executeForm(*form_s);

		a.signForm(*form_r);
		a.executeForm(*form_r);

		a.signForm(*form_p);
		a.executeForm(*form_p);

		delete form_s;
		delete form_r;
		delete form_p;
	} catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;	
	} catch (Form::NotSignedException &e) {
		std::cout << e.what() << std::endl;	
	} catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;	
	}
}