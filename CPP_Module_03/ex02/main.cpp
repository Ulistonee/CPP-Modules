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
	std::cout << a.getHitpoints() << std::endl;
	std::cout << a.getAttack_damage() << std::endl;
	std::cout << a.getEnergy_points() << std::endl;


	return (0);
}