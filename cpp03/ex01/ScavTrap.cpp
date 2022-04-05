#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){
    this->Base_Max_HP  = 100;
    this->Base_Max_Energy = 50;
    this->Name = name;
    this->Hit_P = 100;
    this->energy_P = 50;
    this->Attack_Dam = 20;
    std::cout << this->Name << " : ScavTrap constructor be called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->Name << " : ScavTrap destructor be called" << std::endl;
}
ScavTrap  &  ScavTrap::operator=(ScavTrap const & rhs) 
{
    std::cout << "Copy assignment Scavtrap operator called" << std::endl;
    if (this != &rhs)
        this->Name = rhs.getName();
    return *this;
}


void    ScavTrap::attack(const std::string& target){
    if (this->energy_P == 0)
        std::cout << this->Name << " can't attack, he have to sleep sorry !" << std::endl;
    else if (this->Hit_P > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_Dam << " points of damage!" << std::endl;
      this->energy_P -= 1;
    }
    else
        std::cout << "ScavTrap " << this->Name << " have to repaired himself to do anithing else";

}


void    ScavTrap::guardGate() const{
    std::cout << "ScavTrap " << this->Name << " entered in mode Gate Keeper" << std::endl;
}
