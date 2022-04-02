#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected :
    std::string type;
private:
    std::string sound;
public:

    AAnimal  &  operator=(AAnimal const & rhs);

    AAnimal(/* args */);
    AAnimal(AAnimal const &);
    virtual void    makeSound() const = 0;
    //~Animal();
    virtual ~AAnimal();
    std::string    getType() const;
};

class Brain
{
private:
    std::string ideas[100];
public:

    Brain  &  operator=(Brain const & rhs);

    std::string	getIdea(size_t index) const;
    virtual void    setIdea(size_t index, std::string);

    Brain(Brain const &);
    Brain(/* args */);
    virtual ~Brain();
};


class Cat : public AAnimal
{
private:
    Brain *brain;

    std::string sound;
public:

    virtual Brain *getBrain() const;
    Cat  &  operator=(Cat const & rhs);
    
    void    setType(std::string) ;

    virtual void    makeSound() const;
    Cat(/* args */);
    Cat(Cat const &);
    virtual ~Cat();
    //~Cat();
};

class Dog : public AAnimal
{
private:
    Brain *brain;
        std::string sound;
public:
    virtual Brain *getBrain() const;
    void    setType(std::string) ;
    Dog  &  operator=(Dog const & rhs);

    virtual void    makeSound() const;
    Dog(Dog const &);
    Dog(/* args */);
    //~Dog();
    virtual ~Dog();
    
};


#endif