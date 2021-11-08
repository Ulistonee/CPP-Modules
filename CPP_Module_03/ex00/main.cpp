#include "ClapTrap.hpp"

int			main()
{
	ClapTrap		a("Alexander");
	ClapTrap		b("Boris");
	ClapTrap		c;

	a.attack(b.getName());
	c = b;
	c.attack(a.getName());
	a.beRepaired(10);

	return (0);
}