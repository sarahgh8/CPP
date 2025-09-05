#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    dog_b = new Brain();
    std::cout << "Dog: A new dog is being constructed\n";
}

Dog::~Dog()
{
    delete dog_b;
    std::cout << "Dog: A new dog got destructed\n";
}

Dog::Dog(Dog &obj) : Animal(obj)
{
    type = obj.type;
    dog_b = new Brain(*obj.dog_b);
    std::cout << "Dog: Copy constructor\n";

}

Dog &Dog::operator=(Dog &obj)
{
    if(this != &obj)
    {
        type = obj.type;
        delete dog_b;
        dog_b = new Brain(*obj.dog_b);
    }
    std::cout << "Dog: Operator =\n";
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!\n";
}
