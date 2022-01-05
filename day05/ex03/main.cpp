#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat a("John", 1);
	Intern intern;

    std::cout << a << std::endl;

    try {
		Form* form_s = intern.makeForm("Shrubbery Creation", "Bob");
		Form* form_r = intern.makeForm("Robotomy Request", "Henry");
		Form* form_p = intern.makeForm("Presidential Pardon", "Thierry");

		std::cout << *form_s << std::endl;
		std::cout << *form_r << std::endl;
		std::cout << *form_p << std::endl;

		a.signForm(*form_s);
		a.executeForm(*form_s);

		a.signForm(*form_r);
		a.executeForm(*form_r);

		a.signForm(*form_p);
		a.executeForm(*form_p);

		std::cout << *form_s << std::endl;
		std::cout << *form_r << std::endl;
		std::cout << *form_p << std::endl;

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