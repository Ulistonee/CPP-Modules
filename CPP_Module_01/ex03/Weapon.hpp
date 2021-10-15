#ifndef WEAPON_H
#define WEAPON_H
# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cstdlib>

class Weapon
{
private:
	std::string 		m_type;
public:
	Weapon(std::string type);
	const std::string&		getType() const;
	void 					setType(const std::string type);
};

#endif