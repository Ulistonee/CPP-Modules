#include "Zombie.hpp"

int				main()
{
	Zombie		*newZ;

	newZ = zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; ++i) {
		newZ[i].announce();
	}
	delete []newZ;
	newZ = nullptr;
	return (0);
}