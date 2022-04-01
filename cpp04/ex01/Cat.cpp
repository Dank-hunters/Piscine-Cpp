
#include "Animal.hpp"



Cat::Cat(Cat const & src) : brain(NULL)    
{
       *this = src;
}

Cat::Cat() : sound("Miaouuu")
{
    this->brain = new Brain;
    std::cout << "cat : constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    delete(this->brain);
}


void       Cat::makeSound() const
{
    std::cout << this->sound << std::endl;
    return;
}

Brain  * Cat::getBrain()const 
{
    return(this->brain);
}

void    Cat::setType(std::string type)
{
    this->type = type;
}

Cat  &  Cat::operator=(Cat const & rhs)
{
    if (this->brain)
    {
        delete (this->brain);
    }
        this->brain = new Brain(*(rhs.getBrain()));
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}

