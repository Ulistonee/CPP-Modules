#include "DiamondTrap.hpp"

// methods

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void 		DiamondTrap::takeDamage(unsigned int amount) {
	std::cout << "DiamondTrap " << m_name << " took " << amount << " amount of damage\n";
}

void 		DiamondTrap::beRepaired(unsigned int amount) {
	std::cout << "DiamondTrap " << m_name << " is going to be repaired with " << amount << " amount of points\n";
}

void DiamondTrap::whoAmI() {
	std::cout << "My Diamond name is " << this->m_name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::m_name << std::endl;
}


// constructors and destructor

DiamondTrap::DiamondTrap(){
	this->m_name = "Default";
	m_hitpoints = FragTrap::m_hitpoints;
	m_energy_points = ScavTrap::m_energy_points;
	m_attack_damage = FragTrap::m_attack_damage;
	std::cout << "Default DiamondTrap constructor for " << this->m_name << " called\n";
}

DiamondTrap::DiamondTrap(std::string name) {
	this->m_name = name;
	ClapTrap::m_name = name + "_clap_name";
	m_hitpoints = FragTrap::m_hitpoints;
	m_energy_points = ScavTrap::m_energy_points;
	m_attack_damage = FragTrap::m_attack_damage;
	std::cout << "Parameter DiamondTrap constructor for " << this->m_name << " called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	std::cout << "copy DiamondTrap constructor for " << this->m_name << " is called\n";
	*this = other;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "default DiamondTrap destructor for " << this->m_name << " is called\n";
}

// assignation operator

DiamondTrap		&DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "assignation operator for " << this->m_name << " is called\n";
	this->m_name = other.m_name;
	this->m_hitpoints = other.m_hitpoints;
	this->m_energy_points = other.m_energy_points;
	this->m_attack_damage = other.m_attack_damage;
	return *this;
}



