# include "Weapon.hpp"

int				main()
{
	Weapon				weapon;
	std::string 		str;

	weapon.setType("gun");
	str = weapon.getType();
	weapon.setType("nuh");
	std::cout << str << std::endl;
	str = weapon.getType();
	std::cout << str << std::endl;


	return (0);
}