#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form::Form("Shrubbery Creation", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref) : Form::Form(ref) {
    this->_target = ref._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	if (!this->isSigned())
		throw Form::NotSignedException();

    std::ofstream file;
    std::string targetName = this->_target;
    targetName.append("_shrubbery");

    file.open(targetName);
    for (int i = 0; i < 5; i++) {
        file << "         v              " << std::endl;
        file << "        >X<             " << std::endl;
        file << "         A              " << std::endl;
        file << "        d$b             " << std::endl;
        file << "      .d\\$$b.           " << std::endl;
        file << "    .d$i$$\\$$b.         " << std::endl;
        file << "       d$$@b            " << std::endl;
        file << "      d\\$$$ib           " << std::endl;
        file << "    .d$$$\\$$$b          " << std::endl;
        file << "  .d$$@$$$$\\$$ib.       " << std::endl;
        file << "      d$$i$$b           " << std::endl;
        file << "     d\\$$$$@$b          " << std::endl;
        file << "  .d$@$$\\$$$$$@b.       " << std::endl;
        file << ".d$$$$i$$$\\$$$$$$b.     " << std::endl;
        file << "        ###             " << std::endl;
        file << "        ###             " << std::endl;
        file << "        ###             " << std::endl;
    }
}