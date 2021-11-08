#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public virtual FragTrap, public virtual ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string& name);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap &other);
	DiamondTrap(const DiamondTrap &other);
	void 			attack(std::string const &target);
	void			whoAmI(void);
	std::string		getName() const;
	unsigned int 	getEnergyPoint() const;
	unsigned int 	getHitPoint() const;
	unsigned int 	getAttackDamage() const;


private:
	std::string		m_name;
};