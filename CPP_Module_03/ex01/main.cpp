#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int			main()
{
	ClapTrap		a("Alexander");
	ScavTrap		b("Boris");

//	a.beRepaired(10);
//	a.takeDamage(15);
	a.attack(b.getName());
//	b.guardGate();
	b.attack(a.getName());
//	b.

	return (0);
}