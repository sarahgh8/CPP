#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
    Dog* originalDog = new Dog();
    Dog* copiedDog = new Dog(*originalDog);
    delete originalDog;
    delete copiedDog;
    
    Animal* animals[10];
    for (int i = 0; i < 5; ++i)
        animals[i] = new Dog();
    for (int i = 5; i < 10; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < 10; ++i)
        delete animals[i];
    return 0;
}