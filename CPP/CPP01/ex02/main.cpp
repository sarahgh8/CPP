#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    
    std::cout << &str << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ref << std::endl;
    
    std::cout << str << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;

    // // TEST 
    // int var = 10;
    // int &_ref = var;
    
    // std::cout << var << std::endl;

    // _ref = 12;
    // std::cout << var << std::endl;
    return 0;
}