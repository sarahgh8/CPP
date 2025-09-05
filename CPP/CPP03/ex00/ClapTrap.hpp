#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>
#include <string>

class ClapTrap
{
    std::string name;

    int hit_points = 10;
    int energy_point = 10;
    int attack_damage = 0;

    public:
        ClapTrap(std::string n);
        ClapTrap(ClapTrap &obj);
        ClapTrap &operator=(ClapTrap &obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();  
};

#endif
