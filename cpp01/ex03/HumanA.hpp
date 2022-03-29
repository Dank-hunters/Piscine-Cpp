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
    Weapon  Wep;
public:
    HumanA(/* args */);
    ~HumanA();
    std::string     getName();
    void            setWeapon(std::string);
    void            setName(std::string);
    void            attack();
};

HumanA    initSoldierA(std::string weapon, std::string name);


#endif