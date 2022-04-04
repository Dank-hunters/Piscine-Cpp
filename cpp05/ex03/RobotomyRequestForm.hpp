#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrate.hpp"

class RobotomyRequestForm : public AForm
{

	private:
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string const & name);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		virtual void execute(Bureaucrat const &ref) const;

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif
