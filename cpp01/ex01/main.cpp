#include "Zombie.hpp"

int main()
{   
    Zombie *z;
    
    z = zombieHorde(5, "Horde");
    for (size_t i = 0; i < 5; i++)
    {
        z[i].annouce();
    }
    delete [] z;
    return(0);
}