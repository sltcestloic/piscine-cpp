#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &ref);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &ref);

		std::string getName(void) const;
        int getGrade(void) const;
        void increaseGrade(void);
        void decreaseGrade(void);

		void signForm(Form const &form);

		class GradeTooHighException : public std::exception {
            public:
                const char*	what() const throw() {
					return "Failed to change grade: the requested grade is too high !";
				}
        };

        class GradeTooLowException : public std::exception {
            public:
                const char*	what() const throw() {
					return "Failed to change grade: the requested grade is too low !";
				}
        };
};

std::ostream &operator<<(std::ostream& os, Bureaucrat const &ref);

#endif