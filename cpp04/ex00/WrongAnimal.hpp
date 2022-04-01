#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
    protected :
    std::string type;
private:
    std::string sound;
public:

WrongAnimal  &  operator=(WrongAnimal const & rhs);

    WrongAnimal(/* args */);
    WrongAnimal(WrongAnimal const &);
    void    makeSound() const;
    //~Animal();
     ~WrongAnimal();
    std::string    getType() const;
};

class WrongCat : public WrongAnimal
{
private:
    std::string sound;

public:

WrongCat  &  operator=(WrongCat const & rhs);

    WrongCat(WrongCat const &);
    WrongCat(/* args */);
    void    makeSound()const;
    ~WrongCat();
    //~Cat();
};



#endif