#ifndef FORM_HPP
#define FORM_HPP
# include <stdexcept>
#include "Bureaucrate.hpp"

class Bureaucrat;

class AForm
{
protected :
	AForm(int, int);
private:
		std::string			_target;
    std::string const _Name;
    bool    _Signe;
    int const grade_S;
    int const grade_E;
public:
    AForm(std::string const & target, std::string const &, int, int);
    AForm(AForm const &);
    AForm  &  operator=(AForm const & rhs);
    virtual ~AForm();
    virtual void	beSigned(Bureaucrat const & bureaucrate);
	std::string	getTarget(void) const;
	std::string const	getName(void) const;
	int 				getGradeToSign(void) const;
	int 				getGradeToExecute(void) const;
	bool				getSignature(void) const;
	virtual void	execute(Bureaucrat const & executor) const = 0;
    
	
	class 	GradeTooHighException : public std::exception{
	public:
		virtual const char *	what() const throw(){
			return ("Grade too high");
		}
	};
	class GradeTooLowException : public std::exception{
	public:
		virtual const char *	what() const throw(){
			return ("Grade too low");
		}
	};
	class UnsignedFormException : public std::exception{
	public:
		virtual const char *	what() const throw(){
			return ("Unsigned form");
		}
	};

};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);



#endif