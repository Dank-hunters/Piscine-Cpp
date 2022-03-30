#include "Harl.hpp"

Harl::Harl(/* args */)
{
    this->levels[0] = "DEBUG";
    this->levels[1] = "INFO";
    this->levels[2] = "WARNING";
    this->levels[3] = "ERROR";
    this->func[0] = &debug;
    this->func[1] = &info;
    this->func[2] = &warning;
    this->func[3] = &error;
    }

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
        
        void complain( std::string level )
        {
            for (size_t i = 0; i < 4; i++)
            {
                level.compare(this->levels[i])
                (this->*func[i])();
            }
        }