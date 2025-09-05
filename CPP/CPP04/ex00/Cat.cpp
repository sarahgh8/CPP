#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat: New Cat is being constructed\n";
}

Cat::~Cat()
{
    std::cout << "Cat: New Cat got destructed\n";
}

Cat::Cat(Cat &obj) : Animal(obj)
{
    type = obj.type;
}

Cat &Cat::operator=(Cat &obj)
{
    if(this != &obj)
        type = obj.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!\n";
}