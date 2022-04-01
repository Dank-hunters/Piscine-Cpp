#include "ClapTrap.hpp"

int main()
{
    ClapTrap JUL("edd");
  JUL.takeDamage(25);
   JUL.beRepaired(25);
    JUL.takeDamage(22);
   JUL.beRepaired(25);
    for (size_t i = 0; i < 8; i++)
   {
      JUL.attack("un gars");
   }
       JUL.takeDamage(22);
   JUL.beRepaired(25);
return (0);

}