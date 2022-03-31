#include "Fixed.hpp"
Fixed::Fixed(/* args */): value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = val << it;
}
Fixed::Fixed(const float val)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = (int)(roundf(val * (1 << it)));
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
Fixed &  Fixed::operator=(Fixed const & rhs) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return *this;
}

int         Fixed::getRawBits()const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void        Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

float   Fixed::toFloat(void) const
{
    return((float)this->value / (float)(1 << this->it));
}

int     Fixed::toInt(void) const
{
    return((int)this->value >> this->it);
}
std::ostream  &  operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}
