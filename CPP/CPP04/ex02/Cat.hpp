#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    Brain *cat_b;
    public:
        Cat();
        ~Cat();
        Cat(Cat &obj);
        Cat &operator=(Cat &obj);
        void makeSound() const;
};

#endif