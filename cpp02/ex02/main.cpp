#include "Fixed.hpp"

#include <iostream>
int main( void ) {
Fixed i(5);
Fixed j(10);
Fixed  k(1);


std::cout << i;
std::cout << " : i" << std::endl;
std::cout << j;
std::cout << " : j" << std::endl;
std::cout << (i + j) ;
std::cout << "  : i + j" << std::endl;
std::cout << (j - i);
std::cout << "  : j - i" << std::endl;
std::cout << (j / i);
std::cout << "  : j / i" << std::endl;
std::cout << (j * i);
std::cout << "  : j * i" << std::endl;

std::cout << (j == i) ;
std::cout << "  : j == i" << std::endl;
std::cout << (i != j) ;
std::cout << "  : i != j" << std::endl;
std::cout << (j >= i) ;
std::cout << "  : j >= i" << std::endl;
std::cout << (j <= i) ;
std::cout << "  : j <= i" << std::endl;



Fixed a;

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

Fixed c;

std::cout << c << std::endl;
std::cout << ++c << std::endl;
std::cout << c << std::endl;
std::cout << c++ << std::endl;
std::cout << c << std::endl;

Fixed const b( Fixed( 5.00f ) * Fixed( 2 ) );
std::cout << "b : ";
std::cout << b << std::endl;
std::cout << "a : ";
std::cout << a  << std::endl;
std::cout << Fixed::max( a, b );
std::cout << " : max a, b" << std::endl;

std::cout << Fixed::min( a, b );
std::cout << " : min a, b" << std::endl;


return 0;
}