#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA
{
    Weapon &weapon;
    std::string name;
    public:
        HumanA(std::string n, Weapon &w) : weapon(w) {name = n;}
        void attack(); 
};

#endif
