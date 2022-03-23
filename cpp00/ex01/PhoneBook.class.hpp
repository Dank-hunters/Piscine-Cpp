#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

#include <iostream>
#include <string>
#include <ctype.h>

class PhoneBook
{
    private:
       
        int index;
        Contact pers[8];
    
     public:
    
        void    add();
        void    aff();
        PhoneBook();
        ~PhoneBook();
};


#endif