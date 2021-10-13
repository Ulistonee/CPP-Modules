#include "Zombie.hpp"



Zombie::Zombie(std::string value) : m_name(value){}

Zombie::~Zombie()
{
	std::cout << m_name << " is wiped out of existence" << std::endl;
}

void 			Zombie::announce(void){
	std::cout << m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

