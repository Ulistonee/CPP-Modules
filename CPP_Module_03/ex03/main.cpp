#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"


int			main()
{
//	FragTrap		a("Boris");
//	ScavTrap		b("Alexander");
	DiamondTrap		c;

	c.whoAmI();
	c.attack("Boris");
	c.highFivesGuys();
	c.guardGate();



	return (0);
}