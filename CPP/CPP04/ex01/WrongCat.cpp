#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat: is being constructed!\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat got destructed\n";
}

WrongCat::WrongCat(WrongCat &obj) : WrongAnimal(obj)
{
    type = obj.type;
}

WrongCat &WrongCat::operator=(WrongCat &obj)
{
    if(this != &obj)
        type = obj.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Woof!\n";
}
