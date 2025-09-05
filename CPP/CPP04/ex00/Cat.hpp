#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(Cat &obj);
        Cat &operator=(Cat &obj);
        void makeSound() const;
};

#endif