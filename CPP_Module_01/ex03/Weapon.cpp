#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type)
{}

void					Weapon::setType(const std::string type)
{
	m_type = type;
}

const std::string 		&Weapon::getType() const {
	return m_type;
}

Weapon::~Weapon() {
	std::cout << m_type << " is wiped out of existence" << std::endl;
}
