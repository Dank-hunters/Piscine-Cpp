#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
# include <stdexcept>
#include <fstream>
#include "Form.hpp"

class AForm;

class Bureaucrat
{
private:

    std::string Name;
    int Grade;
public:

    void	signForm(AForm & form);

    Bureaucrat(std::string const &, int);
    Bureaucrat(Bureaucrat const &);
    virtual ~Bureaucrat();
    virtual Bureaucrat  &  operator=(Bureaucrat const & rhs);
    void					execForm(AForm &form);
    virtual 

    int             getGrade()const;
    std::string     getName()const;
    void             setGrade(int);
    void            setName(std::string);
    void            upGrade();
    void            downGrade();

    class GradeTooLowExep : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return("Grade Too Low");
        }
    };
    class GradeTooHighExep : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return("Grade Too High");
        }
    };
       class UnsignedFormException : public std::exception
    {
	public:
		virtual const char * what() const throw(){
			return ("Unsigned form");
		}
	};

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif