#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

std::string     Harl::complain_lvl[4] = {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR",
};
/*
void    (Harl::*complain_fct[4])(void) = 
{
&Harl::debug,
&Harl::info,
&Harl::warning,
&Harl::error,
};*/

void    (Harl::*(Harl::complain_fct)[])(void) = {
&Harl::debug,
&Harl::info,
&Harl::warning,
&Harl::error
};

Harl::~Harl()
{
}

        void Harl::debug( void )
        {
            std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
            return;

        }
        void Harl::info( void )        {
            std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
            return;
        }
        void Harl::warning( void )        {
            std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
            return;
        }
        void Harl::error( void )        {
            std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
            return;
        }
        
        void Harl::complain( std::string level )
        {
            for (size_t i = 0; i < 4; i++)
            {
                if (complain_lvl[i] == level)
                    (this->*complain_fct[i])();
            }
        }