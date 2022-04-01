#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) 
{
    this->Base_Max_HP  = 100;
    this->Base_Max_Energy = 100;
    this->Name = name;
    this->Hit_P = 100;
    this->energy_P = 100;
    this->Attack_Dam = 30;
    std::cout << this->Name << " : FragTrap constructor be called" << std::endl;
}
FragTrap  &  FragTrap::operator=(FragTrap const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->Name = rhs.getName();
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << this->Name << " : FragTrap destructor be called" << std::endl;
}

void    FragTrap::attack(const std::string& target){
    if (this->energy_P == 0)
        std::cout << this->Name << " can't attack, he have to sleep sorry !" << std::endl;
    else if (this->Hit_P > 0)
    {
        std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_Dam << " points of damage!" << std::endl;
      this->energy_P -= 1;
    }
    else
        std::cout << "FragTrap " << this->Name << " have to repaired himself to do anithing else";

}

void    FragTrap::highFivesGuys() const{
    std::string input;
    std::cout << "Hi, i'm " << this->Name << ". would u like to High Fives me ? :)" << std::endl;
    getline(std::cin, input);
    if (input == "ouais mon gars" || input == "azy gros" || input == "yes come on my boy" || input == "yes" || input == "oui" || input == "ouais")
    {
        std::cout << " * CLAP *" << std::endl;
        std::cout << "Thanks my bro" << std::endl;
    }
    else
    {
       std::cout << "* CROOOOOAAAAAAA *" << std::endl;
        std::cout << "- " << this->Name << " is crying :'( and left you alone in a dark room" << std::endl;    
    }
}