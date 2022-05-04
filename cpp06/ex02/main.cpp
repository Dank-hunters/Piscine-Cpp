
#include "Base.hpp"
#include <iostream>


Base* generate(void)
{
	int		random;

	std::srand(std::time(nullptr));
	random = std::rand() % 3;
	switch (random)
	{
	case 0 :
		return new A();
		break;
	case 1 :
		return new B();
		break;
	default:
		return new C();
		break;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Base : A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Base : B" << std::endl;
	else
		std::cout << "Base : C" << std::endl;
	return;
}

void identify(Base& p)
{
	try {
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "Base : A" << std::endl;
	}
	catch (std::bad_cast& e) {};
		try {
			static_cast<void>(dynamic_cast<B&>(p));
			std::cout << "Base : B" << std::endl;
	}
	catch (std::bad_cast& e) {};
	try {
		static_cast<void>(dynamic_cast<C &>(p));
		std::cout << "Base : C" << std::endl;
	}
	catch (std::bad_cast& e) {};
	return;

}

int main()
{
	Base* p = generate();

	identify(p);
	identify(*p);

	delete p;
	return(0);
}
