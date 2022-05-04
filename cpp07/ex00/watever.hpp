
#ifndef WATEVER_HPP
#define WATEVER_HPP
#include <iostream>

template <typename T>

T const& min(T const& x, T const& y)
{
	if (x != y)
		return ((x < y) ? x : y);
	else
		return (y);
}
template <typename T>

T const& max(T const& x, T const& y)
{
	if (x != y)
		return ((x > y) ? x : y);
	else
		return (y);
}

template <typename T>
void swap(T& x, T& y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;

}
#endif