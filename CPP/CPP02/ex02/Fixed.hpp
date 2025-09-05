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

        bool operator<(const Fixed &obj) const;
        bool operator>(const Fixed &obj) const;
        bool operator>=(const Fixed &obj) const;
        bool operator<=(const Fixed &obj) const;
        bool operator==(const Fixed &obj) const;
        bool operator!=(const Fixed &obj) const;

        Fixed operator+(const Fixed &obj);
        Fixed operator-(const Fixed &obj);
        Fixed operator*(const Fixed &obj);
        Fixed operator/(const Fixed &obj);
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        static Fixed &min(Fixed &o1, Fixed &o2);
        static const Fixed &min(const Fixed &o1, const Fixed &o2);
        static Fixed &max(Fixed &o1, Fixed &o2);
        static const Fixed &max(const Fixed &o1, const Fixed &o2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);
#endif