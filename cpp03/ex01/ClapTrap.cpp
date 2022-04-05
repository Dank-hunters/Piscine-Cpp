#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), Hit_P(10),  energy_P(10), Attack_Dam(0)
{
    Base_Max_HP  = 10;
    Base_Max_Energy = 10;
    std::cout << this->Name << " : ClapTrap constructor be called" << std::endl;
}
ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->Name << " : ClapTrap destructor be called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const & src)    
{
       *this = src;

}
std::string     ClapTrap::getName() const
{
    return(this->Name);

}
ClapTrap  &  ClapTrap::operator=(ClapTrap const & rhs) 
{
    std::cout << "Copy assignment claptrap operator called" << std::endl;
    if (this != &rhs)
        this->Name = rhs.getName();
    return *this;
}

void    ClapTrap::attack(const std::string& target){
    if (this->energy_P == this->Base_Max_Energy)
        std::cout << this->Name << " can't attack, he have to sleep sorry !" << std::endl;
    else if (this->Hit_P > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_Dam << " points of damage!" << std::endl;
      this->energy_P -= 1;
    }
    else
        std::cout << "ClapTrap " << this->Name << " have to repaired himself to do anithing else";

}
void ClapTrap::takeDamage(unsigned int amount){
    if (this->Hit_P > 0)
    {
        this->Hit_P -= amount;
        if (this->Hit_P < 0)
            this->Hit_P = 0;
        std::cout << this->Name << " take " << amount << " dammage." << std::endl;
        std::cout << "Now he got : " << this->Hit_P << " Hit point ";
        if (this->Hit_P == 0)
            std::cout << "so he have to repaired himselh." << std::endl;
        else
            std::cout << "." << std::endl;
    }
    else
        std::cout << "sorry " << this->Name << " can't take more dammage, he is yep at 0 !" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){ 
    if (this->energy_P == 0)
        std::cout << this->Name << " can't repaired himself, he have to sleep sorry !" << std::endl;
    else if (this->Hit_P < this->Base_Max_HP)
    {
        std::cout << this->Name << " repaired himself from " << amount << " Hit point" << std::endl;
        this->Hit_P += amount;
        if (this->Hit_P > this->Base_Max_HP)
        {
               std::cout << this->Name << " can't have more than " << this->Base_Max_HP << " , so he just have " << this->Base_Max_HP << " HP now" << std::endl;
                this->Hit_P = 10;
        }
        else 
            std::cout << "Now he got : " << this->Hit_P << " Hit point" << std::endl;
        this->energy_P -= 1;
    }
    else
        std::cout << this->Name << " can't have more than 10 HP" << std::endl;
}


        