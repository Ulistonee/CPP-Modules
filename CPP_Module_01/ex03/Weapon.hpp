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
	const std::string 		&getType();
	void 					setType(std::string		type);
};