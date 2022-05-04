#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <vector>
#include <stack>
#include <iterator>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
    /* data */
public:
typedef typename std::stack<T>::container_type::iterator iterator;
MutantStack	&operator=(const MutantStack &other);


iterator	begin()
{
    return std::stack<T>::c.begin();
}
iterator	end()
{ 
    return std::stack<T>::c.end(); 
}

    MutantStack(/* args */);
    ~MutantStack();

};
template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &src)
{
	if (this != &src)
		std::stack<T>::operator=(src);
	return (*this);
}
template <typename T>
MutantStack<T>::MutantStack(/* args */)
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}


#endif 
