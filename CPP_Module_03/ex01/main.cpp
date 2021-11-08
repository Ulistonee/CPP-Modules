#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int			main()
{
	ClapTrap		a("Boris");
	ScavTrap		b("Alexander");

	a.beRepaired(10);
	a.takeDamage(15);
	a.attack(b.getName());
	b.guardGate();


	return (0);
}