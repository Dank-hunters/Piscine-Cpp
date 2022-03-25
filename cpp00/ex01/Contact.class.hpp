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
    std::string data[6];

public:
    Contact(/* args */);
    ~Contact();
    void   setit(std::string info, int index);
    void    getit(int i);
    void    getdata();
    void    unset(int i);
};



#endif
