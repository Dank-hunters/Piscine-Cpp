#include "watever.hpp"

template <typename T>
void	print(T const& c)
{
	std::cout << "- " << c << std::endl;;
	return;
}


int main()
{
	int const tab[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	::iter(tab, 10, &print<int>);
	return (0);
}
