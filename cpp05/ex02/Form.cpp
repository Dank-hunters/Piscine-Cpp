#include "Form.hpp"

Form::Form(std::string const & name, int sign, int exec) : _Name(name),  _Signe(false), grade_S(sign), grade_E(exec)
{
	if (this->grade_S <= 0 || this->grade_E <= 0)
		throw (GradeTooHighException());
	if (this->grade_S > 150 || this->grade_E > 150)
		throw (GradeTooLowException());
}

Form::~Form()
{
}

Form  &  Form::operator=(Form const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_Signe = rhs._Signe;
    }   
    return *this;
}

std::string const	Form::getName(void) const{

	return this->_Name;
}

int	Form::getGradeToSign(void) const{

	return this->grade_S;
}

int	Form::getGradeToExecute(void) const{

	return this->grade_E;
}

bool	Form::getSignature(void) const{

	return this->_Signe;
}

void	Form::beSigned(Bureaucrate const & bureaucrate){

	if (bureaucrate.getGrade() > this->grade_S)
		throw (GradeTooLowException());
	this->_Signe = true;
	return ;
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs){

	o << "<" <<  std::boolalpha 
		<< rhs.getName() << "> form grade needed to sign <"
		<< rhs.getGradeToSign() << "> grade needed to execute <"
		<< rhs.getGradeToExecute() << "> signature status <"
		<< rhs.getSignature() << ">"
	<< std::endl;
	return o;
}