#include "FragTrap.hpp"

// methods

void		FragTrap::highFivesGuys() {
	std::cout << "High fives, heh? - " << this->m_name << " is asking\n";
}

// constructors and destructors

FragTrap::FragTrap() {
	std::cout << "default FragTrap constructur for " << m_name << "is called\n";
	m_hitpoints = 100;
	m_energy_points = 100;
	m_attack_damage = 30;
}


FragTrap::FragTrap(std::string name) {
	m_name = name;
	m_hitpoints = 100;
	m_energy_points = 100;
	m_attack_damage = 30;
	std::cout << "parameter FragTrap constructor for " << m_name << " is called\n";
}

FragTrap::FragTrap(const FragTrap &other)  : ClapTrap(other) {
	std::cout << "copy FragTrap constructor for " << this->m_name << " is called\n";
	*this = other;
}

FragTrap::~FragTrap() {
	std::cout << "default destructor for FragTrap is called\n";
}

// assignation operator

FragTrap		&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "assignation operator for " << this->m_name << " is called\n";
	this->m_name = other.m_name;
	this->m_hitpoints = other.m_hitpoints;
	this->m_energy_points = other.m_energy_points;
	this->m_attack_damage = other.m_attack_damage;
	return *this;
}