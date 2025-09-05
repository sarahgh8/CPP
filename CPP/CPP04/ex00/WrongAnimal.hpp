#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(WrongAnimal &obj);
        WrongAnimal &operator=(WrongAnimal &obj);
        virtual void makeSound() const;
        const std::string getType() const;
};

#endif