#include "easyfind.hpp"

int		main()
{
	std::vector<int>					myvec;

	myvec.push_back(0);
	myvec.push_back(1);
	myvec.push_back(2);
	myvec.push_back(3);

	std::vector<int>::const_iterator 	it;
	for (it = myvec.begin();  it != myvec.end() ; ++it)
	{
		std::cout << *it << std::endl;
	}
	try
	{
		std::vector<int>::iterator 			it;
		it = easyfind(myvec, 22);
		std::cout << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}