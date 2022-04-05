#include "Bureaucrate.hpp"

void     Bureaucrat::setName(std::string name){
    this->Name = name;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    *this = src;
}

Bureaucrat::Bureaucrat(std::string const & name, int i)  : Name(name), Grade(i)
{
	if (this->Grade <= 0)
		throw (GradeTooHighExep());
	if (this->Grade > 150)
		throw (GradeTooLowExep());
}


Bureaucrat::~Bureaucrat()
{
}


std::string     Bureaucrat::getName()const
{
    return (this->Name);
}

int     Bureaucrat::getGrade()const
{
    return (this->Grade);
}
void     Bureaucrat::setGrade(int grade){
    if (grade > 150)
        throw(GradeTooHighExep());
    if (grade < 0)
        throw(GradeTooLowExep());
    this->Grade = grade;
}


Bureaucrat  &  Bureaucrat::operator=(Bureaucrat const & rhs)
{
    if (this != &rhs)
    {
    this->Name = rhs.getName();
    this->Grade = rhs.getGrade();
    }
    return (*this);
}

 void            Bureaucrat::upGrade()
 {
     if (this->Grade - 1 <= 0)
        throw(GradeTooHighExep());
	this->Grade--;
	return ;
 }
void            Bureaucrat::downGrade()
{
	if (this->Grade + 1 > 150)
		throw(GradeTooLowExep());
	this->Grade++;
	return ;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs){

	o << "<" << rhs.getName() << "> bureaucrat grade <" << rhs.getGrade() << ">";
	return o;
}

void	Bureaucrat::signForm(AForm & form){
	try{
		form.beSigned(*this);
		std::cout << "<" << this->Name << "> signs <" << form.getName() << ">" << std::endl;
	}
	catch(std::exception & e){
		std::cout << "<" << this->Name << "> cannot sign <"
			<< form.getName() << "> because <"
			<< e.what() << ">"
		<< std::endl;
	}
}

void					Bureaucrat::execForm(AForm &form){
	try 
	{
		form.execute(*this);
			std::cout << Name << " exec " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << Name << " cannot exec " << form.getName() << " because " << e.what() << std::endl;
	}
}


