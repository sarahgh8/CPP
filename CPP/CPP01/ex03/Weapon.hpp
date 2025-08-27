#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <string>
#include <iostream>

class Weapon
{
    std::string type;
    public:
        Weapon(std::string t) { type = t; }
        void setType(std::string t);
        const std::string &getType() const;
};

#endif