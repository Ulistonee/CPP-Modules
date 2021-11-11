#include "ClapTrap.hpp"

int			main()
{
	ClapTrap		a("Alexander");
	ClapTrap		b("Boris");

	a.attack(b.getName());
	a.takeDamage(10);
	a.beRepaired(10);
	std::cout << a.getHitpoints() << std::endl;
	std::cout << a.getEnergy_points() << std::endl;
	std::cout << a.getAttack_damage() << std::endl;

	return (0);
}