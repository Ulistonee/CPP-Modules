#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string& name) : ClapTrap(), FragTrap(), ScavTrap(){
	this->m_name = name;
	ClapTrap::m_name = name + "_clap_name";
	m_hitpoints = FragTrap::m_hitpoints;
	m_energy_points = ScavTrap::m_energy_points;
	m_attack_damage = FragTrap::m_attack_damage;
}
