#include "Zombie.hpp"

int				main()
{
	Zombie		first_zombie("Zombie");
	Zombie		*newZ;

	first_zombie.announce();
	newZ = newZombie("newZombie");
	newZ->announce();
	randomChump("Chump");
	delete newZ;
	return (0);
}