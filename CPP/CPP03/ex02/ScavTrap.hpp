#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap(std::string n);
    ~ScavTrap();
    ScavTrap(ScavTrap &obj);
    ScavTrap &operator=(ScavTrap &obj);
    void attack(const std::string &target); 
    void guardGate();
};

#endif