#include "Animal.hpp"
Animal::Animal(/* args */) : type("ANIMAL"), sound("jsuis un animal wesh")
{
}

Animal::~Animal()
{
}

Animal::Animal(Animal const & src)    
{
       *this = src;
}

Animal  &  Animal::operator=(Animal const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}

std::string Animal::getType()const
{
    return(this->type);
}
void      Animal::makeSound() const
{
    if (!(this->type == "ANIMAL"))
        std::cout << this->sound;
    return;
}
