#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), Wep(nullptr)
{
  
 std::cout << "HumanB : constructor called" << std::endl;
    return;
}

HumanB::~HumanB()
{
    std::cout << "HumanB : destructor called" << std::endl;
    return;
}


std::string    HumanB::getName()
{
    return(this->name);
}


void            HumanB::setWeapon(Weapon &wep)
{
    this->Wep = &wep;
}

void        HumanB::attack()
{
    std::cout << getName() << " attack with their " << this->Wep->getType() << std::endl;

}