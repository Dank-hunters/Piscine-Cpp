
#include "Contact.class.hpp"

Contact::Contact(void)
{

        std::cout << "constructor called" << std::endl;
        return;        
}


Contact::~Contact(void)
{
        std::cout << "destructor called" << std::endl;
        return;      
}

void    Contact::setit(std::string info,int index)
{
        this->data[index] = info;
        return;
}
void    Contact::getit(int i)
{
        std::string tmp;

        if (this->data[i].size() > 10)
        {
                tmp = this->data[i];
                tmp.resize(9);
                std::cout << tmp << ".";
        }
        else 
         {      
                std::cout << std::setw(10) << this->data[i];
         }

}

void    Contact::unset(int i)
{
        while (i >= 0)
        {
                this->data[i].clear();
                i--;
        }

}

void    Contact::getdata()
{
        std::string tmp;

        for (size_t i = 0; i < 6; i++)
        {
        if (i == 0)
        {
                std::cout << "FIRST NAME : " << std::endl;
        }
        if (i == 1)
        {
                std::cout << "LAST NAME : " << std::endl;
        }

        if (i == 2)
        {
         std::cout << "NICK NAME : "  << std::endl;
        }

        if (i == 3)
        {
                std::cout << "PHONE NUMBER : " << std::endl;
        }
        if (i == 4)
        {
                std::cout << "DARKEST SECRET : " << std::endl;
        }
        std::cout << this->data[i];
        std::cout << std::endl;



        }        
}
