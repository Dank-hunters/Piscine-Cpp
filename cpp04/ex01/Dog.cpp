#include "Animal.hpp"

Dog::Dog() : sound("Wouaff")
{
    this->brain = new Brain;

std::cout << "Dog : constructor called" << std::endl;
 this->type = "Dog";
}

Dog::~Dog()
{
    delete(this->brain);

}
void       Dog::makeSound() const
{
    std::cout << this->sound << std::endl;
    return;

}

Dog::Dog(Dog const & src) : brain(NULL)  
{
       *this = src;
}

Brain  * Dog::getBrain()const 
{
    return(this->brain);
}
void    Dog::setType(std::string type)
{
    this->type = type;
}

Dog  &  Dog::operator=(Dog const & rhs)
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
