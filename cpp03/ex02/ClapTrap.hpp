#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
protected :
        std::string Name;
        int         Hit_P;
        int         energy_P;
        int         Attack_Dam;    
    
        int Base_Max_HP;    
        int Base_Max_Energy ;   
public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string     getName() const;


    ClapTrap(ClapTrap const & src);                                         //constructeur copy                 forme canonique
    ClapTrap &  operator=(ClapTrap const & rhs);                      //operateur d assignation
    ClapTrap();
    ClapTrap(std::string);
    ~ClapTrap();
};





#endif