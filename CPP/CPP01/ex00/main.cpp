#include "Zombie.hpp"

int main()
{
    Zombie *z;

    z = newZombie("Sarah");
    z->announce();
    delete z;

    randomChump("Sarah");
    return 0;
}