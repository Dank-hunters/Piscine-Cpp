#include "Form.hpp"

AForm::AForm(int exec, int sign) : grade_S(exec), grade_E(sign)
{
}


AForm::~AForm()
{
}

AForm::AForm(std::string const &target, std::string const & name, int sign, int exec) : _target(target), _Name(name),  _Signe(false), grade_S(sign), grade_E(exec)
{
	if (this->grade_S <= 0 || this->grade_E <= 0)
		throw (GradeTooHighExep());
	if (this->grade_S > 150 || this->grade_E > 150)
		throw (GradeTooLowExep());
}

AForm  &  AForm::operator=(AForm const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_Signe = rhs._Signe;
    }   
    return *this;
}

std::string const	AForm::getName(void) const{

	return this->_Name;
}

int	AForm::getGradeToSign(void) const{

	return this->grade_S;
}

int	AForm::getGradeToExecute(void) const{

	return this->grade_E;
}

bool	AForm::getSignature(void) const{

	return this->_Signe;
}

void	AForm::beSigned(Bureaucrat const & bureaucrate){

	if (bureaucrate.getGrade() > this->grade_S)
		throw (GradeTooLowExep());
	else 
		this->_Signe = true;
	return ;
}

void	AForm::execute(Bureaucrat const & execute) const
{
	if (this->_Signe == false)
		throw (UnsignedFormExep());
	if (this->grade_E < execute.getGrade())
		throw (GradeTooLowExep());
	return ;
}
std::string	AForm::getTarget(void) const{

	return this->_target;
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs){

	o << "<" <<  std::boolalpha 
		<< rhs.getName() << "> form grade needed to sign <"
		<< rhs.getGradeToSign() << "> grade needed to execute <"
		<< rhs.getGradeToExecute() << "> signature status <"
		<< rhs.getSignature() << ">"
	<< std::endl;
	return o;
}
