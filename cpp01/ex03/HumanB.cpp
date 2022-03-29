#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
 std::cout << "HumanB : constructor called" << std::endl;
    return;
}

HumanB::~HumanB()
{
    std::cout << "HumanB : destructor called" << std::endl;
    return;
}

void       HumanB::setName(std::string name)
{
    this->name = name;
    return;
}

std::string    HumanB::getName()
{
    return(this->name);
}
void            HumanB::setWeapon(std::string wep)
{
    this->Wep.setType(wep);
}
void        HumanB::attack()
{
    std::cout << getName() << " attack with their " << this->Wep.getType() << std::endl;

}


HumanB  initSoldierB(std::string weapon, std::string name)
{
    HumanB Soldier;
    Soldier.setWeapon(weapon);
    Soldier.setName(name);
    return (Soldier);
}
