#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
    std::string type;
private:
    std::string sound;
public:

Animal  &  operator=(Animal const & rhs);

    Animal(/* args */);
    Animal(Animal const &);
    virtual void    makeSound() const;
    //~Animal();
    virtual ~Animal();
    std::string    getType() const;
};

class Cat : public Animal
{
private:

    std::string sound;
public:

Cat  &  operator=(Cat const & rhs);

    virtual void    makeSound() const;
    Cat(/* args */);
Cat(Cat const &);
    virtual ~Cat();
    //~Cat();
};

class Dog : public Animal
{
private:
        std::string sound;
public:
Dog &  operator=(Dog const & rhs);


    virtual void    makeSound() const;
    Dog(Dog const &);
    Dog(/* args */);
    //~Dog();
    virtual ~Dog();
    
};


#endif