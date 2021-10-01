#include "Zombie.hpp"

Zombie*		newZombie(std::string name) {
	Zombie *newZombie;
	newZombie = new Zombie(name);
	return newZombie;
}

void 		randomChump(std::string name)
{
	Zombie		chump(name);

	chump.announce();
}