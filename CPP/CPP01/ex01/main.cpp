#include "Zombie.hpp"

int main()
{
    int i;
    Zombie *_z;

    i = 0;
    _z = zombieHorde(5, "Sarah");

    while(i < 5)
    {
        _z[i].announce();
        i++;
    }
    delete []_z;
    return 0;
}