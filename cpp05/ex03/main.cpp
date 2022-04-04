#include <iostream>
#include <stdexcept>
#include "Bureaucrate.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) {

	Bureaucrat	Zafod("Zafod", 1);
	Intern		slave;
	AForm*		test;

	test = slave.MakeForm("false", "nothing");

	for (int i = 0; i < 3; i++)
	{
		switch (i)
		{
			case 0 : test = slave.MakeForm("PresidentialPardonForm", "someone important");
				break;
			case 1 : test = slave.MakeForm("RobotomyRequestForm", "slave");
				break;
			case 2 : test = slave.MakeForm("ShrubberyCreationForm", "here");
				break;
		}
		Zafod.signForm(*test);
		Zafod.execForm(*test);
		delete test;
	}
	return 0;
}