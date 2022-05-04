#include <iostream>
#include <cstdint>
#include <cstdlib>

typedef	struct s_Data
{
	int i;
	char c;
}			Data;

Data* deserialize(uintptr_t raw)
{
	std::cout << "deserealiser called" << std::endl;
	return (reinterpret_cast<Data*>(raw));
}


uintptr_t serialize(Data* ptr)
{
	std::cout << "serealiser called" << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}



int main()
{
	Data* ptr = new Data;
	Data* save;

	uintptr_t	raw;
	ptr->c = 'W';
	ptr->i = 420;
	std::cout << "ptr original: "  << std::endl << "address : " << ptr << std::endl << "i : " << ptr->i << std::endl << "c :" << ptr->c << std::endl;
	raw = serialize(ptr);
	save = deserialize(raw);
	std::cout << "ptr after serealise" << std::endl << "address : " << save << std::endl << "i : " << save->i << std::endl << "c :" << save->c << std::endl;
	delete ptr;
	return(0);



}
