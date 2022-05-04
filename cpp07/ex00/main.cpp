#include "watever.hpp"
/*
int main(void) {
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}

*/

int main()
{
	float x1 = 5;
	float y1 = 10;
	float	x2 = 8;
	float y2 = 15;

	std::cout << min<float>(x1, y1) << std::endl;
	std::cout << max<float>(x1, y1) << std::endl;
	swap<float>(x1, x2);
	swap<float>(y1, y2);
	std::cout << max<float>(x1, y1) << std::endl;
	std::cout << min<float>(x1, y1) << std::endl;
	return 0;
}