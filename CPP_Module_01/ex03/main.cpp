#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int						main()
{
	{
		Weapon			club = Weapon("crude spiked club");

		Weapon			&ref = club;

		Weapon			club2 = Weapon("other club");

//		ref = club2;

		HumanA			bob("Bob", ref);
		bob.attack();
//		club.setType("some other type of club");
		bob.setWeapon(club2);
		bob.attack();
	}
	{
		Weapon			club = Weapon("crude spiked club");
		Weapon			club2 = Weapon("club2");

		HumanB			jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		jim.setWeapon(club2);
		jim.attack();
		club2.setType("some other type of club");
		jim.attack();
	}
	return (0);
}