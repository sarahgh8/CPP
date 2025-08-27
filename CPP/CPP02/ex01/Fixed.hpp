#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>
#include <fstream>

class Fixed
{
    int fixed_val;
    static const int frac_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &obj);
        ~Fixed();

        Fixed(const int number);
        Fixed(const float f_number);

        int getRawBits( void ) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);
#endif