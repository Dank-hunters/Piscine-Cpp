#include "Zombie.hpp"
int main()
{
    Zombie *t;
    
    std::string input;

    std::getline(std::cin, input);
    t = newZombie(input);
    t->annouce();

    std::cout << "new test : " << std::endl;

    std::getline(std::cin, input);
    randomChump(input);


    delete t;
    return(0);

}