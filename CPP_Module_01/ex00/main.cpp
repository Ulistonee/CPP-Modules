#include "Zombie.hpp"

int				Zombie::Sum(int a, int b) {
	int			sum;

	sum = a + b;
	return (sum);
}

double			Zombie::Sum(double a, double b) {
	return (a + b);
}

void 			Zombie::Print() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Weight: " << weight << std::endl;

}

void 			Zombie::Alive() {
	if (CheckBrain())
		std::cout << "I'm alive!" << std::endl;
	else
		std::cout << "Unfortunately I have no brain so I'm dead ):";
}

int				main()
{
	Zombie		first_zombie("Zombie", 30, 85);

	first_zombie.Alive();
	return (0);
}