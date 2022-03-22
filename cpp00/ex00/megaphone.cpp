#include <iostream>
#include <string>
#include <ctype.h>
int main(int ac, char **av)
{
    char c;
    (void)ac;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; av[i]; i++)
        {   
            for(int u = 0; av[i][u]; u++)
            {
                c = toupper(av[i][u]);
                std::cout << c;
            }
        std::cout << " ";
        }
        std::cout << std::endl;
    }


    return (0);
}