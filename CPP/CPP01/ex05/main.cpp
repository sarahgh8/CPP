#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
        return 1;
    Harl h;
    h.complain(std::string(argv[1]));
    return 0;
}