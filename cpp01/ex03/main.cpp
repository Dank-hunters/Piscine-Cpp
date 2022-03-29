#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"

int main()
{
    HumanA bob;
    HumanB robert;
    
    bob = initSoldierA("AK-47", "boby");
    robert = initSoldierB("cailloux", "roby");
   // bob.setWeapon("AK-47");
   // bob.setName("bob");
    bob.attack();
    robert.attack();
    return (0);
}


