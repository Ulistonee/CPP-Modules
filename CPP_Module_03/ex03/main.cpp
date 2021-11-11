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
	std::cout << c.getHitpoints() << std::endl;
	std::cout << c.getEnergy_points() << std::endl;
	std::cout << c.getAttack_damage() << std::endl;

	return (0);
}