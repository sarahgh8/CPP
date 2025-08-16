#include "Contact.hpp"

class PhoneBook
{
    private:
        int len;
        Contact arr[8];
    public:
        PhoneBook() {len = 0;}
        void add_contact(Contact &c);
        void print_PhoneBook();
        void search_index(int i);
};