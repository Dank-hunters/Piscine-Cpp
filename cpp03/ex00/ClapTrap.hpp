#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
        std::string Name;
        int         Hit_P;
        int         energy_P;
        int         Attack_Dam;    
    
public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string     getName() const;

        ClapTrap(ClapTrap const & src);                                         //constructeur copy                 forme canonique
        ClapTrap &  operator=(ClapTrap const & rhs);                      //operateur d assignation
        ClapTrap(std::string);                                                  // contructeur par default
        ~ClapTrap();
};





#endif