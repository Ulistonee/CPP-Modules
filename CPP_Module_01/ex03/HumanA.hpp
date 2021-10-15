#include "Weapon.hpp"

class HumanA
{
private:
	Weapon				&m_weapon;
	std::string 		m_name;
public:
	HumanA(const std::string name, Weapon &weapon);
	~HumanA();
	void 				attack();
};