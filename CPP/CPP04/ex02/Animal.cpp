#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal (Default Constructor): new Animal is being constructed\n";
}

Animal::Animal(std::string t)
{
    type = t;
    std::cout << "Animal (Parameter Constructor): new type" << t
            << "is being constructed\n";
}

Animal::~Animal()
{
    std::cout << "Animal: An animal got destructed\n";
}

Animal::Animal(Animal &obj)
{
    type = obj.type;
}

Animal &Animal::operator=(Animal &obj)
{
    if(this != &obj)
        type = obj.type;
    return *this;
}

const std::string Animal::getType() const
{
    return type;
}

