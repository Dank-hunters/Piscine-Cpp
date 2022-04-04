#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target):AForm(target, "ShrubberyCreationForm", 145, 137){

	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):AForm(src.getTarget(), src.getName(), 145, 137){

	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){

	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){

	this->AForm::operator=(rhs);
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & exec) const{

	if (this->getSignature() == false)
		throw (UnsignedFormException());
	else if (this->getGradeToExecute() < exec.getGrade())
		throw (GradeTooLowException());
    else 
	{
	std::string		tmp(this->getTarget() + "_shrubbery");
	std::ofstream	oFs(tmp.c_str());

	oFs << "             .o00o" << std::endl
		<< "           o000000oo" << std::endl
		<< "           o000000oo" << std::endl
		<< "          00000000000o" << std::endl
		<< "         00000000000000" << std::endl
		<< "      oooooo  00000000  o88o" << std::endl
		<< "   ooOOOOOOOoo  ```''  888888" << std::endl
		<< " OOOOOOOOOOOO'.qQQQQq. `8888'" << std::endl
		<< "oOOOOOOOOOO'.QQQQQQQQQQ/.88'" << std::endl
		<< "OOOOOOOOOO'.QQQQQQQQQQ/ /q" << std::endl
		<< " OOOOOOOOO QQQQQQQQQQ/ /QQ" << std::endl
		<< "   OOOOOOOOO `QQQQQQ/ /QQ'" << std::endl
		<< "     OO:F_P:O `QQQ/  /Q'" << std::endl
		<< "        \\\\. \\ |  // |" << std::endl
		<< "        d\\ \\\\\\|_////" << std::endl
		<< "        qP| \\ _' `|Ob" << std::endl
		<< "           \\  / \\  \\Op" << std::endl
		<< "           |  | O| |" << std::endl
		<< "   _       /\\. \\_/ /\\" << std::endl
		<< "    `---__/|_\\   //|  __" << std::endl
		<< "          `-'  `-'`-'-'"
	<< std::endl;

	oFs.close();
	}
	return ;
}