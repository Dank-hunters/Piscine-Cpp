#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Bureaucrate.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public AForm
{

    private:
	    PresidentialPardonForm(void);
        std::string _target;
    public:
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        virtual ~PresidentialPardonForm();
	    
        PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);

        virtual void    execute(Bureaucrat const &) const;    
};




#endif