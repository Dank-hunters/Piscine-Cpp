#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : AForm(target, "presidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):  AForm(src.getTarget(), src.getName(), 25, 5){

	*this = src;
	return;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){

	this->AForm::operator=(rhs);
	return *this;
}


void    PresidentialPardonForm::execute(Bureaucrat const & exec) const
{
	AForm::execute(exec);
  /* if (this->getSignature() == false)
		throw (UnsignedFormExep());
	else if (this->getGradeToExecute() < exec.getGrade())
		throw (GradeTooLowExep());
    else */
		std::cout << "<" << this->getTarget() << "> has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}