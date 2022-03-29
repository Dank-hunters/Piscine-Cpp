#include "Weapon.hpp"


Weapon::Weapon(/* args */)
{
  //  std::cout << "constructor called" << std::endl;
    return;
}

Weapon::~Weapon()
{
    //std::cout << "destructor called" << std::endl;
    return;
}

void    Weapon::setType(std::string input)
{
    this->Type = input;
}

std::string    Weapon::getType()
{
    return (this->Type);
}