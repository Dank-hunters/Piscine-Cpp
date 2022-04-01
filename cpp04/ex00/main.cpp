#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
const WrongAnimal* meta = new WrongAnimal();
const WrongAnimal* i = new WrongCat();
//const Animal* j = new Dog();
//std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
//j->makeSound();
//meta->makeSound();
     //delete (j);
     delete (i);
    delete (meta);
}