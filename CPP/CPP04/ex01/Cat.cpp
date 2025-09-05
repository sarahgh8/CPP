#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    cat_b = new Brain();
    std::cout << "Cat: New Cat is being constructed\n";
}

Cat::~Cat()
{
    delete cat_b;
    std::cout << "Cat: New Cat got destructed\n";
}

Cat::Cat(Cat &obj) : Animal(obj)
{
    type = obj.type;
    cat_b = new Brain(*obj.cat_b);
    std::cout << "Cat: Copy constructor\n";
}

Cat &Cat::operator=(Cat &obj)
{
    if(this != &obj)
    {
        type = obj.type;
        delete cat_b;
        cat_b = new Brain(*obj.cat_b);
    }
    std::cout << "Cat: Operator =\n";
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!\n";
}