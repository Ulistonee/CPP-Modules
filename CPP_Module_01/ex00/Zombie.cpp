#include "Zombie.hpp"

Zombie::Zombie() : m_name(""){
	std::cout << "default constructor has started\n";
}

Zombie::Zombie(std::string value) : m_name(value){}

Zombie::~Zombie()
{
	std::cout << m_name << " is wiped out of existence\n";
}

void 			Zombie::announce(void){
	std::cout << m_name << " BraiiiiiiinnnzzzZ...\n";
}

