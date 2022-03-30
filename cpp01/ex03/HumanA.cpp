#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &wep): name(name), Wep(&wep)
{
    std::cout << "HumanA : constructor called" << std::endl;
    return;
}

HumanA::~HumanA()
{
    std::cout << this->name << ": HumanA : destructor called" << std::endl;
    return;
}

void       HumanA::setName(std::string name)
{
    this->name = name;
    return;
}

std::string    HumanA::getName()
{
    return(this->name);
}

void        HumanA::attack()
{
    std::cout << getName() << " attack with their " << this->Wep->getType() << std::endl;

}

std::string        HumanA::getWeapon()
{
    return (this->Wep->getType());
}