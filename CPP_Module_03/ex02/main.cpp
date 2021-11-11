#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int			main()
{
	FragTrap		a("Alexander");
	ScavTrap		b("Boris");

	a.attack(b.getName());
	a.beRepaired(10);
	a.takeDamage(15);
	a.highFivesGuys();


	return (0);
}