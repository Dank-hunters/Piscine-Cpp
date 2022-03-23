#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <sstream>


class Contact
{
private:
    std::string data[5];
   /* darkest_secret;
    firstname; 
    lastname;
    nickname;
    phonenumber;*/
public:
    Contact(/* args */);
    ~Contact();
    void   setit(std::string info, int index);
    void    getit(int i);
};



#endif
