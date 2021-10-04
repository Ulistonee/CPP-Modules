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
			Zombie(std::string const & name);
			~Zombie();

			void				announce(void);
			void				setName(std::string valueName);
		};

Zombie*				newZombie(std::string name);
void				randomChump( std::string name );
Zombie*				zombieHorde( int N, std::string name );

#endif