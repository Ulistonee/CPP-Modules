#include "Zombie.hpp"

Zombie::Zombie()
	: m_name("")
{
	std::cout << "default constructor started" << std::endl;
}

Zombie::Zombie(std::string const & name)
	: m_name(name)
{
	std::cout << "parameter constructor started" << std::endl;
}

Zombie::~Zombie(){
	std::cout << m_name << " is wiped out of existence" << std::endl;
}

void 			Zombie::setName(std::string valueName) {
	m_name = valueName;
}

void 			Zombie::announce(void){
	std::cout << m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}