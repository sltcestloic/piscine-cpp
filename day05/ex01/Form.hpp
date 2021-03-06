#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
    private:
        std::string _name;
        bool _signed;
        int _grade_to_sign;
        int _grade_to_exec;
    public:
        Form();
		Form(std::string name, int to_sign, int to_exec);
		Form(Form const &ref);
		~Form();

		Form &beSigned(Bureaucrat &bureaucrat);
		
		std::string	getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool isSigned() const;

		Form &operator=(Form const &ref);

		class GradeTooHighException : std::exception {
			public:
				const char *what() const throw() {
					return "Failed to sign form: bureaucrat grade is too high !";
				}
		};
		class GradeTooLowException : std::exception {
			public:
				const char *what() const throw() {
					return "Failed to sign form: bureaucrat grade is too low !";
				}
		};
};

std::ostream &operator<<(std::ostream& os, Form const &ref);

#endif