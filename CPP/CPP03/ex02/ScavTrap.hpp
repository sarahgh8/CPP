#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap(std::string n);
    ~ScavTrap();
    void attack(const std::string &target); 
    void guardGate();
};

#endif