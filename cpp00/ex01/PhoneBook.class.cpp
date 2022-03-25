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
    if (input.empty())
    {
        std::cout << "The fields of a saved contact do not can be empty.";
        return ;
    }
    pers[index].setit(input, i);
    i++;


    std::cout << "give me your nick name:";
    std::getline(std::cin, input);
     if (input.empty())
    {
        std::cout << "The fields of a saved contact do not can be empty.";
        pers[index].unset(i);
        return ;
    }
    pers[index].setit(input, i);
    i++;


    std::cout << "give me your last name:";
    std::getline(std::cin, input);
     if (input.empty())
    {
        std::cout << "The fields of a saved contact do not can be empty.";
        pers[index].unset(i);
        return ;
    }  
    pers[index].setit(input, i);
    i++;


    std::cout << "give me your number:";
    std::getline(std::cin, input);
    std::string::const_iterator it = input.begin();
    while (it != input.end() && std::isdigit(*it))
         ++it;
    if (it !=  input.end())
    {
        std::cout << "need number for Phone NUMBER" << std::endl;
        pers[index].unset(i);
        return;
    }
    //if (std::isdigit(atoi((input.c_str()))))
     if (input.empty())
    {

        std::cout << "The fields of a saved contact do not can be empty.";
        pers[index].unset(i);
        return ;
    }
    pers[index].setit(input, i);
    i++;


    std::cout << "give me your darkest secret:";
    std::getline(std::cin, input);
     if (input.empty())
    {
        std::cout << "The fields of a saved contact do not can be empty.";
        pers[index].unset(i);
        return ;
    }
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
    std::cout << "____________________________________________" << std::endl;
	std::cout << "     INDEX|First Name| Last Name|  Nick Name" << std::endl;
	std::cout << "----------|----------|----------|-----------" << std::endl;
    
    while(i < 8)
    {
        u = 0;
        std::cout << "         " << i;
                  std::cout << "|";
        while (u < 3)
        {
            pers[i].getit(u);
            std::cout << "|";
            u++;
        }
        std::cout << std::endl;
        i++;
    }
}

void    PhoneBook::affone()
{
    std::string input;
    int i = 0;
    
    std::cout << "who are you searching for ?" << std::endl;
    std::getline(std::cin, input); 
    
    std::string::const_iterator it = input.begin();
    while (it != input.end() && std::isdigit(*it))
         ++it;
    if (it !=  input.end())
    {
        std::cout << "need number for index" << std::endl;
        pers[index].unset(i);
        return;
    }
    i = atoi(input.c_str());
    if (i >= 8 || i >= index)
    {
            std::cout << "not a valid index" << std::endl;
            return;
    }
    else
    {
        pers[i].getdata();
    }



}
//PhoneBook::ask_fname;
//PhoneBook::ask_lname;
//PhoneBook::ask_nick;
//PhoneBook::ask_numb;