#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int 			main()
{
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
//	std::cout <<
}