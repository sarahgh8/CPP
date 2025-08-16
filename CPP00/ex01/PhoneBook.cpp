#include "PhoneBook.hpp"

void PhoneBook::print_PhoneBook()
{
    int i = 0;
    while(i < len)
    {
        arr[i].display_contact();
        i++;
    }
}

void PhoneBook::add_contact(Contact &c)
{
    if(len >= 8)
    {
        arr[len % 8] = c;
        return ;
    }
    arr[len] = c;
    len++;
}

void PhoneBook::search_index(int i)
{
    std::cout << std::setw(10);
    std::cout << i << "|";
    arr[i].display_contact();
}