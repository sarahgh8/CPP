#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << "Brain: Default constructor\n";
}

Brain::~Brain()
{
    std::cout << "Brain: Destructor\n";
}

Brain::Brain(Brain &obj)
{
    for(int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
    std::cout << "Brain: Copy constructor\n";
}

Brain &Brain::operator=(Brain &obj)
{
    if(this != &obj)
    {
        for(int i = 0; i < 100; i++)
            ideas[i] = obj.ideas[i];        
    }
    std::cout << "Brain: Operator =\n";
    return *this;
}
