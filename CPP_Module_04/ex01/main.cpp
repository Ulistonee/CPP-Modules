#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int 			main()
{
	const Dog		*j = new Dog();
	const Animal		*i = new Cat();
	const Brain 		*k = new Brain();
	Animal				*animals[10];


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	std::cout << k->getIdeas() << std::endl;
	for (int l = 0; l < 10; ++l) {
		if (l % 2 == 0)
			animals[l] = new Cat();
		else
			animals[l] = new Dog();
	}


}