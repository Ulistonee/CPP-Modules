#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string& name) {
	this->m_name = name;
	(ClapTrap)m_name = name + "_clap_name";
	m_hitpoints = FragTrap::m_hitpoints;
}
