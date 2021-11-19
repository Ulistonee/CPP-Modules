#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int 			main()
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();
	const WrongAnimal	*k = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	k->makeSound();
}