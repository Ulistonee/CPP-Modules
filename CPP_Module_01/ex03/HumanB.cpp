#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : m_weapon(nullptr), m_name(name) {
}

HumanB::~HumanB()
{
	std::cout << m_name << " is wiped out of existence\n";
}

void HumanB::attack()
{
	if (!(m_weapon))
		std::cout << m_name << " is unarmed\n";
	else
		std::cout << m_name <<  " attacks with his " << m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	m_weapon = &weapon;
}