
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

void    Contact::aff_fname() const
{
        std::cout << "first name : " << this->firstname << std::endl;
        return;
}
void    Contact::aff_lname() const
{
        std::cout << "last name : " << this->lastname << std::endl;
        return;
}
void    Contact::aff_nick() const
{
        std::cout << "nickname : " << this->nickname << std::endl;
        return;
}
void    Contact::aff_numb() const
{
        std::cout << "phone number: " << this->phonenumber << std::endl;
        return;
}
void    Contact::aff_darkest() const
{
        std::cout << "darkest_secret : " << this->darkest_secret << std::endl;
        return;
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