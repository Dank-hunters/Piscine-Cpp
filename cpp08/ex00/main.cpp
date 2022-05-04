#include "easyfind.hpp"
#include "easyfind.tpp"
int main()
{
    std::list<int>  lst;

    for (size_t i = 0; i < 20; i++)
    {
        lst.push_back(i);
    }
    std::cout << "try out of range" << std::endl;
    try
    {
    std::cout << easyfind(lst, 32) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "try in range" << std::endl;

     try
    {
    std::cout << easyfind(lst, 6) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return(0);
}