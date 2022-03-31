#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int value;
    const static  int it = 8;
public:
    Fixed();                                             // constructeur
    Fixed(Fixed const & src);                                         //copy                 forme canonique
    Fixed &  operator=(Fixed const & rhs);                      //assignation
    ~Fixed();                                                     //destructeur
    int getRawBits(void) const;
    void setRawBits( int const raw );

};



#endif