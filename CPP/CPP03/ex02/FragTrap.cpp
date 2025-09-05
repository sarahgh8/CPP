#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n) : ClapTrap(n) 
{

    hit_points = 100;
    energy_point = 100;
    attack_damage = 30;
    std::cout << "FragTrap " << name << " constructed!\n";
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj)
{
    hit_points = obj.hit_points;
    energy_point = obj.energy_point;
    attack_damage = obj.attack_damage;    
}
FragTrap &FragTrap::operator=(FragTrap &obj)
{
    if(this != &obj)
    {
        hit_points = obj.hit_points;
        energy_point = obj.energy_point;
        attack_damage = obj.attack_damage; 
    }
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destructed!\n";
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "High Five!!\n";
}