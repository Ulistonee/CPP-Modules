#include "ScavTrap.hpp"

// methods

void 		ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << this->m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage!\n";
}

void 		ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << m_name << " took " << amount << " amount of damage\n";
}

void 		ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap " << m_name << " is going to be repaired with " << amount << " amount of points\n";
}

void 		ScavTrap::guardGate() {
	std::cout << "ScavTrap " << m_name << " has entered in Gate keeper mode\n";
}

// constructors and destructors

ScavTrap::ScavTrap() {
	m_name = "Default";
	m_hitpoints = 100;
	m_energy_points = 50;
	m_attack_damage = 20;
	std::cout << "default ScavTrap constructur for " << m_name << " is called\n";
}


ScavTrap::ScavTrap(std::string name) {
	m_name = name;
	m_hitpoints = 100;
	m_energy_points = 50;
	m_attack_damage = 20;
	std::cout << "parameter ScavTrap constructor for " << m_name << " is called\n";
}

ScavTrap::ScavTrap(const ScavTrap &other){
	std::cout << "copy ScavTrap constructor for " << this->m_name << " is called\n";
	*this = other;
}

ScavTrap::~ScavTrap() {
	std::cout << "default ScavTrap destructor for " << m_name << " is called\n";
}

// assignation operator

ScavTrap		&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "assignation operator for " << this->m_name << " is called\n";
	this->m_name = other.m_name;
	this->m_hitpoints = other.m_hitpoints;
	this->m_energy_points = other.m_energy_points;
	this->m_attack_damage = other.m_attack_damage;
	return *this;
}