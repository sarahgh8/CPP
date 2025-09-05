#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"
class FragTrap: public ClapTrap
{
    public:
        FragTrap(std::string n);
        FragTrap(FragTrap &obj);
        FragTrap &operator=(FragTrap &obj);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif