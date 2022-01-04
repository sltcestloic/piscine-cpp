#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat a("John", 50);

    std::cout << a << std::endl;

    try {
		Form formS = ShrubberyCreationForm("Bob");
		Form formR = RobotomyRequestForm("Henry");
		Form formP = PresidentialPardonForm("Thierry");
		std::cout << formS << std::endl;
		std::cout << formR << std::endl;
		std::cout << formP << std::endl;

		a.signForm(formS);
		a.executeForm(formS);

		a.signForm(formR);
		a.executeForm(formR);

		a.signForm(formP);
		a.executeForm(formP);

		std::cout << formS << std::endl;
		std::cout << formR << std::endl;
		std::cout << formP << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Error: " << e.what() << std::endl;	
	} catch (Form::NotSignedException &e) {
		std::cout << "Error: " << e.what() << std::endl;	
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Error: " << e.what() << std::endl;	
	}
}