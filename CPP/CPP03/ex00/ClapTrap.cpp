#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap &obj)
{
    this->attack_damage = obj.attack_damage;
    this->energy_point = obj.energy_point;
    this->hit_points = obj.hit_points;
}
ClapTrap &ClapTrap::operator=(ClapTrap &obj)
{
    if(this != &obj)
    {
        this->attack_damage = obj.attack_damage;
        this->hit_points = obj.hit_points;
        this->energy_point = obj.energy_point;
    }
    return *this;
}

ClapTrap::ClapTrap(std::string n)
{
    name = n;
    hit_points = 10;
    energy_point = 10;
    attack_damage = 0;
    std::cout << "Instance " << name
            << " got constructed\n";
}

void ClapTrap::attack(const std::string& target)
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
    std::cout << "ClapTrap " << name
    << " attacks " << target
    << ", causing " << attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hit_points < amount)
        hit_points = 0;
    else
        hit_points -= amount;
    std::cout << "ClapTrap " << name
    << " took damage of " << amount << " points!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
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
    hit_points += amount;
    std::cout << "ClapTrap " << name
    << " repaired " << amount << " points!\n";    
}

ClapTrap::~ClapTrap()
{
    std::cout << "Instance " << name
        << " got destructed\n";
}
