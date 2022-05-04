#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <iomanip>
#include <math.h>       
#include <limits.h>


class interpreter
{
private:
    double  _aff;
	std::string	ifc;
public:
  //  void    AnalyseInput(const char *);
    
    void    affChar() const;
    void    affInt() const;
    void    affDouble() const;
    void    affFloat() const;
    
    void    aff();

    interpreter &operator=(interpreter const &rhs);
    interpreter();
    interpreter(std::string const & av);
    ~interpreter();
    
            /*      execption       */
    class WrongArgument: public std::exception
    {
        public:
        virtual const char *what() const throw()
        {
            return ("This input cant be analyse by INTERPRETOR.");
        }
    };
};

std::ostream  &operator<<(std::ostream & o, interpreter const &rhs);



#endif
