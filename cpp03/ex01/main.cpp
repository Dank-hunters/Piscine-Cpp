#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap JUL("edd");
   JUL.attack("TESTE");
   JUL.takeDamage(25);
   JUL.beRepaired(25);
   JUL.takeDamage(22);
   JUL.beRepaired(25);
    for (size_t i = 0; i < 20; i++)
   {
      JUL.attack("un gars");
   }
   JUL.takeDamage(22);
   JUL.beRepaired(25);
   JUL.guardGate();

return (0);

}
