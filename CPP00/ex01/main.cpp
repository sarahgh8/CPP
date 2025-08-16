#include "PhoneBook.hpp"

int main()
{
    std::string command;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secrets;

    int index;

    PhoneBook p;

    while(1)
    {
        std::cout << "Welcome to the ultimate Phone book\n"
        << "What do you desire?\n"
        << "[1. ADD]\n[2. SEARCH]\n[3. EXIT]" << std::endl;
        std::cout << "------------------------------------" << std::endl;
        std::cin >> command;
        if(command == "ADD")
        {
            std::cout << "Enter you first name: ";
            std::cin >> first_name;
            std::cout << "Enter you last name: ";
            std::cin >> last_name;
            std::cout << "Enter you nickname: ";
            std::cin >> nick_name;
            std::cout << "Enter you phone number: ";
            std::cin >> phone_number;
            std::cout << "darkest secret!?: ";
            std::cin >> darkest_secrets;
            Contact c(first_name, last_name, nick_name, phone_number, darkest_secrets);
            if(!c.check_empty())
                p.add_contact(c);
        }
        else if(command == "SEARCH")
        {
            std::cout << "Enter the index you searching for?: ";
            std::cin >> index;
            p.search_index(index);
        }
        else if(command == "EXIT")
            break;
        else
        {
            std::cout << "Error\n" << std::endl;
            continue;
        }

    }
    return 0;
}