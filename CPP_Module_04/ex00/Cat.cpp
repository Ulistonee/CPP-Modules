#include "Cat.hpp"

Cat::Cat(){
	m_type = "Cat";
	std::cout << "default Cat constructor for " << this->m_type << " is called\n";
}

Cat::Cat(const Cat &other) {
	std::cout << "copy Cat constructor for " << this->m_type << " is called\n";
	*this = other;
}

Cat::~Cat() {
	std::cout << "default Cat destructor for " << this->m_type << " is called\n";
}

Cat		&Cat::operator=(const Cat &other) {
	std::cout << "Cat assignation operator for " << this->m_type << " is called\n";
	this->m_type = other.m_type;
	return (*this);
}

void 	Cat::makeSound() const{
	std::cout << "Meow-meow!\n";
}