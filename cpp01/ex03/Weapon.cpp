#include "Weapon.hpp"


Weapon::Weapon(std::string type): Type(type)
{
    std::cout << "Weapon constructor called" << std::endl;
    return;
}

Weapon::~Weapon()
{
    std::cout << "destructor called" << std::endl;
    return;
}

void    Weapon::setType(std::string input)
{
    if (input == "")
        this->Type = "No Type set for this Human";
    this->Type = input;
}

const std::string    &Weapon::getType()
{
    return (this->Type);
}
