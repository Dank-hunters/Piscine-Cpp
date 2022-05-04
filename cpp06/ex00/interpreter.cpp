
#include "interpreter.hpp"
                /*//////////////////////////////////*/
                /*          canonical form          */
                /*//////////////////////////////////*/

interpreter::interpreter()
{
    std::cout << "deflault constructor called" << std::endl;
}

interpreter::interpreter(std::string const & av)
{
	this->_aff = std::atof(av.c_str());
    std::cout << "deflault constructor called" << std::endl;
}

interpreter::~interpreter()
{
    std::cout << "deflault destructor called" << std::endl;
}



interpreter & interpreter::operator=(interpreter const &rhs)
{
	this->_aff = rhs._aff;
    return (*this);
}

                /*//////////////////////////////////*/
                /*`            method               */
                /*//////////////////////////////////*/

void	interpreter::affChar() const
{ 
	char c;
	std::cout << "Char: ";
	c = static_cast<char>(this->_aff);
	if ( isnan(this->_aff) || this->_aff > static_cast<char>(CHAR_MAX) || this->_aff < static_cast<char>(CHAR_MIN))
		std::cout << "impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "non displayable" << std::endl;
	else
		std::cout << c << std::endl;

}

void	interpreter::affInt() const
{
	static int i;

	std::cout << "Int: ";
	i = static_cast<int>(this->_aff);
	if ( isnan(this->_aff) || this->_aff > static_cast<int>(INT_MAX) || this->_aff < static_cast<int>(INT_MIN))
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;

}
 
void	interpreter::affFloat() const
{
	static float f;

	f = static_cast<float>(this->_aff);
	std::cout << "Float: ";
	if (isinf(f) == 1 && f > 0)
		std::cout << "+inf";
	else if (isinf(f) == 1 && f <= 0)
		std::cout << "-inf";
	else if (isnan(f) )
		std::cout << "nan";
	else
		std::cout  << std::setprecision(7) << f;
	if (f - static_cast<int>(f) == 0)
		std::cout << ".0";
	std::cout << "f";
	std::cout << std::endl;
}


void	interpreter::affDouble() const
{
	double d;

	d = this->_aff;
	std::cout << "Double: ";
	if (isinf(d) == 1 && d > 0)
		std::cout << "+inf";
	else if (isinf(d) == 1 && d <= 0)
		std::cout << "-inf";
	else if (isnan(d))
		std::cout << "nan";
	else
		std::cout << std::setprecision(15) << d;
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::cout << std::endl;

}

void		interpreter::aff()
{
	affChar();
	affInt();
	affFloat();
	affDouble();
}

