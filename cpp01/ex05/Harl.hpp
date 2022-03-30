#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <sstream>

class Harl
{
private:
        std::string levels[4];
        void (*func[4]);
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
public:
        Harl(/* args */);
        ~Harl();
        void complain( std::string level )
};


