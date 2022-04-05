#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap : public ClapTrap
{
    private:
        /*void*/
    public:
    
    void attack(const std::string& target);
    void guardGate() const;
    
    ScavTrap(ScavTrap const & src);                                         //constructeur par copy                
    ScavTrap &  operator=(ScavTrap const & rhs);                      //operateur d assignation      forme canonique
    ScavTrap();                                                            //constructeur default
    ScavTrap(std::string);
    ~ScavTrap();
};





#endif