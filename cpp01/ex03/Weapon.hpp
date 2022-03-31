#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <sstream>


class Weapon
{
    private:
           std::string Type;
    public:
        Weapon(std::string);
        ~Weapon();

        const std::string    &getType();
        void    setType(std::string );

};



#endif
