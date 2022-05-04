#ifndef WATEVER_HPP
#define WATEVER_HPP
#include <iostream>


template < typename T, typename S >
void	iter(T const * tab, S const & size, void (*f)(T const&))
{
	for (S i = 0; i < size; i++)
	{
		f(*tab);
		tab++;
	}
	return;
}


#endif // !1
