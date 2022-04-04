#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	this->_type[0] = "PresidentialPardonForm";
	this->_Make[0] = &Intern::MakePresidentialPardon;
	this->_type[1] = "RobotomyRequestForm";
	this->_Make[1] = &Intern::MakeRobotomyRequest;
	this->_type[2] = "ShrubberyCreationForm";
	this->_Make[2] = &Intern::MakeShruberyCreation;
}

Intern::~Intern()
{
    return;
}


AForm   *Intern::MakeForm(std::string name, std::string target)
{
    for (size_t i = 0; i < 3; i++)
    {
        if (this->_type[i] == name)
        {
            std::cout << "Inern create " << this->_type[i] << std::endl;
            return (this->*_Make[i])(target);
        }
    }
    std::cout << "Intern can't create " << name << " it's not a know Form" << std::endl;
    return (NULL);
    
    /*AForm(target, name);
    return (AForm);*/
}

AForm*   Intern::MakePresidentialPardon(std::string const & target)
{
    return new PresidentialPardonForm(target);
}

AForm*   Intern::MakeRobotomyRequest(std::string  const &  target)
{
    return new RobotomyRequestForm(target);

}
AForm*   Intern::MakeShruberyCreation(std::string  const &  target)
{
    return new ShrubberyCreationForm(target);
}