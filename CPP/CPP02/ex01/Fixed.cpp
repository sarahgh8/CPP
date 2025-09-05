#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_val = 0;
    std::cout << "Default constructor\n";
}

Fixed::Fixed(const Fixed &obj)
{
    fixed_val = obj.fixed_val;
    std::cout << "Copy constructor\n";
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    if(this != &obj)
        fixed_val = obj.fixed_val;
    std::cout << "Operator equal\n";
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor\n";
}


Fixed::Fixed(const int number)
{
    fixed_val = number << frac_bits;
    std::cout << "Int constructor\n";
}

Fixed::Fixed(const float f_number)
{
    fixed_val = roundf((f_number) * 256.0);
    std::cout << "FLoat constructor\n";
}


int Fixed::getRawBits( void ) const
{
    return fixed_val;
}

void Fixed::setRawBits(int const raw)
{
    fixed_val = raw;
}


float Fixed::toFloat(void) const
{
    return ((float)fixed_val / 256.0);
}

int Fixed::toInt(void) const
{
    return (fixed_val >> frac_bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}


