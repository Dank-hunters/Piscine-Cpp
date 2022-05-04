#include "interpreter.hpp"

int main(int ac,const char **av)
{
	std::string c = "0";
	std::cout << std::atof(c.c_str()) << std::endl;
    if (ac == 2)
	{
        interpreter interpretor(av[1]);
        interpretor.aff();
	}
	else
    {
	  	throw (interpreter::WrongArgument());
    	return (0);
    }
    return(0);
}
