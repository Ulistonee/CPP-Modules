#include "Weapon.hpp"

class HumanB
{
private:
	Weapon				*m_weapon;
	std::string 		m_name;
public:
	HumanB(const std::string name);
	~HumanB();
	void 				attack();
	void 				setWeapon(Weapon &weapon);
};