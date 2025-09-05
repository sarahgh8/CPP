#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string t);
        virtual ~Animal();
        Animal(Animal &obj);
        Animal &operator=(Animal &obj);
        const std::string getType() const;
        virtual void makeSound() const;
};

#endif