#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cstdlib>


class Zombie
{
private:
	std::string			m_name;

public:
	Zombie();
	Zombie(std::string value);
	~Zombie();
	void				announce(void);
};

Zombie*				newZombie(std::string name);
void				randomChump( std::string name );

#endif