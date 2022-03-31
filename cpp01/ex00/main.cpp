#include "Zombie.hpp"
int main()
{
    Zombie *t;
    
    std::string input;

    std::cout << "first test with new zombien, then announce: " << std::endl;
    std::getline(std::cin, input);
    t = newZombie(input);
    t->annouce();

    std::cout << "second test with randomchump: " << std::endl;

    std::getline(std::cin, input);
    randomChump(input);


    delete t;
    return(0);

}
