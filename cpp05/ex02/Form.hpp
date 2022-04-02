#ifndef FORM_HPP
#define FORM_HPP
# include <stdexcept>
#include "Bureaucrate.hpp"

class Bureaucrate;

class AForm
{
private:
	AForm(void);
    std::string const _Name;
    bool    _Signe;
    int const grade_S;
    int const grade_E;
public:
    AForm(std::string const &, int, int);
    AForm(AForm const &);
    AForm  &  operator=(AForm const & rhs);
    virtual ~Form();
    void	beSigned(Bureaucrate const & bureaucrate) = 0;

	std::string const	getName(void) const;
	int 				getGradeToSign(void) const;
	int 				getGradeToExecute(void) const;
	bool				getSignature(void) const;

    
	
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

};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);



#endif