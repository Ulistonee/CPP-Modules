#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->m_name = "";
	ClapTrap::m_name = this->m_name + "_clap_name";
	this->m_hitpoints = FragTrap::m_hitpoints;


}
