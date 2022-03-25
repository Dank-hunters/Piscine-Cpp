#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
int main()
{
        std::string input;
        PhoneBook carnet;
      
        std::getline(std::cin, input);
        while(input != "EXIT")
        {
                //std::cout << ""<< std::endl;
                if (input == "ADD")
                {
                                carnet.add();
                                //index++;
                }
                if (input == "SEARCH")
                {
                        carnet.aff();        
                        carnet.affone();
                }
                std::getline(std::cin, input);

        }
        //carnet.ask_darkest();
        return 0;
}