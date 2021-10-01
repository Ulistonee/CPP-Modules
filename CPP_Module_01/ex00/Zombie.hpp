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
	std::string			name;

public:
	Zombie(std::string value)
	{
		name = value;
	}
	~Zombie()
	{
		std::cout << name << " is wiped out of existence" << std::endl;
	}

	void				announce(void);
};

Zombie*				newZombie(std::string name);
void				randomChump( std::string name );

#endif