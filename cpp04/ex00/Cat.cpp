
#include "Animal.hpp"



Cat::Cat(Cat const & src)    
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
    delete (this->brain);
}


void       Cat::makeSound() const
{
    std::cout << this->sound << std::endl;
    return;
}
Cat  &  Cat::operator=(Cat const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}
