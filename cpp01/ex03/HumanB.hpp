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
    Weapon  Wep;
    
public:
    HumanB(/* args */);
    ~HumanB();
    std::string     getName();
    void            setName(std::string);
    void            setWeapon(std::string);
    void            attack();
};

HumanB    initSoldierB(std::string weapon, std::string name);
#endif