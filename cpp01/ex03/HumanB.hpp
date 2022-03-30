#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <sstream>
#include "Weapon.hpp"


class HumanB
{
private:
    std::string name;
    Weapon  *Wep;
    
public:
    HumanB(std::string);
    ~HumanB();
    std::string     getName();
    void            setWeapon(Weapon &neww);
    void            attack();
};

#endif