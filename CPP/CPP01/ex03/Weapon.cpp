#include "Weapon.hpp"

void Weapon::setType(std::string t)
{
    type = t;
}
const std::string& Weapon::getType() const
{
    return type;
}