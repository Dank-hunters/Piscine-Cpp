#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <sstream>

class Zombie
{
private:
    std::string name;
public:


        void    annouce(void);
        void    setName(std::string);
        Zombie(/* args */);
        ~Zombie();
};

   Zombie* newZombie( std::string name );
 //  void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );



#endif