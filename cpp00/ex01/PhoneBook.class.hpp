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
     public:
    
    Contact pers[8];
    
    void ask_fname(void);
    void ask_lname(void);
    void ask_nick(void);
    void ask_numb(void);
    void ask_darkest(void);
    PhoneBook(z);
    ~PhoneBook();
};

#endif

