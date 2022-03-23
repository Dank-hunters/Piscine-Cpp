#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
int main(int ac, char **av)
{
        std::string input;
        PhoneBook carnet;
        int index = 0;
      
        std::getline(std::cin, input);
        while(input != "EXIT")
        {
                //std::cout << ""<< std::endl;
                if (input == "ADD")
                {
                                carnet.add();
                                //index++;
                }
                std::getline(std::cin, input);
                if (input == "SEARCH")
                {
                        //std::cout << "who are you searching for ?" << std::endl;
                        carnet.aff();
                        
                }

        }
        //carnet.ask_darkest();
      
        return 0;
}