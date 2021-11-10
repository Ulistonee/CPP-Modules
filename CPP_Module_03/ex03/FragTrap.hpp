#pragma once
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap() override;
	FragTrap	&operator=(const FragTrap &other);
	void 		highFivesGuys(void);

};