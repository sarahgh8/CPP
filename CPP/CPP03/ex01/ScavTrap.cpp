#include "ScavTrap.hpp"

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj)
{
    this->attack_damage = obj.attack_damage;
    this->energy_point = obj.energy_point;
    this->hit_points = obj.hit_points;
}

ScavTrap &ScavTrap::operator=(ScavTrap &obj)
{
    if(this != &obj)
    {
        this->attack_damage = obj.attack_damage;
        this->energy_point = obj.energy_point;
        this->hit_points = obj.hit_points;  
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if(energy_point <= 0)
    {
        std::cout << "Insufficient Energy\n";
        return ;
    }
    if(hit_points == 0)
    {
        std::cout << "No hit points left\n";
        return ;
    }
    energy_point--;
    std::cout << "ScavTrap " << name
    << " attacks " << target
    << ", causing " << attack_damage << " points of damage!\n";
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    hit_points = 100;
    energy_point = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << name << " constructed!\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destructed!\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!\n";
}

