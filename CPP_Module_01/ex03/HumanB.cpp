#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : m_weapon(nullptr) {
	m_name = name;
}

HumanB::~HumanB()
{
	std::cout << m_name << " is wiped out of existence" << std::endl;
}

void HumanB::attack()
{
	if (!(m_weapon))
		std::cout << m_name << " Give peace" << std::endl;
	else
		std::cout << m_name <<  " attacks with his " << m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}

//void HumanB::getWeapon()
//{
//	std::cout << "wewe" << m_weapon->getType() << std::endl;
//}