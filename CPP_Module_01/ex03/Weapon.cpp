#include "Weapon.hpp"

const std::string		&Weapon::getType()
{
	return m_type;
}

void					Weapon::setType(std::string type)
{
	m_type = type;
}