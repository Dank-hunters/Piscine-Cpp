#include "WrongAnimal.hpp"

void       WrongCat::makeSound() const
{
    std::cout << this->sound << std::endl;
    return;

}

WrongCat::WrongCat() : sound("Miewwwwww")
{
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
}

WrongCat::WrongCat(WrongCat const & src)
{
    *this = src;
}

WrongCat  &  WrongCat::operator=(WrongCat const & rhs) 
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return *this;
}
