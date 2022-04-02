#ifndef BUREAUCRATE_HPP
#define BUREAUCRATE_HPP

#include <iostream>
# include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrate
{
private:

    std::string Name;
    int Grade;
public:

    void	signForm(Form & form);

    Bureaucrate(std::string const &, int);
    Bureaucrate(Bureaucrate const &);
    virtual ~Bureaucrate();
    virtual Bureaucrate  &  operator=(Bureaucrate const & rhs);

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

};

std::ostream &	operator<<(std::ostream & o, Bureaucrate const & rhs);

#endif