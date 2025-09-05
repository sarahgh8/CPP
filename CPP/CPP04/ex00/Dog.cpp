#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog: A new dog is being constructed\n";
}

Dog::~Dog()
{
    std::cout << "Dog: A new dog got destructed\n";

}

Dog::Dog(Dog &obj) : Animal(obj)
{
    type = obj.type;
}

Dog &Dog::operator=(Dog &obj)
{
    if(this != &obj)
        type = obj.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!\n";
}
