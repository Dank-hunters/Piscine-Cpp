#include "Zombie.hpp"

Zombie  *newZombie( std::string name )
{
    Zombie *zozo = new Zombie;
    zozo->setName(name);
    return(zozo);
}