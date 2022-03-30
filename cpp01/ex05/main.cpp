#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string input;
    for (size_t i = 0; i < 15; i++)
    {
        getline(std::cin, input);
        harl.complain(input);
    }
    return(0);



}