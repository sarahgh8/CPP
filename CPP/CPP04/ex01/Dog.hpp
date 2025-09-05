#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    Brain *dog_b;
    public:
        Dog();
        ~Dog();
        Dog(Dog &obj);
        Dog &operator=(Dog &obj);
        void makeSound() const;
};

#endif