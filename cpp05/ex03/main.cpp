#include <iostream>
#include <stdexcept>
#include "Bureaucrate.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void) {

        Bureaucrat      Zafod("Zafod", 1);
        Intern          slave;
        AForm*           test;

        test = slave.makeForm("osef", "nothing");

        delete test;
        for (int i = 0; i < 3; i++)
        {
                switch (i)
                {
                        case 0 : test = slave.makeForm("presidential pardon", "someone important");
                                break;
                        case 1 : test = slave.makeForm("robotomy request", "slave");
                                break;
                        case 2 : test = slave.makeForm("shrubbery creation", "here");
                                break;
                }
                if (test)
                {
                        Zafod.signForm(*test);
                        Zafod.execForm(*test);
                }
                delete test;
        }

        return 0;
}