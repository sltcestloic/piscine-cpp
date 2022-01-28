#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat a("John", 50);
    Bureaucrat b("Bob", 25);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    Form form_a("Form A", 25, 30);
    Form form_b("Form B", 40, 20);

	std::cout << form_a << std::endl;
	std::cout << form_b << std::endl;

    try {
        a.signForm(form_a);
    } catch (Form::GradeTooLowException &ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        b.signForm(form_a);
    } catch (Form::GradeTooLowException &ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        a.signForm(form_b);
    } catch (Form::GradeTooLowException &ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        b.signForm(form_b);
    } catch (Form::GradeTooLowException &ex) {
        std::cout << ex.what() << std::endl;
    }
}