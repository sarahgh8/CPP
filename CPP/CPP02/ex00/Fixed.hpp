#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
    int fixed_val;
    static const int frac_bits = 8;

    public:
        Fixed();
        Fixed(Fixed &obj);
        Fixed &operator=(Fixed &obj);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits(int const raw);
};

#endif