#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "Wrong animal: is being constructed\n";
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong animal got destructed\n";
}
WrongAnimal::WrongAnimal(WrongAnimal &obj)
{
    type = obj.type;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal &obj)
{
    if(this != &obj)
        type = obj.type;
    return *this;
}
void WrongAnimal::makeSound() const
{
    std::cout << "No Animal, No sound\n";
}

const std::string WrongAnimal::getType() const
{
    return type;
}
