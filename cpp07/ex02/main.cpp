
#include "Array.hpp"

#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    Array<int> mirror(MAX_VAL);
   // int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        //mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
	mirror = numbers;
	std::cout << "we build an array number and mirror from size of 750 and we copy number in mirror" << std::endl;
	std::cout << "we test if all is copy" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		else if (i ==  MAX_VAL - 1)
			std::cout << "all rightly copy " << std::endl;
    }
    try
    {
		std::cout << "try number[-2] = 0 :" << std::endl;
        numbers[-2] = 0;
		std::cout << "thats work " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		std::cout << "try number[749] = 0 :" << std::endl;
        numbers[749] = 0;
		std::cout << "thats work " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	try
    {
		std::cout << "try number[750] = 0 :" << std::endl;
        numbers[MAX_VAL] = 0;
		std::cout << "thats work " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    //delete [] mirror;//
    return 0;
}
