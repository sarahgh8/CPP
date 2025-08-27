#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n"; 
}

void Zombie::set_name(std::string n)
{
    name = n;
}
