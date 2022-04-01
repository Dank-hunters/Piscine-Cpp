#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */) : type("Wrong ANIMAL"), sound("soit respectueux")
{
}

WrongAnimal::~WrongAnimal()
{
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)    
{
       *this = src;
}

WrongAnimal  &  WrongAnimal::operator=(WrongAnimal const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}

std::string WrongAnimal::getType()const
{
    return(this->type);
}
void      WrongAnimal::makeSound() const
{
    if (!(this->type == "Wrong ANIMAL"))
        std::cout << this->sound;
    return;
}