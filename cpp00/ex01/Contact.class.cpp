
#include "Contact.class.hpp"

Contact::Contact(void)
{

        std::cout << "constructor called1" << std::endl;
        return;        
}


Contact::~Contact(void)
{
        std::cout << "destructor called1" << std::endl;
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
               // std::istringstream tmp(this->data[i]);
                //tmp >> std::setw(10) >> news;
                tmp = this->data[i];
                tmp.resize(10);
                std::cout << tmp;
        }
        else 
         {      
                std::cout << std::setw(10) << this->data[i];
         }

}

/*
void    Contact::ask()
{
        std::string buf;
        std::getline(std::cin, buf); 
        this->darkest_secret = buf;
        buf.clear();
        return;
}*/