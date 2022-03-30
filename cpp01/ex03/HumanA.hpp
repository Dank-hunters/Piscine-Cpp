#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <sstream>
#include "Weapon.hpp"


class HumanA
{
private:
    std::string name;
    Weapon  *Wep;
public:
    HumanA(std::string, Weapon &weapon);
    ~HumanA();
    std::string     getName();
    std::string     getWeapon();
    void            setName(std::string);
    void            attack();
};



#endif