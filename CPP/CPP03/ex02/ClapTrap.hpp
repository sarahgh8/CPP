#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hit_points;
        unsigned int energy_point;
        unsigned int attack_damage;
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
