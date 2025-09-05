#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("Sarah");
    ClapTrap clap2("Syarah");
    
    clap1.attack("Sarah");
    clap1.attack("Syarah");
    
    clap1.takeDamage(5);
    clap1.takeDamage(2);

    clap1.beRepaired(5);
    clap1.beRepaired(2);

    for(int i = 0; i < 7; i++)
    {
        clap2.attack("Target");
    }

    clap2.takeDamage(15);
    clap2.attack("Target");
    clap2.beRepaired(5);
    return 0;
}
