#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
    private:
        std::string f_name;
        std::string l_name;
        std::string nickname;
        std::string phone_no;
        std::string darkest_sec;
    public:
        Contact();
        Contact(std::string fn, std::string ln,
            std::string nn, std::string pn, std::string ds);
        void display_contact();
        int check_empty();
};