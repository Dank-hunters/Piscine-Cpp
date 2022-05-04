#ifndef SPAN_HPP
#define SPAN_HPP
# include <stdexcept>
# include <iterator>
# include <algorithm>
# include <vector>
# include <iostream>
class Span
{
private:
    unsigned int _N;
    std::vector<int> _Array;
public:

    void    addNumber(int);
    Span(unsigned int);
    ~Span();
    	unsigned int		size(void) const;
	unsigned int		getMax(void) const;


    int	shortestSpan(void);
	int	longestSpan(void);
    Span &	operator=(Span const & rhs);
    std::vector<int>	getNumbers(void) const;


    class	FullStack : public std::exception{
	public:
		virtual const char *	what() const throw(){
			return ("It's full sorry");
		}
	};
    class	WrongSpan : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("No span found!");
			}
		};
};



#endif