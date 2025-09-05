#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>
#include <string>

class Brain
{
    std::string ideas[100];

    public:
        Brain();
        ~Brain();
        Brain(Brain &obj);
        Brain &operator=(Brain &obj);
};

#endif