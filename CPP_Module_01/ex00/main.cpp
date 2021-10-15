#include "Zombie.hpp"

int				main()
{
	Zombie		zombie;
	Zombie		*newZ;

	newZ = newZombie("newZombie");
	newZ->announce();
	randomChump("Chump");
	delete newZ;
	return (0);
}