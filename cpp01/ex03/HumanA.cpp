#include "HumanA.hpp"


HumanA::HumanA(/* args */)
{
 std::cout << "HumanA : constructor called" << std::endl;
    return;
}

HumanA::~HumanA()
{
    std::cout << "HumanA : destructor called" << std::endl;
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
    std::cout << getName() << " attack with their " << this->Wep.getType() << std::endl;

}

void            HumanA::setWeapon(std::string wep)
{
    this->Wep.setType(wep);
}

HumanA   initSoldierA(std::string weapon, std::string name)
{
    HumanA Soldier;
    Soldier.setWeapon(weapon);
    Soldier.setName(name);
    return (Soldier);
}
