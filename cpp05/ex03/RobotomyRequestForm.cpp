#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & name) : AForm(name, "Robot request", 72, 45)
{
	srand(time(NULL));
}


RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src.getName(), src.getTarget(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
this->AForm::operator=(rhs);
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & exec) const
{
	AForm::execute(exec);

	std::srand(std::time(nullptr));
	std::cout << "* Some drilling noises *" << std::endl << "<" << this->getTarget() << ">";
	if (std::rand() % 2)
		std::cout << " has been robotomized successfully" << std::endl;
	else
		std::cout << "'s robotomy failed" << std::endl;
	return ;

}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "Form " << i.getName() << " need grade : " << std::endl;
	o << " - to sign : " << i.getGradeToSign() << std::endl;
	o << " - to exec : " << i.getGradeToExecute() << std::endl;
	o << "Status is :";
	if (i.getSignature())
	{
		o << " signed" << std::endl;
	}
	else
	{
		o << " not signed" << std::endl;
	}
	return o;
}