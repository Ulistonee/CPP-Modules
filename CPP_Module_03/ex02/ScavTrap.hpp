//#ifndef SCAV_TRAP_H
//#define SCAV_TRAP_H
//# include <iostream>
//# include <fstream>
//# include <string>
//# include <cstdlib>
//# include <cstdio>
//# include <cmath>
//# include <cstdio>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap();
	ScavTrap		&operator=(const ScavTrap &other);
	virtual void	attack(const std::string &target);
	void 			guardGate();
};

//#endif