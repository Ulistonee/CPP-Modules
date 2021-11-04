#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int			main()
{
	FragTrap		a("Boris");
	ScavTrap		b("Alexander");

	a.beRepaired(10);
	a.takeDamage(15);
	a.attack(b.getName());
	b.guardGate();
	a.highFivesGuys();


	return (0);
}