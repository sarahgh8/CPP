#include "FragTrap.hpp"

int main()
{
    FragTrap f1("Sarah");
    FragTrap f2("Syarah");

    f1.attack("Syarah");
    f1.takeDamage(150);
    f1.highFivesGuys();
    f1.beRepaired(150);

    return 0;
}
