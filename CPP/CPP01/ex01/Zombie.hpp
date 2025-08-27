#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie
{
    std::string name;
    public:
        Zombie() {name = "";}
        void announce();
        void set_name(std::string n);
};

Zombie* zombieHorde( int N, std::string name );

#endif