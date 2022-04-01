#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap JUL("edd");
  
   JUL.takeDamage(25);
   JUL.beRepaired(25);
    JUL.takeDamage(22);
   JUL.beRepaired(25);
      for (size_t i = 0; i < 101; i++)
   {
      JUL.attack("un gars");
   }
   JUL.takeDamage(25);
   JUL.beRepaired(25);
    JUL.attack("TESTE");
    JUL.highFivesGuys();

return (0);

}
