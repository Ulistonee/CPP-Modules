#include "DiamondTrap.hpp"


int			main()
{
	DiamondTrap		c("Alexander");

	c.attack("Boris");
	c.takeDamage(10);
	c.beRepaired(10);
	c.highFivesGuys();
	c.guardGate();
	c.whoAmI();

	return (0);
}