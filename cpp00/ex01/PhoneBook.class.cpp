#include "PhoneBook.class.hpp"



PhoneBook::PhoneBook(): index(0)
{
        std::cout << "constructor called" << std::endl;
        return;        
}

PhoneBook::~PhoneBook()
{
    std::cout << "destructor called" << std::endl;
        return;      
}

void    PhoneBook::add()
{
    int i;

    i = 0;
    std::string input;
    std::cout << "give me your first name:";
    std::getline(std::cin, input);
    pers[index].setit(input, i);
    i++;
    std::cout << "give me your nick name:";
    std::getline(std::cin, input);
        pers[index].setit(input, i);
    i++;
    std::cout << "give me your last name:";
    std::getline(std::cin, input);
        pers[index].setit(input, i);
    i++;
    std::cout << "give me your number:";
    std::getline(std::cin, input);
        pers[index].setit(input, i);
    i++;
    std::cout << "give me your darkest secret:";
    std::getline(std::cin, input);
        pers[index].setit(input, i);
    index++;
    if (index == 8)
        index = 0;
    return;    
}

void    PhoneBook::aff()
{
    std::string tmp;
    int i = 0;
    int u = 0;
    std::cout << "_____________________________________________" << std::endl;
	std::cout << "      INDEX|First Name| Last Name|  Nick Name" << std::endl;
	std::cout << "-----------|----------|----------|-----------" << std::endl;
    
    while(i < 8)
    {
        u = 0;
        std::cout << std::endl;
        while (u < 5)
        {
            pers[i].getit(u);
            std::cout << "|";
            u++;
        }
        i++;

    }


}
//PhoneBook::ask_fname;
//PhoneBook::ask_lname;
//PhoneBook::ask_nick;
//PhoneBook::ask_numb;