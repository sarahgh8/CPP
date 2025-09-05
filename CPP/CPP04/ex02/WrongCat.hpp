#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat &obj);
        WrongCat &operator=(WrongCat &obj);
        void makeSound() const;
};

#endif