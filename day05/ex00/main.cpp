#include "Bureaucrat.hpp"

int main() {
    Bureaucrat a("John", 150);
    Bureaucrat b("Bob", 1);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    try {
        a.decreaseGrade();
    } catch (Bureaucrat::GradeTooLowException &ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        b.increaseGrade();
    } catch (Bureaucrat::GradeTooHighException &ex) {
        std::cout << ex.what() << std::endl;
    }
}