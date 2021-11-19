#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int 			main()
{
	const Dog			*j = new Dog();
	const Animal		*i = new Cat();
	Animal				*animals[10];

	delete j;
	delete i;

	for (int l = 0; l < 10; ++l) {
		if (l % 2 == 0)
			animals[l] = new Cat();
		else
			animals[l] = new Dog();
	}
	for (int k = 0; k < 10; ++k)
	{
		delete animals[k];
	}
	Dog basic;
	{
		Dog		tmp = basic;
	}


}