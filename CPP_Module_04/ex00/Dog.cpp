#include "Dog.hpp"

Dog::Dog(){
	m_type = "Dog";
	std::cout << "default Dog constructor for " << this->m_type << " is called\n";
}

Dog::Dog(const Dog &other) {
	std::cout << "copy Dog constructor for " << this->m_type << " is called\n";
	*this = other;
}

Dog::~Dog() {
	std::cout << "default Dog destructor for " << this->m_type << " is called\n";
}

Dog		&Dog::operator=(const Dog &other) {
	std::cout << "Dog assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	return (*this);
}

void 	Dog::makeSound() const {
	std::cout << "Woof-woof!\n";
}