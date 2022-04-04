#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"

class Intern
{
public:

    Intern(/* args */);
    virtual ~Intern();
    
\

    //AForm *    (Intern::*_Make[3])(void) ;
    AForm *  MakeForm(std::string const FormName, std::string const FormTarget);

private:
    Intern(Intern const & src);
    Intern &	operator=(Intern const & rhs);
    typedef AForm* 	(Intern::*ConstructorPointer)(std::string const &);
    std::string _type[3];

    ConstructorPointer	_Make[3];
	AForm*	MakePresidentialPardon(std::string const & target);
	AForm*	MakeRobotomyRequest(std::string const & target);
	AForm*	MakeShruberyCreation(std::string const & target);
    /* data */

};


#endif