#include "MutanStack.hpp"

int main(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top stack is : " << mstack.top() << std::endl;
	std::cout << "mstack size : " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "mstack size after pop : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();

	++it;
	--it;
	while (it != end)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << s.top() << " and " << mstack.top() << std::endl;
	return (0);
}/*
int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	it = find(mstack.begin(), mstack.end(), 737);
	if (it != mstack.end())
		std::cout << "find "<< *it << std::endl;
	else
		std::cout << "was not found" << std::endl;
	mstack.pop();
	mstack.pop();
	it = find(mstack.begin(), mstack.end(), 737);
	if (it != mstack.end())
		std::cout << "find "<< *it << std::endl;
	else
		std::cout << "was not found" << std::endl;


	return 0;
}*/
