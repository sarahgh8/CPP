#include <string>
#include <iostream>

class MegaPhone
{
    public:
        int ft_islower(char c);
        void megaphone(std::string str);
};

int MegaPhone::ft_islower(char c)
{
    return (c >= 97 && c <= 122);
}

void MegaPhone::megaphone(std::string str)
{
    int i;
    char tmp;

    i = 0;
    while(str[i])
    {
        tmp = str[i];
        if(ft_islower(tmp))
            tmp = str[i] - 32;
        std::cout << tmp;
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    MegaPhone mg;
    while(argv[i])
    {
        mg.megaphone(argv[i]);
        if(argv[i + 1])
            std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return 0;
}