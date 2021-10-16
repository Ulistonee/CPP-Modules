#include "Zombie.hpp"

Zombie*		newZombie(std::string name) {
	Zombie *newZombie;
	newZombie = new Zombie(name);
	if (!newZombie)
	{
		std::cout << "Couldn`t allocate memory\n";
		return nullptr;
	}
	return newZombie;
}
