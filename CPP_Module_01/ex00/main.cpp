#include "Zombie.hpp"

int 			Zombie::Sum(int a, int b, int c) {
	return (a + b + c);
}

int				Zombie::Sum(int a, int b) {
	int			sum;

	sum = a + b;
	return (sum);
}

double			Zombie::Sum(double a, double b) {
	return (a + b);
}

int				main()
{
	Zombie		zombie;
	int 		sum;
	double 		double_sum;

	sum = zombie.Sum(1,2);
	double_sum = zombie.Sum(1.1, 1.1);
	std::cout << sum << std::endl;
	std::cout << double_sum << std::endl;

	return (0);
}