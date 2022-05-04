#ifndef EASYFINE_TPP
#define EASYFINE_TPP
#include "easyfind.hpp"

template <typename T>

int easyfind(T container, int i)
{
    typename T::const_iterator it;
    typename T::const_iterator ite = container.end();

    it = std::find(container.begin(), container.end(), i);
    if (it == ite)
        throw (std::out_of_range("iterator out of range"));
    return *it;
}

#endif