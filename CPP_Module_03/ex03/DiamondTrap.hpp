#pragma once
//#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string& name);
	~DiamondTrap() override;
	DiamondTrap& operator=(const DiamondTrap &other);
	DiamondTrap(const DiamondTrap &other);
	void attack(std::string const &target) override;
	void whoAmI();

private:
	std::string		m_name;
};