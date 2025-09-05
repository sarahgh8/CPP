#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed c(0.1f);
    Fixed d(0.2f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min(c , d) << std::endl;
    return 0;
}