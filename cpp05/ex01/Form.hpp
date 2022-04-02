#ifndef FORM_HPP
#define FORM_HPP
# include <stdexcept>
#include "Bureaucrate.hpp"

class Bureaucrate;

class Form
{
private:
	Form(void);
    std::string const _Name;
    bool    _Signe;
    int const grade_S;
    int const grade_E;
public:
    Form(std::string const &, int, int);
    Form(Form const &);
    Form  &  operator=(Form const & rhs);
    virtual ~Form();
    void	beSigned(Bureaucrate const & bureaucrate);

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

std::ostream &	operator<<(std::ostream & o, Form const & rhs);



#endif