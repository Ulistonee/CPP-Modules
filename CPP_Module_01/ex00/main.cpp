#include "Zombie.hpp"

int				main()
{
	Zombie		*newZ;

	newZ = newZombie("newZombie");
	newZ->announce();
	randomChump("Chump");
	delete newZ;
	newZ = nullptr;
	return (0);
}