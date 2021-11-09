# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap() override;
	ScavTrap		&operator=(const ScavTrap &other);
	void			attack(std::string const & target) override;
	void 			guardGate();
};
