#include "Span.hpp"

Span::Span(unsigned int d) : _N(d)
{
    _Array.reserve(d);
}

Span::~Span()
{
}

Span &	Span::operator=(Span const & rhs){

	if (this == &rhs)
		return *this;
	if (this->size() != 0)
		this->_Array.clear();
	this->_N = rhs.getMax();
	this->_Array.reserve(this->_N);
	std::copy(rhs.getNumbers().begin(), rhs.getNumbers().end(), std::back_inserter(this->_Array));
	return *this;
}

void    Span::addNumber(int number)
{   
    if (size() >= this->_N)
        throw FullStack();
    this->_Array.push_back(number);
}
std::vector<int>	Span::getNumbers(void) const{

	return this->_Array;
}
unsigned int		Span::size(void) const
{
	return this->_Array.size();
}

unsigned int		Span::getMax(void) const{

	return this->_N;
}


int	Span::shortestSpan(void){
    int res;
	if (_N <= 1)
		throw WrongSpan();
	else
	{
        std::sort(_Array.begin(), _Array.end());
		std::vector<int>::iterator it = this->_Array.begin();
         res = *(it + 1) - *it;
    size_t i = 0;
    while(++it != _Array.begin() + this->size() && i < this->size())
    {
        res = std::min(res, *it - *(it - 1));
        i++;
    }
    return(res);
	}
}

int	Span::longestSpan(void){

std::sort(_Array.begin(), _Array.end());
return(*this->_Array.rbegin() - *this->_Array.begin());
}