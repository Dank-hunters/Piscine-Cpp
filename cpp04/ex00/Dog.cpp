#include "Animal.hpp"

Dog::Dog() : sound("Wouaff")
{
std::cout << "Dog : constructor called" << std::endl;
 this->type = "Dog";
}

Dog::~Dog()
{
}
void       Dog::makeSound() const
{
    std::cout << this->sound << std::endl;
    return;

}

Dog::Dog(Dog const & src)    
{
       *this = src;
}

Dog  &  Dog::operator=(Dog const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}