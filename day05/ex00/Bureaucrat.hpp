#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
	private:
		std::string _name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &ref);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &ref);

		std::string getName(void) const;
        int getGrade(void) const;
        void increaseGrade(void);
        void decreaseGrade(void);
};

#endif