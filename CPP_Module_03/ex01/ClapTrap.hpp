#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	virtual ~ClapTrap();
	ClapTrap		&operator=(const ClapTrap &other);
	virtual void	attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	std::string 	getName();
	void 			setName(std::string name);

protected:
	std::string 		m_name;
	unsigned int		m_hitpoints;
	unsigned int		m_energy_points;
	unsigned int 		m_attack_damage;

};

#endif