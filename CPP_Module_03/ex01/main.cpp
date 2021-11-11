#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int			main()
{
	ClapTrap		a("Alexander");
	ScavTrap		b("Boris");

	b.attack(a.getName());
	b.beRepaired(10);
	b.takeDamage(15);
	b.guardGate();
	a.beRepaired(10);
	a.attack(b.getName());
	std::cout << b.getHitpoints() << std::endl;
	std::cout << b.getEnergy_points() << std::endl;
	std::cout << b.getAttack_damage() << std::endl;

	return (0);
}