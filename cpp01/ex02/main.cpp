#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <sstream>

int main()
{
    std::string Toshow = "HI THIS IS A BRAIN";
    std::string *stringPTR = &Toshow;
    std::string &stringREF = Toshow;
    std::cout << "Memory adress of original string : " << &Toshow << std::endl;
    std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;
    
    std::cout << std::endl;
    std::cout << "Value of original string : " << Toshow << std::endl;
    std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
    return (0);
}