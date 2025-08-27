#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
    Weapon* weapon;
    std::string name;
    public:
        HumanB(std::string n) {name = n; weapon = 0;}
        void attack();
        void setWeapon(Weapon& w);
};

#endif