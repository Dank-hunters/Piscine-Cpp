#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>
#include <string>
#include <ctype.h>



class Contact
{
private:
    std::string darkest_secret;
    std::string firstname; 
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
public:
    Contact(/* args */);
    ~Contact();
    void aff_fname(void) const;
    void aff_lname(void) const;
    void aff_nick(void) const;
    void aff_numb(void) const;
    void aff_darkest(void) const;
};



#endif
