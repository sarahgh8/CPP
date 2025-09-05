#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap s1("Sarah");
    ScavTrap s2("Syarah");

    s1.attack("Syarah");
    s1.takeDamage(150);
    s1.guardGate();
    s1.beRepaired(150);

    return 0;
}
