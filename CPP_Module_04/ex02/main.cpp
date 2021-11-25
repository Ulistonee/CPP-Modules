#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int 			main()
{
	const Dog			*j = new Dog();
	const Animal		*i = new Cat();
	Animal				*animals[10];

	delete j;
	delete i;

	std::cout << "----------------------------------\n";
	std:: cout.width(10);
	std::cout << "filling Animal array\n";
	std::cout << "----------------------------------\n";
	for (int l = 0; l < SIZE; ++l) {
		if (l % 2 == 0)
			animals[l] = new Cat();
		else
			animals[l] = new Dog();
	}
	animals[SIZE] = nullptr;
	std::cout << "----------------------------------\n";
	std:: cout.width(10);
	std::cout << "deleting Animal array\n";
	std::cout << "----------------------------------\n";
	for (int k = 0; k < 10; ++k)
	{
		if (animals[k] )
			delete animals[k];
	}
	std::cout << "----------------------------------\n";
	std:: cout.width(10);
	Dog basic;
	{
		Dog		tmp = basic;
	}

//	Animal test;
}