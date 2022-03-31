#include "Fixed.hpp"
Fixed::Fixed(/* args */): value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

}
Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = src;
}
Fixed &  Fixed::operator=(Fixed const & rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
  
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return *this;

}

int         Fixed::getRawBits()const {
    std::cout << "getRawBits member function called" << std::endl;
  
    return (this->value);

}

void        Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}