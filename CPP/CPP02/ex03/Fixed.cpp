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
    fixed_val = roundf((f_number) * 256);
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
    return ((float)fixed_val / 256);
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

bool Fixed::operator<(const Fixed &obj)
{
    return(fixed_val < obj.fixed_val);
}

bool Fixed::operator>(const Fixed &obj)
{
    return(fixed_val > obj.fixed_val);
}

bool Fixed::operator>=(const Fixed &obj)
{
    return(fixed_val >= obj.fixed_val);
}

bool Fixed::operator<=(const Fixed &obj)
{
    return(fixed_val <= obj.fixed_val);
}

bool Fixed::operator==(const Fixed &obj)
{
    return(fixed_val == obj.fixed_val);
}

bool Fixed::operator!=(const Fixed &obj)
{
    return(fixed_val != obj.fixed_val);
}


Fixed Fixed::operator+(const Fixed &obj)
{
    return(Fixed(fixed_val + obj.fixed_val));
}

Fixed Fixed::operator-(const Fixed &obj)
{
    return(Fixed(fixed_val - obj.fixed_val));
}

Fixed Fixed::operator*(const Fixed &obj)
{
    return(Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed &obj)
{
    if(obj.toFloat() == 0)
        return Fixed(0);
    return(Fixed(this->toFloat() / obj.toFloat()));
}

Fixed& Fixed::operator++()
{
    ++this->fixed_val;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    tmp.fixed_val++;
    return tmp;
}

Fixed& Fixed::operator--()
{
    --this->fixed_val;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    tmp.fixed_val--;
    return tmp;
}

Fixed &Fixed::min(Fixed &o1, Fixed &o2)
{
    Fixed *min;
    min = (o1.toFloat() > o2.toFloat())? &o2: &o1;
    return *min;
}

const Fixed &Fixed::min(const Fixed &o1, const Fixed &o2)
{
    return (o1.toFloat() > o2.toFloat()) ? o2 : o1;
}
Fixed &Fixed::max(Fixed &o1, Fixed &o2)
{
    Fixed *max;
    max = (o1.toFloat() < o2.toFloat())? &o2: &o1;
    return *max;   
}
const Fixed &Fixed::max(const Fixed &o1, const Fixed &o2)
{
    return (o1.toFloat() < o2.toFloat()) ? o2 : o1;
}
