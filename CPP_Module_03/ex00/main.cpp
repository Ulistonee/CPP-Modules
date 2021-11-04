#include "ClapTrap.hpp"

int			main()
{
	ClapTrap		a("Boris");
	ClapTrap		b("Alexander");

	std::cout << b.getName() << std::endl;
	b = a;
	std::cout << b.getName() << std::endl;

	return (0);
}