#include "mutantstack.hpp"

int			main()
{
	MutantStack<int>		mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);

	MutantStack<int>::iterator  it = mstack.begin();
	MutantStack<int>::iterator  ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int>		s(mstack);

	MutantStack<int>	a(mstack);


	MutantStack<int>::iterator  it2 = a.begin();
	MutantStack<int>::iterator  ite2= a.end();

	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	MutantStack<int>	b(a);
	MutantStack<int>::iterator  it3 = b.begin();
	MutantStack<int>::iterator  ite3= b.end();

	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}

	return (0);
}