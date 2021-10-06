#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon &weapon) : m_weapon(weapon), m_name(name) {
}

HumanA::~HumanA()
{
	std::cout << m_name << " is wiped out of existence" << std::endl;
}

void HumanA::attack()
{
	std::cout << m_name <<  " attacks with his " << m_weapon.getType() << std::endl;
}