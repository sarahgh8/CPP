#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

/**
 *  This exercise is about the canonical orthodox form
 *      1. Constructor
 *      2. Copy Constructor
 *      3. operator =
 *      4. Destructor
 */

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