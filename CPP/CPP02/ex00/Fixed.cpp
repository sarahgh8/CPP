#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_val = 0;
    std::cout << "Default constructor called\n";
}
Fixed::Fixed(Fixed &obj)
{
    fixed_val = obj.fixed_val;
    std::cout << "Copy constructor called\n";

}

Fixed& Fixed::operator=(Fixed &obj)
{
    if(this != &obj)
        fixed_val = obj.fixed_val;
    std::cout << "Copy assignment operator called\n";
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";

}


int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return fixed_val;
}

void Fixed::setRawBits(int const raw)
{
    fixed_val = raw;
}