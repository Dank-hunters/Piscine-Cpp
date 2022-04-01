#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>


class FragTrap : public ClapTrap
{
    private:
   public:
    
        void attack(const std::string& target);
    
    
        void highFivesGuys(void) const;
    
    FragTrap(FragTrap const & src);                                         //constructeur copy                 forme canonique
    FragTrap &  operator=(FragTrap const & rhs);                      //operateur d assignation
    FragTrap();
    FragTrap(std::string);
    ~FragTrap();
};





#endif
