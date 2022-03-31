#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <math.h>

class Fixed
{
private:
    int value;
    const static  int it = 8;
public:
    Fixed();                                             // constructeur
    Fixed(int const );                                             
    Fixed(float const );                                                                                       // constructeur
    Fixed(Fixed const & src);                                         //constructeur copy                 forme canonique
    Fixed &  operator=(Fixed const & rhs);                      //assignation de copy
    int   operator>(Fixed const & rhs) const;                     
    int   operator<(Fixed const & rhs) const;                     
    int    operator>=(Fixed const & rhs) const;                     
    int    operator<=(Fixed const & rhs) const;                     
    int    operator==(Fixed const & rhs) const;                     
    int   operator!=(Fixed const & rhs) const;     



    Fixed   operator+(Fixed const & rhs) const;                     
    Fixed   operator-(Fixed const & rhs) const;                     
    Fixed   operator*(Fixed const & rhs) const;                     
    Fixed  operator/(Fixed const & rhs) const;                     
    
    
    Fixed & operator++(void);                     
    Fixed &  operator--(void);                     
    Fixed  operator--(int);                     
    Fixed  operator++(int);                 
   
    static  Fixed & min(Fixed & a, Fixed & b);
    static  Fixed & max(Fixed & a, Fixed & b);
    static const Fixed & min(const Fixed & a, const Fixed & b);
    static const Fixed & max(const Fixed & a, const Fixed & b);
    ~Fixed();                                                     //destructeur
    int getRawBits(void) const;
    void setRawBits( int const raw );

    float   toFloat(void) const;
    int     toInt(void) const;


};

std::ostream  &operator<<(std::ostream & o, Fixed const &rhs); 

#endif