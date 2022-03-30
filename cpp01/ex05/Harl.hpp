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
        static std::string     complain_lvl[4];
       // void (*func[4]);
         void debug( void ) ;
         void info( void );
         void warning( void );
         void error( void );
        static void     (Harl::*complain_fct[4])(void) ;
public:
        Harl(/* args */);
        ~Harl();
        void complain( std::string level );
};

#endif
