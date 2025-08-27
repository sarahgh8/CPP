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
        ~Zombie();
};
    
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif