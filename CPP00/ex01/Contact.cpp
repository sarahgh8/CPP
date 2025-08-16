#include "Contact.hpp"

Contact::Contact()
{
    f_name = "";
    l_name = "";
    nickname = "";
    phone_no = "";
    darkest_sec = "";
}

Contact::Contact(std::string fn, std::string ln,
            std::string nn, std::string pn, std::string ds)
{
    f_name = fn;
    l_name = ln;
    nickname = nn;
    phone_no = pn;
    darkest_sec = ds;
}

void Contact::display_contact()
{
    std::cout << std::setw(10);
    std::cout << f_name << "|";
    std::cout << std::setw(10);
    std::cout << l_name << "|";
    std::cout << std::setw(10);
    std::cout << nickname << "|";
    std::cout << std::endl;
}

int Contact::check_empty()
{
    if(f_name == "")
        return 1;
    if(l_name == "")
        return 1;
    if(nickname == "")
        return 1;
    if(phone_no == "")
        return 1;
    if(darkest_sec == "")
        return 1;
    return 0;
}
