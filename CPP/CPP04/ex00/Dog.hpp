#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(Dog &obj);
        Dog &operator=(Dog &obj);
        void makeSound() const;
};

#endif