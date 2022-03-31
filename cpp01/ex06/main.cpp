#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    int i = 7;
    std::string s1;
    if (ac != 2)
        std::cout << "Wrong number of parametre" << std::endl;
    s1 = av[1];
    if (s1 == "DEBUG")
        i = 0;
    else if (s1 == "INFO")
        i = 1;
    else if (s1 == "WARNING")
       i = 2;
    else if (s1 == "ERROR")
        i = 3;
    else
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (1);
    }
    switch (i){
        case(0) :
            harl.complain("DEBUG");
        case(1) :
            harl.complain("INFO");
        case(2) :
            harl.complain("WARNING");
        case(3) :
            harl.complain("ERROR");
        break;
    }
    return(0);
}