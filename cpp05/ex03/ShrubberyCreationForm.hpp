#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include "Form.hpp"
#include "Bureaucrate.hpp"


class ShrubberyCreationForm : public AForm{

private:

	ShrubberyCreationForm(void);
public:

	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	virtual	~ShrubberyCreationForm(void);

	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);

	virtual void	execute(Bureaucrat const & executor) const;


};

#endif