#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
    std::cout <<   "constructor called" << std::endl;
    return;
}

Zombie::~Zombie()
{
      std::cout << this->name << ": destructor called" << std::endl;
    return;
}

void    Zombie::annouce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ... " << std::endl;
    return;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
    return;
}
