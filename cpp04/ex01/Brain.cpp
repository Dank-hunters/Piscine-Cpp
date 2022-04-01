#include "Animal.hpp"




Brain::Brain(/* args */)
{
}

Brain::Brain(Brain const & src)
{
    *this = src;
}

Brain::~Brain()
{
}


void    Brain::setIdea(size_t index, std::string str)
{
    this->ideas[index] = str;
    return;

}

std::string	Brain::getIdea(size_t index) const{
	return this->ideas[index];
}

Brain  &  Brain::operator=(Brain const & rhs)
{
   // std::cout << "Copy assignment operator called" << std::endl;
if (this != &rhs)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = rhs.getIdea(i);
	}
	return *this;
}