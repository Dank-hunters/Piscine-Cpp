#include "Bureaucrate.hpp"

void     Bureaucrate::setName(std::string name){
    this->Name = name;
}

Bureaucrate::Bureaucrate(Bureaucrate const & src)
{
    *this = src;
}

Bureaucrate::Bureaucrate(std::string const & name, int i)  : Name(name), Grade(i)
{
	if (this->Grade <= 0)
		throw (GradeTooHighExep());
	if (this->Grade > 150)
		throw (GradeTooLowExep());
}


Bureaucrate::~Bureaucrate()
{
}


std::string     Bureaucrate::getName()const
{
    return (this->Name);
}

int     Bureaucrate::getGrade()const
{
    return (this->Grade);
}
void     Bureaucrate::setGrade(int grade){
    if (grade > 150)
        throw(GradeTooHighExep());
    if (grade < 0)
        throw(GradeTooLowExep());
    this->Grade = grade;
}


Bureaucrate  &  Bureaucrate::operator=(Bureaucrate const & rhs)
{
    if (this != &rhs)
    {
    this->Name = rhs.getName();
    this->Grade = rhs.getGrade();
    }
    return (*this);
}

 void            Bureaucrate::upGrade()
 {
     if (this->Grade - 1 <= 0)
        throw(GradeTooHighExep());
	this->Grade--;
	return ;
 }
void            Bureaucrate::downGrade()
{
	if (this->Grade + 1 > 150)
		throw(GradeTooLowExep());
	this->Grade++;
	return ;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrate const & rhs){

	o << "<" << rhs.getName() << "> bureaucrat grade <" << rhs.getGrade() << ">";
	return o;
}

void	Bureaucrate::signForm(Form & form){

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