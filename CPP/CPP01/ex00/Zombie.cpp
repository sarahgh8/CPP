#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n"; 
}
Zombie::~Zombie()
{
    std::cout << name << " is getting destroyed\n";
}