#include "ClapTrap.hpp"

// methods

void 		ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage!\n";
}

void 		ClapTrap::takeDamage(unsigned int amount) {
	std::cout << m_name << " took " << amount << " amount of damage\n";
}

void 		ClapTrap::beRepaired(unsigned int amount) {
	std::cout << m_name << " is going to be repaired with " << amount << " amount of points\n";
}

// constructors and destructors

ClapTrap::ClapTrap() : m_name("Default"), m_hitpoints(10), m_energy_points(10), m_attack_damage(0){
	std::cout << "default ClapTrap constructor for " << this->m_name << " is called\n";
}

ClapTrap::ClapTrap(std::string name) : m_hitpoints(10), m_energy_points(10), m_attack_damage(0){
	this->m_name = name;
	std::cout << "parameter ClapTrap constructor for " << this->m_name << " is called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "copy ClapTrap constructor for " << this->m_name << " is called\n";
	*this = other;
}

// assignation operator

ClapTrap		&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "assignation operator for " << this->m_name << " is called\n";
	this->m_name = other.m_name;
	this->m_hitpoints = other.m_hitpoints;
	this->m_energy_points = other.m_energy_points;
	this->m_attack_damage = other.m_attack_damage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "default ClapTrap destructor for " << this->m_name << " is called\n";
}

// getters

std::string 		ClapTrap::getName() {
	return m_name;
}

// setters

void 				ClapTrap::setName(std::string name) {
	m_name = name;
}

