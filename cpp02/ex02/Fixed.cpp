#include "Fixed.hpp"
Fixed::Fixed(): value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
    //std::cout << "Float constructor called" << std::endl;
    setRawBits(val << it);
}
Fixed::Fixed(const float val)
{
    //std::cout << "Int constructor called" << std::endl;
    this->setRawBits((int)roundf(val * (1 << it)));
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(Fixed const & src)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
float   Fixed::toFloat(void) const
{
    return((float)this->getRawBits() / (float)(1 << this->it));
}

int     Fixed::toInt(void) const
{
    return((int)this->getRawBits() >> this->it);
}


Fixed &  Fixed::operator=(Fixed const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return *this;
}
//          operator >, <, >=, <=, ==, !=
int  Fixed::operator>(Fixed const & rhs) const{
    if (this->getRawBits() > rhs.getRawBits())
            return(1);
    return (0);
}                  
int   Fixed::operator<(Fixed const & rhs)const{
    if (this->getRawBits() > rhs.getRawBits())
            return(1);
    return (0);
}                                   
int  Fixed::operator<=(Fixed const & rhs)const{
    if (this->getRawBits() <= rhs.getRawBits())
            return(1);
    return (0);
}        
int   Fixed::operator>=(Fixed const & rhs)const{
    if (this->getRawBits() >= rhs.getRawBits())
            return(1);
    return (0);
}           
int   Fixed::operator==(Fixed const & rhs)const{
    if (this->getRawBits() == rhs.getRawBits())
            return(1);
    return (0);
}                                
int   Fixed::operator!=(Fixed const & rhs)const{
    if (this->getRawBits() != rhs.getRawBits())
            return(1);
    return (0);
}                          
//                  operator +-*/

Fixed  Fixed::operator+(Fixed const & rhs)const{

	Fixed	copy = Fixed(*this);

	copy.value = this->value + rhs.getRawBits();
	return copy;


}                                      
Fixed   Fixed::operator-(Fixed const & rhs)const{
	Fixed	copy = Fixed(*this);

	copy.value = this->value - rhs.getRawBits();
	return copy;
}                                      
Fixed   Fixed::operator*(Fixed const & rhs)const{
    
return(this->toFloat() * rhs.toFloat());
}      

Fixed  Fixed::operator/(Fixed const & rhs)const{
    return(this->toFloat() / rhs.toFloat());
}                              

Fixed  &  Fixed::operator++(void)
{
this->value++;
return(*this);
}
 
Fixed &  Fixed::operator--(void)
{
    this->value--;
    return(*this);
}               

Fixed  Fixed::operator--(int)             
{
  Fixed tmp = *this;
    --(*this);
    return(tmp);
}
Fixed  Fixed::operator++(int)           
{
    Fixed tmp = *this;
    ++(*this);
    return(tmp);
}
//          operator min max

Fixed & Fixed::min(Fixed & a, Fixed & b){
    if (a < b)
        return (a);
    return(b);
}
Fixed & Fixed::max(Fixed & a, Fixed & b){
    if (a > b)
        return (a);
    return(b);
}
const Fixed & Fixed::min(const Fixed & a, const Fixed & b){
    if (a > b)
        return (b);
    return(a);
}
const Fixed & Fixed::max(const Fixed & a, const Fixed & b){
    if (a > b)
        return (a);
    return(b);
}

int         Fixed::getRawBits()const 
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void        Fixed::setRawBits( int const raw )
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}




std::ostream  &  operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}