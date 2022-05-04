#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>


template < typename T >

class Array
{
private:
		T*	_array;
		unsigned int _size;

public:
		Array(){}
		Array(unsigned int i) : _array(new T[i]), _size(i){}
		Array(Array const & src):_array(NULL),_size(0)
		{
			*this = src;
		}
		~Array()
		{
			if (this->_size)
				delete [] _array;
		}
		Array & operator=(Array<T> const &src)
		{
			if (this != &src)
			{
				if (this->_size != src._size)
				{
					delete this->_array;
					this->_array = new T[src._size];
					this->_size = src._size;
				}
				for (size_t i = 0; i < this->_size; i++)
				{
					this->_array[i] = src._array[i];
				}
			}
			return (*this);
		}
			class Wrongindex : public std::exception
			{
   			public:
     		virtual const char* what() const throw()
      		{
        		return ("Index out of range");
       		}
			};


	T &	operator[](unsigned int i) const{

		if (i < 0  ||  i >= this->_size || this->_array == NULL)
			throw (Array::Wrongindex());
		return this->_array[i];
	}
	
	T &	operator[](unsigned int i){

		if (i < 0  ||  i >= this->_size || this->_array == NULL)
			throw (Array::Wrongindex());
		return this->_array[i];
	}
	unsigned int size() const 
	{	return (this->_size);}
};




#endif // !1
