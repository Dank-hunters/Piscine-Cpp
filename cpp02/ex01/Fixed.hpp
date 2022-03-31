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
    ~Fixed();                                                     //destructeur
    int getRawBits(void) const;
    void setRawBits( int const raw );

    float   toFloat(void) const;
    int     toInt(void) const;


};

std::ostream  &operator<<(std::ostream & o, Fixed const &rhs); 

#endif