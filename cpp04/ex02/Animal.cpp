#include "Animal.hpp"
AAnimal::AAnimal(/* args */) : type("AANIMAL"), sound("jsuis un animal wesh")
{
}

AAnimal::~AAnimal()
{
}

AAnimal::AAnimal(AAnimal const & src)    
{
       *this = src;
}

AAnimal  &  AAnimal::operator=(AAnimal const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}

std::string AAnimal::getType()const
{
    return(this->type);
}
void      AAnimal::makeSound() const
{
    if (!(this->type == "AANIMAL"))
        std::cout << this->sound;
    return;
}
